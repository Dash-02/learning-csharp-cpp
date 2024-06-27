// Фруктовый магазин продает яблоки поштучно по 5 руб., груши по 7 руб., 
// апельсины по 8 руб. В первые два дня недели продано: понедельник - Х яблок,
// Y груш, Z апельсинов; вторник - X яблок, Y груш, Z апельсинов. Напишите 
// программу, которая будет вычислять, на какую сумму продал магазин фруктов 
// в каждый из этих дней и за оба дня вместе.

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bilet17_sharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int appleCost = 5;
            int pearCost = 7;
            int orangeCost = 8;
            int countApple, countPear, countOrange;
            string[] days = { "Понедельник", "Вторник" };
            int sumMon = 0;
            int sumTue = 0;
            int sumDays = 0;

            for (int i = 0; i < days.Length; i++) {
                Console.WriteLine($"В {days[i]} было продано: ");
                Console.Write("яблок (шт.): ");
                countApple = Convert.ToInt32(Console.ReadLine());

                Console.Write("груш (шт.): ");
                countPear = Convert.ToInt32(Console.ReadLine());

                Console.Write("апельсинов (шт.): ");
                countOrange = Convert.ToInt32(Console.ReadLine());

                if (days[i] == "Понедельник")
                {
                    sumMon = (appleCost * countApple) + (pearCost * countPear) + (orangeCost * countOrange);
                }
                else if (days[i] == "Вторник") {
                    sumTue = (appleCost * countApple) + (pearCost * countPear) + (orangeCost * countOrange);
                }
                Console.WriteLine();
            }

            sumDays = sumMon + sumTue;

            string text = $"В понедельник магазин продал фруктов на {sumMon} руб.\n" +
                $"Во вторник магазин продал фруктов на {sumTue} руб.\n" + $"За оба дня магазин продал фруктов на {sumDays} руб.\n";

            Console.WriteLine(text);

            string path = "bilet17_sharp.txt";

            using (StreamWriter writer = new StreamWriter(path, false)) 
            {
                writer.WriteLine(text);
                Console.WriteLine("Файл записан");
            }
        }
    }
}
