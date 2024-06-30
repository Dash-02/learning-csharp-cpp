// В банке в зависимости от суммы вклада начисляемый процент по вкладу 
// может отличаться. Напишите консольную программу, в которую пользователь 
// вводит сумму вклада. Если сумма вклада меньше 100, то начисляется 5%. Если 
// сумма вклада от 100 до 200, то начисляется 7%. Если сумма вклада больше 
// 200, то начисляется 10%. В конце программа должна выводить сумму вклада 
// с начисленными процентами.

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bilet13_sharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Введите сумму вклада: ");
            double sum = Convert.ToDouble(Console.ReadLine());

            if (sum < 100) 
            {
                sum = sum + (sum * 0.05);
            }
            else if (sum >= 100 || sum <= 200)
            {
                sum = sum + (sum * 0.07);
            }
            else if (sum > 200)
            {
                sum = sum + (sum * 0.1);
            }
            string path = "bilet13_sharp.txt";
            string text = $"Сумма вклада с начисленными процентами: {sum}";
            Console.WriteLine(text);
            using (StreamWriter writer = new StreamWriter(path, false)) 
            {
                writer.WriteLine(text);
                Console.WriteLine("Файл записан");
            }
        }
    }
}
