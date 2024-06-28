// Автомобиль на каждом из пяти одинаковых по длине участках дороги 
// шел с известной средней скоростью. Составьте алгоритм и программу для 
// определения средней скорости на всем пути.

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bilet16_sharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double sumSpeed = 0;
            double averageSpeed;
            double[] speeds = new double[5];
            for (int i = 0; i < 5; i++) 
            {
                Console.Write($"Введите скорость автомобиля на {i+1} участке дороги (км/ч): ");
                speeds[i] = Convert.ToDouble(Console.ReadLine());

                sumSpeed += speeds[i];
            }

            averageSpeed = sumSpeed / speeds.Length;

            string text = $"Средняя скорость автомобиля на всем пути составляет {averageSpeed} км/ч";
            string path = "bilet16_sharp.txt";

            Console.WriteLine(text);

            using (StreamWriter writer = new StreamWriter(path, false)) 
            {
                writer.WriteLine(text);
                Console.WriteLine("Файл записан");
            }
        }
    }
}
