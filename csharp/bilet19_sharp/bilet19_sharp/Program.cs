// Мальчик может бегать в три раза быстрее, чем ходить. Скорость его 
// ходьбы равна 4 км/ч. Он принял участие в марафонском забеге, но сошел с 
// дистанции, пробежав только Х км. Сколько времени он потратил на 
// преодоление этого расстояния.

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bilet19_sharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int walkBoy = 4;
            double runBoy = 3 * walkBoy; // скорость мальчика при беге
            double hour = 1;

            Console.Write("Какую дистанцию пробежал мальчик? Введите в км: ");
            double length = Convert.ToDouble(Console.ReadLine());

            if (length > 0)
            {
                hour = length  / runBoy;
            }
            else
            {
                Console.Write("Дистанция не может быть меньше 0 км! Повторите: ");
                length = Convert.ToDouble(Console.ReadLine());
            }

            hour = Math.Round(hour, 2);

            string text = $"На преодоление {length} км мальчик потратил {hour} часов";

            Console.WriteLine(text);

            string path = "bilet19_sharp.txt";
            using (StreamWriter writer = new StreamWriter(path, false)) { 
                writer.WriteLine(text);
                Console.WriteLine("Файл записан");
            }
        }
    }
}
