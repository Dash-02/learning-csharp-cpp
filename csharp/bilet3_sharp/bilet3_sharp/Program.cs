// Известны оценки по информатике каждого из 20 учеников класса. 
// В начале списка перечислены все пятерки, затем все остальные оценки. 
// Сколько учеников имеют по информатике оценку «5»? Условный оператор не 
// использовать. Рассмотреть два случая:
// а) известно, что пятерки имеют не все ученики класса;
// б) допускается, что пятерки могут иметь все ученики класса.

using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bilet3_sharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string path = "bilet3_sharp.txt";

            int count_students = 20;
            List<int> assessments = new List<int>(count_students);
            int element = 5;
            int count_excelent = 0;

            Console.WriteLine("Введите оценки по информатике для учеников:");

            for (int i = 0; i < count_students; i++)
            {
                Console.Write($"ученик {i + 1}: ");
                int a = Convert.ToInt32(Console.ReadLine());

                while (a > 0 && a <= 5) 
                {
                    assessments.Add(a);
                    break;
                }
                while (a <= 0 || a > 5)
                {
                    Console.WriteLine("Оценки должны быть в пятибалльной системе");
                    i--;
                    break;
                }
                while (assessments[i] == 5 && a <=5)
                {
                    count_excelent++;
                    break;
                }
            }

            string text = $"{count_excelent} учеников имеют по информатике оценку 5";

            Console.WriteLine(text);

            using (StreamWriter writer = new StreamWriter(path, false)) 
            {
                writer.WriteLine(text);
            }
        }
    }
}
