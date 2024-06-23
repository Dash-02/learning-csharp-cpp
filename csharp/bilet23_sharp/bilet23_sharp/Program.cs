using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bilet23_sharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Сбито самолетов: ");
            int airplanes = Convert.ToInt32(Console.ReadLine());

            Console.Write("Сбито ракет: ");
            int rockets = Convert.ToInt32(Console.ReadLine());

            Console.Write("Сбито спутников: ");
            int satellites = Convert.ToInt32(Console.ReadLine());

            int allPoints = airplanes * 50 + rockets * 100 + satellites * 200;

            string text = $"Игрок набрал {allPoints} очков, " +
                $"сбил {airplanes} самолетов, {rockets} ракет, {satellites} спутников";

            Console.WriteLine(text);

            string path = "bilet23_sharp.txt";
            using (StreamWriter writer = new StreamWriter(path, false)) 
            {
                writer.WriteLine(text);
            }
        }
    }
}
