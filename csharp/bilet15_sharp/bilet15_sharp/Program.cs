// Последовательность Фибоначчи образуется так: первый и второй члены 
// последовательности равны 1, каждый следующий равен сумме двух 
// предыдущих (1, 1, 2, 3, 5, 8, 13, …). Найти:
// а) первое число в последовательности Фибоначчи, большее n (значение n 
// вводится с клавиатуры; n > 1);
// б) сумму всех чисел в последовательности Фибоначчи, которые не 
// превосходят 1000.

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bilet15_sharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int f = 1;
            int fn = 1;
            int f2 = 0;
            int fn2 = 0;
            int sum = 0;
            string a = "";
            string b = "";
            Console.Write("Введите число n: ");
            double n = Convert.ToDouble(Console.ReadLine());

            if (n < 1) {
                Console.WriteLine("Число n должно быть больше 1");
                Console.Write("Введите число n: ");
                n = Convert.ToDouble(Console.ReadLine());
            }

            do
            {
                Console.WriteLine($"{fn} ");
                fn = fn + fn2;
                int fn3 = fn2;
                fn2 = fn - fn3;
                if (fn > n)
                {
                    a = $"Первое число в последовательности Фибоначчи, большее {n} - {fn}";
                    Console.WriteLine(a);
                }
                else if (fn == n) {
                    a = $"Первое число в последовательности Фибоначчи, большее {n} - {fn + fn2}";
                    Console.WriteLine(a);
                }
            } while (fn < n);

            while (f < 1000)
            {
                sum += f;
                Console.WriteLine($"{f} ");
                f = f + f2;
                int f3 = f2;
                f2 = f - f3;
            }
            b = $"Сумма всех чисел Фибоначчи, которые не превосходят 1000 = {sum}";
            Console.WriteLine(b);

            string path = "bilet15_cpp.txt";

            using (StreamWriter writer = new StreamWriter(path, false)) {
                writer.WriteLine(a);
                writer.WriteLine(b);
                Console.WriteLine("Файл записан");
            }
        }
    }
}
