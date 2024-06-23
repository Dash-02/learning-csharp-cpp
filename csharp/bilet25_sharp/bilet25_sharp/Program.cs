//Каждую неделю Юра получает деньги на мелкие расходы. Из них он 
//тратит Х рублей на сладости. Это составляет одну четверть того, что он 
//получает еженедельно. Юра сберегает одну треть того, что остается после 
//покупки сладостей. Составьте программу, которая выведет на экран сумму,
//накопленную Юрой за год.

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bilet25_sharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string path = "bilet25_sharp.txt";

            Console.WriteLine("Введите сумму, которую Юра получает каждую неделю: ");
            double weeksMoney = Convert.ToDouble(Console.ReadLine()); // деньги получаемые каждую неделю
            double weeksYear = 52.143; // кол-во неделей в году
            double x = 0; // остаток (отнимаем 1/4 от weeksMoney)
            double y = 0; // сберегаемая 1/3 от x
            double sumOfYear = 0; // накопленная сумма за год

            x = weeksMoney - (weeksMoney / 4.0);
            y = x / 3.0;

            sumOfYear = y * weeksYear;
            Console.WriteLine($"sum: {sumOfYear}");

            string text = $"Юра накопил за год: {sumOfYear} руб.";
            using (StreamWriter writer = new StreamWriter(path, false))
            {
                writer.WriteLine(text);
            }
            Console.WriteLine("Файл записан");
        }
    }
}
