using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bilet24_sharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string path = "bilet24_sharp.txt";

            decimal salaryWorker = 0;

            Console.Write("Введите заработок рабочих на фабрике (в руб.): ");
            double sumSalary = Convert.ToDouble(Console.ReadLine());

            Console.Write("Введите количество рабочих: ");
            double countWorkers = Convert.ToDouble(Console.ReadLine());

            salaryWorker = Convert.ToDecimal(sumSalary / countWorkers);
            Console.WriteLine($" до оругления{salaryWorker}");
            salaryWorker = Math.Round(salaryWorker, 2);
           
            Console.WriteLine($"Заработок каждого рабочего составляет по {salaryWorker} руб.");

            string text = $"Заработок каждого из {countWorkers} рабочих составляет по {salaryWorker} руб.";
            using (StreamWriter writer = new StreamWriter(path, false))
            {
                writer.WriteLine(text);
            }
            Console.WriteLine("Файл записан");
        }
    }
}
