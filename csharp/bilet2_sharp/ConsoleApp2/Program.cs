using System;
using System.Collections.Generic;
using System.IO; // need for StreamWriter
using System.Linq;
using System.Text;
using System.Threading.Tasks; // need for StreamWriter
using System.Linq;

namespace ConsoleApp2
{
    internal class Program
    {
        static async Task Main(string[] args)
        {
            Console.WriteLine("Введите натуральное число: ");
            string num = Console.ReadLine();
            int number = Convert.ToInt32(num);
            string path = "bilet2_sharp.txt";

            int count_nums = num.Length;
            int a = number;
            double sum = 0;
            double multiplicate = 1;
            double average = 0;
            double sum_square = 0;
            double sum_cube = 0;
            int first_num = 0;
            int sum_first_last_num = 0;

            int[] nums = new int[count_nums];
            for (int i = 0; i < count_nums; i++)
            {
                nums[i] = a % 10;
                a /= 10;
                Console.WriteLine($"nums[{i}] = {nums[i]}, a = {a}");
            }
            Array.Reverse(nums);

            for (int i = 0; i < count_nums; i++) 
            {
                sum += nums[i];
                multiplicate *= nums[i];
                sum_square += Math.Pow(nums[i], 2);
                sum_cube += Math.Pow(nums[i], 3);
            }

            average = sum / count_nums;
            first_num = nums[0];
            sum_first_last_num = first_num + nums[count_nums-1];

            Console.WriteLine($"sum: {sum}\nmulti: {multiplicate}\naver: {average}");
            Console.WriteLine($"sum_square: {sum_square}\nsum_cube: {sum_cube}");
            Console.WriteLine($"first: {first_num}\nsum_first_last = {sum_first_last_num}");


            string text = $"натуральное число: {num}\n количество цифр в нем: {count_nums}\n " +
                $"сумма цифр: {sum}\n произведение цифр: {multiplicate}\n" +
                $"среднее арифметическое цифр: {average}\n сумма квадратов цифр: {sum_square}\n" +
                $"сумма кубов цифр: {sum_cube}\n первая цифра: {first_num}\n" +
                $" сумма первой и последней цифр: {sum_first_last_num}";

            using (StreamWriter writer = new StreamWriter(path, false))
            {
                await writer.WriteLineAsync(text);
            }
        }
    }
}
