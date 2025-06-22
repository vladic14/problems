using GMap.NET;
using GMap.NET.WindowsForms;
using GMap.NET.WindowsForms.Markers;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows.Forms;

namespace licenta4
{
    public partial class Form1 : Form
    {
        private GMapOverlay markersOverlay;
        private Dictionary<string, List<BusStop>> busRoutes;

        public Form1()
        {
            InitializeComponent();
            markersOverlay = new GMapOverlay("markers");
            InitializeBusRoutes();

            this.FormClosing += Form1_FormClosing; // Abonăm metoda de gestionare a închiderii formularului
        }

        private void InitializeBusRoutes()
        {
            // Initialize bus routes with sample data
            busRoutes = new Dictionary<string, List<BusStop>>
            {
                {
                    "Autobuzul 25", new List<BusStop>
                    {
                        new BusStop("Statia 1", new PointLatLng(47.788596, 27.896112)),
                        new BusStop("Statia 2", new PointLatLng(47.783655, 27.894109)),
                        new BusStop("Statia 3", new PointLatLng(47.782325, 27.890799)),
                        new BusStop("Statia 4", new PointLatLng(47.778741, 27.892870)),
                        new BusStop("Statia 5", new PointLatLng(47.773027, 27.898180)),
                        new BusStop("Statia 6", new PointLatLng(47.768607, 27.902011)),
                        new BusStop("Statia 7", new PointLatLng(47.766700, 27.903964)),
                        new BusStop("Statia 8", new PointLatLng(47.766700, 27.903964)),
                        new BusStop("Statia 9", new PointLatLng(47.760058, 27.917149)),
                        new BusStop("Statia 10", new PointLatLng(47.759881, 27.922337)),
                        new BusStop("Statia 11", new PointLatLng(47.761603, 27.925848)),
                        new BusStop("Statia 12", new PointLatLng(47.763388, 27.929753)),
                        new BusStop("Statia 13", new PointLatLng(47.766338, 27.936544)),
                        new BusStop("Statia 14", new PointLatLng(47.767682, 27.939602))

                    }
                },
                {
                    "Troleibuzul 2", new List<BusStop>
                    {
                        new BusStop("Station A", new PointLatLng(47.783582, 27.901056)),
                        new BusStop("Station B", new PointLatLng(47.783655, 27.894109)),
                        new BusStop("Statia 3", new PointLatLng(47.782325, 27.890799)),
                        new BusStop("Statia 4", new PointLatLng(47.778741, 27.892870)),
                        new BusStop("Statia 5", new PointLatLng(47.773027, 27.898180)),
                        new BusStop("Statia 6", new PointLatLng(47.768607, 27.902011)),
                        new BusStop("Statia 7", new PointLatLng(47.766700, 27.903964)),
                        new BusStop("Statia 8", new PointLatLng(47.766700, 27.903964)),
                        new BusStop("Statia 9", new PointLatLng(47.760058, 27.917149)),
                        new BusStop("Statia 10", new PointLatLng(47.759881, 27.922337)),
                        new BusStop("Statia 11", new PointLatLng(47.761603, 27.925848)),
                        new BusStop("Statia 12", new PointLatLng(47.763388, 27.929753)),
                        new BusStop("Statia 13", new PointLatLng(47.766338, 27.936544)),
                        new BusStop("Statia 14", new PointLatLng(47.767682, 27.939602))
                    }
                },

                {
                    "Troleibuzul 3", new List<BusStop>
                    {
                        new BusStop("Station A", new PointLatLng(47.766639, 27.904207)),
                        new BusStop("Station B", new PointLatLng(47.764515, 27.898521)),
                        new BusStop("Statia 3", new PointLatLng(47.762023, 27.894991)),
                        new BusStop("Statia 4", new PointLatLng(47.757451, 27.887245)),
                        new BusStop("Statia 5", new PointLatLng(47.754919, 27.883125)),
                        new BusStop("Statia 6", new PointLatLng(47.753794, 27.881204)),
                        new BusStop("Statia 8", new PointLatLng(47.762632, 27.911887)),
                        new BusStop("Statia 9", new PointLatLng(47.760058, 27.917149)),
                        new BusStop("Statia 10", new PointLatLng(47.759881, 27.922337)),
                        new BusStop("Statia 11", new PointLatLng(47.761603, 27.925848)),
                        new BusStop("Statia 12", new PointLatLng(47.763388, 27.929753)),
                        new BusStop("Statia 13", new PointLatLng(47.766338, 27.936544)),
                        new BusStop("Statia 14", new PointLatLng(47.767682, 27.939602))
                    }
                },


                 {
                    "Troleibuzul 6", new List<BusStop>
                    {
                        new BusStop("Station A", new PointLatLng(47.750403, 27.943925)),
                        new BusStop("Station B", new PointLatLng(47.754493, 27.942047)),
                        new BusStop("Statia 3", new PointLatLng(47.754364, 27.939328)),
                        new BusStop("Statia 4", new PointLatLng(47.753069, 27.937273)),
                        new BusStop("Statia 5", new PointLatLng(47.750843, 27.930745)),
                        new BusStop("Statia 6", new PointLatLng(47.751240, 27.926818)),
                        new BusStop("Statia 8", new PointLatLng(47.752279, 27.923063)),
                        new BusStop("Statia 9", new PointLatLng(47.756060, 27.916870)),
                        new BusStop("Statia 10", new PointLatLng(47.752836, 27.905368))
                    }
                 },

                 {
                    "Troleibuzul 8", new List<BusStop>
                    {
                        new BusStop("Station A", new PointLatLng(47.780772, 27.957811)),
                        new BusStop("Station B", new PointLatLng(47.777961, 27.949635)),
                        new BusStop("Statia 3", new PointLatLng(47.773901, 27.949539)),
                        new BusStop("Statia 4", new PointLatLng(47.771082, 27.946352)),
                        new BusStop("Statia 5", new PointLatLng(47.767952, 27.940124)),
                        new BusStop("Statia 6", new PointLatLng(47.766878, 27.934578)),
                        new BusStop("Statia 8", new PointLatLng(47.767938, 27.932142)),
                        new BusStop("Statia 9", new PointLatLng(47.769397, 27.930218)),
                        new BusStop("Statia 10", new PointLatLng(47.773572, 27.928630)),
                        new BusStop("Statia 11", new PointLatLng(47.778078, 27.926731)),
                        new BusStop("Statia 12", new PointLatLng(47.783269, 27.925551)),
                        new BusStop("Statia 13", new PointLatLng(47.785410, 27.925181)),
                        new BusStop("Statia 14", new PointLatLng(47.785410, 27.925181)),
                        new BusStop("Statia 15", new PointLatLng(47.785410, 27.925181)),
                        new BusStop("Statia 16", new PointLatLng(47.785410, 27.925181)),
                        new BusStop("Statia 17", new PointLatLng(47.785410, 27.925181)),
                        new BusStop("Statia 18", new PointLatLng(47.785410, 27.925181)),
                        new BusStop("Statia 19", new PointLatLng(47.787176, 27.917284)),
                        new BusStop("Statia 20", new PointLatLng(47.782728, 27.909710)),
                        new BusStop("Statia 21", new PointLatLng(47.780933, 27.904678)),
                        new BusStop("Statia 22", new PointLatLng(47.783698, 27.900933))
                    }
                }
            };

            comboBox1.Items.AddRange(busRoutes.Keys.ToArray());
        }

