#include <iostream>

using namespace std;

class Term {
public:
	int grad;
	int coefficient;
	Term() :grad(0), coefficient(0) {};
	Term(int grad, int coefficient) {
		this->grad = grad;
		this->coefficient = coefficient;
	}
};

class polinom {
	int count;
	int n;
	Term data[100];
public:
	polinom() {
		count = 0;
	}
	polinom impart(polinom p1, polinom p2);
	polinom adunare(polinom p1, polinom p2);
	polinom addterm(Term t);
	polinom sortare();
	void print();
};
polinom polinom::adunare(polinom p1, polinom p2)
{
	for (int j = 0;j < p2.count;j++)
		addterm(p2.data[j]);
	for (int i = 0;i < count;i++)
		if (data[i].coefficient == 0)
		{
			data[i] = data[count - 1];
			count--;
		}
	return *this;

}

polinom polinom::addterm(Term t)
{
	bool found = 0;
	for (int i = 0;i < count;i++)
		if (data[i].grad == t.grad)
		{
			data[i].coefficient += t.coefficient;
			found = 1;
		}
	if (found == 0) {
		data[count] = t;
		count++;
	}
}

polinom polinom::sortare()
{
	for (int i = 0;i < count;i++)
		for (int j = i + 1;j < count;j++) {
			if (data[i].grad < data[j].grad) {
				swap(data[i], data[j]);
			}
		}
}
polinom polinom::impart(polinom p1, polinom p2)

{
	polinom d, c;
	int i = 0, j;
	d.n = p2.n;
	while (p1.data[0].grad >= p2.data[0].grad)
	{
		data[i].coefficient = p1.data[0].coefficient / p2.data[0].coefficient;
		data[i].grad = p1.data[0].grad - p2.data[0].grad;
		for (j = 0;j < p2.n;j++)
		{
			d.data[j].coefficient = p2.data[j].coefficient * data[i].coefficient;
			d.data[j].grad = p2.data[j].grad + data[i].grad;
		}

		c.adunare(p1, d);
		p1 = c;
		p1.sortare();
		i++;
	}

	n = i;
	for (i = 0;i < p1.n;i++)
		if (p1.data[i].coefficient == 0)
		{
			Term temp = p1.data[i];
			p1.data[i] = p1.data[p1.n - 1];
			p1.data[p1.n - 1] = temp;
			p1.n--;
		}

	for (i = 0;i < n;i++)
		if (data[i].coefficient == 0)
		{
			Term temp = data[i];
			data[i] = data[n - 1];
			data[n - 1] = temp;
			n--;
		}
	return *this;
}


int main()
{


}
