using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bilet18_sharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int countPaper = 0;
            double money = 0;

            Console.Write("Введите стоимость первых 75 газет (в руб.): ");
            double costFirstNewspaper = Convert.ToDouble(Console.ReadLine());

            Console.Write("Введите стоимость газет после 75 штук (в руб.): ");
            double costLateNewspaper = Convert.ToDouble(Console.ReadLine());

            Console.Write("Введите количество проданных газет: ");
            int countBuyPaper = Convert.ToInt32(Console.ReadLine());

            while (countPaper != countBuyPaper) {
                countPaper++;
                if (countPaper <= 75) 
                {
                    money += costFirstNewspaper;
                }
                else 
                {
                    money += costLateNewspaper;
                }
            }

            string text = $"Мальчик заработал {money} руб., продав {countPaper} газет";

            Console.WriteLine(text);

            string path = "bilet18_sharp.txt";
            using (StreamWriter writer = new StreamWriter(path, false)) 
            {
                writer.WriteLine(text);
                Console.WriteLine("Файл записан");
            }
        }
    }
}
