using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace all
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //int[] precipitation = { 0, 1, 0, 0, 2, 1, 3, 0, 1, 0, 1, 0, 0, 0 };

            //int count = 0;
            //for (int i = 0; i < precipitation.Length; i++)
            //{
            //    while (precipitation[i] == 0 && precipitation[i + 1] == 0)
            //    {
            //        count++;
            //        break;
            //    }
            //}
            //Console.WriteLine("Количество первых дней без осадков: " + count);

            //Console.Write("Введите цену за квадратный метр ткани в рублях: ");
            //double price = double.Parse(Console.ReadLine());
            //Console.Write("Введите длину ткани в метрах: ");
            //double length = double.Parse(Console.ReadLine());

            //double wight = 0.8;

            //double area = length * wight;

            //double totalCost = price * area;

            //string result = $"Стоимость за {area} кв. метров составит {totalCost:F2} рублей";

            ////File.WriteAllText("result.txt", result);
            //Console.WriteLine($"результаты записаны {result}");
            //Console.ReadLine();

            //int[] rainfall = { 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0 };
            //int countA = rainfall.TakeWhile(x => x == 0).Count();
            //int countB = rainfall.Count(x => x == 0);



            //string result = $"Количество дней без осадков в мае (случай а): {countA}\n" +
            //    $"Количество дней без осадков в мае (случай а): {countB}";

            //File.WriteAllText("result.txt", result);
            //Console.WriteLine($"результаты записаны {result}");
            //Console.ReadLine();

            //int[] rainfall1 = { 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0 };
            //int countA1 = rainfall1.TakeWhile(x => x == 0).Count();
            //int countB1 = rainfall1.Count(x => x == 0);
            //string result = $"Количество дней без осадков в мае (случай а): {countA1}\n" +
            //    $"Количество дней без осадков в мае (случай а): {countB1}";
            //Console.WriteLine($"результаты записаны {result}");

            //Console.Write("Введите заработок мальчика за каждую из первых 75 газет: ");
            //double A = double.Parse(Console.ReadLine());
            //Console.Write("Введите заработок за каждую последующую газету: ");
            //double X = double.Parse(Console.ReadLine());
            //Console.Write("Введите количество проданных газет: ");
            //double B = double.Parse(Console.ReadLine());

            //double salary = 0.0;
            //if (B <= 75)
            //{
            //    salary = A * B;
            //}
            //else if (B > 75)
            //{
            //    salary = A * 75 + (B - 75) * X;
            //}

            //string result = $"Сумма, которую заработает мальчик за {B} проданных газет: {salary:F2} рублей";

            ////File.WriteAllText("result.txt", result);
            //Console.WriteLine($"результаты записаны {result}");
            //Console.ReadLine();

            //int[] heights = { 190, 189, 188, 186, 185, 184, 180, 178, 176, 170, 167, 160, 158, 157, 155 };
            //for (int i = 0; i < heights.Length; i++)
            //{
            //    Console.WriteLine($"Рост {i + 1} ученика: {heights[i]}");
            //}

            //int mesto = 0;
            //Console.Write("Введите рост нового ученика: ");
            //int height = int.Parse(Console.ReadLine());

            //for (int i = 0; i < heights.Length; i++)
            //{
            //    if (height > heights.Min() && height < heights.Max())
            //    {
            //        if (height < heights[i])
            //        {
            //            mesto = i + 1;
            //        }
            //    }
            //    else
            //    {
            //        Console.WriteLine("Рост нового ученика должен быть больше самого низкого и меньше самого высокого учеников");
            //        break;
            //    }
            //}

            //string result = $"Ученик с ростом {height} см. займет {mesto} место в классе";

            ////File.WriteAllText("result.txt", result);
            //Console.WriteLine($"результаты записаны {result}");
            //Console.ReadLine();
            //double a = 100;
            //double y = 20;
            //double total = 0;

            //int year = 1;
            //int year1 = 0; int year2 = 0; int year3 = 0;

            //while (year1 == 0 || year2 == 0 || year3 == 0)
            //{
            //    double curr = a * y;
            //    total += curr;

            //    if (y > 22 && year1 == 0)
            //    {
            //        year1 = year;
            //    }
            //    if (a > 120 && year2 == 0)
            //    {
            //        year2 = year;
            //    }
            //    if (total > 800 && year3 == 0)
            //    {
            //        year3 = year;
            //    }

            //    a = 1.05;
            //    y = 1.02;
            //    year++;

            //}

            //string result = $"Год, в котором урожайность превысит 22 цент/га: {year1}\n" +
            //    $"Год, в котором площадь станет больше 120 гектаров: {year2}\n" +
            //    $"Год, в котором общий урожай превысит 800 центнеров: {year3}\n";

            //File.WriteAllText("result.txt", result);
            //Console.WriteLine("Результат записан");
            //Console.ReadLine();

        }
    }
}