        private void btnDisplay_Click(object sender, EventArgs e)
        {
            if (comboBox1.SelectedItem == null)
            {
                MessageBox.Show("Please select a bus route.");
                return;
            }

            string selectedBus = comboBox1.SelectedItem.ToString();
            if (busRoutes.ContainsKey(selectedBus))
            {
                DisplayRoute(busRoutes[selectedBus]);
                CenterAndZoomRoute(busRoutes[selectedBus]);
            }
        }

        private void DisplayRoute(List<BusStop> route)
        {
            markersOverlay.Markers.Clear();
            foreach (var stop in route)
            {
                AddMarker(stop.Coordinates.Lat, stop.Coordinates.Lng, stop.Name);
            }
        }

        private void AddMarker(double latitude, double longitude, string stopName)
        {
            GMarkerGoogle marker = new GMarkerGoogle(new PointLatLng(latitude, longitude), GMarkerGoogleType.red);
            marker.ToolTipText = stopName; // Adăugăm denumirea stației ca text pentru tooltip
            markersOverlay.Markers.Add(marker);
            gMapControl1.Overlays.Add(markersOverlay);
        }

        private void CenterAndZoomRoute(List<BusStop> route)
        {
            if (route.Count > 0)
            {
                double avgLat = route.Average(p => p.Coordinates.Lat);
                double avgLng = route.Average(p => p.Coordinates.Lng);
                gMapControl1.Position = new PointLatLng(avgLat, avgLng);
                gMapControl1.Zoom = 15; // Ajustăm nivelul de zoom după preferințe
            }
        }

        private void gMapControl1_Load(object sender, EventArgs e)
        {
            GMap.NET.GMaps.Instance.Mode = GMap.NET.AccessMode.ServerAndCache;
            gMapControl1.MapProvider = GMap.NET.MapProviders.GoogleMapProvider.Instance;
            gMapControl1.MinZoom = 2;
            gMapControl1.MaxZoom = 18;
            gMapControl1.Zoom = 15; // Setare zoom inițială pentru orașul Bălți
            gMapControl1.Position = new GMap.NET.PointLatLng(47.7591, 27.9294); // Setare poziție inițială pentru Bălți, Republica Moldova
            gMapControl1.MouseWheelZoomType = GMap.NET.MouseWheelZoomType.MousePositionAndCenter;
            gMapControl1.CanDragMap = true;
            gMapControl1.DragButton = MouseButtons.Left;
            gMapControl1.ShowCenter = false;
            gMapControl1.ShowTileGridLines = false;
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            // Event handler for combobox selection change
        }

        private void btnClear_Click(object sender, EventArgs e)
        {
            markersOverlay.Markers.Clear();
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            // Aici poți adăuga logica pentru a închide aplicația corect
            // De exemplu, poți opri toate procesele și resursele utilizate de aplicație
            // În cazul tău, opriți, probabil, conexiunea cu harta sau alte operațiuni necesare.
            GMap.NET.GMaps.Instance.DisableTileHost(); // Oprește conexiunea cu serverul de hărți

            // Poți adăuga alte acțiuni de închidere a aplicației aici, dacă este necesar

            // Închiderea formularului va închide aplicația dacă acest formular este formularul principal
        }

    }

    public class BusStop
    {
        public string Name { get; set; }
        public PointLatLng Coordinates { get; set; }

        public BusStop(string name, PointLatLng coordinates)
        {
            Name = name;
            Coordinates = coordinates;
        }
    }
}

