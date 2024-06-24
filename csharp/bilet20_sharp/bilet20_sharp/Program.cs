// Работник зарабатывает Х руб. за каждые 38 часов своей работы. Ему 
// платят в 1,5 раза больше за каждый час сверх 38 часов. Какую сумму он 
// получит, если работает А часов (А должно быть заведомо больше 38).

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bilet20_sharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double payHourWork = 0;
            int count = 0;

            Console.Write("Введите сколько работник получает денег за час работы (в руб.): ");
            double cost = Convert.ToDouble(Console.ReadLine());

            Console.Write("Введите количество часов работы: ");
            double countHours = Convert.ToDouble(Console.ReadLine());

            while (countHours <= 38) 
            {
                Console.Write("Должно быть больше 38 часов! Попробуйте снова: ");
                countHours = Convert.ToInt32(Console.ReadLine());
            }

            while (count < countHours) 
            {
                count++;
                if (count <= 38)
                {
                    payHourWork += cost;
                }
                else if (count > 38) 
                {
                    payHourWork += cost * 1.5;
                }
            }

            string text = $"За {countHours} ч работник заработал {payHourWork} руб.";
            Console.WriteLine(text);

            string path = "bilet20_sharp.txt";
            using (StreamWriter writer = new StreamWriter(path, false)) 
            {
                writer.WriteLine(text);
                Console.WriteLine("Файл записан");
            }
        }
    }
}
