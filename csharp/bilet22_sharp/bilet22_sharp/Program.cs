// Хозяин хочет оклеить обоями длинную стену в своем доме. Длина этой 
// стены равна А метров, а высота - В метров. Рулон обоев имеет длину 12 метров 
// и ширину 1м. Сколько будут стоить обои для всей стены, если цена одного 
// рулона К руб.

using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bilet22_sharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double rollHeight = 12.0; // Длина рулона обоев (для стены это высота)
            double rollLength = 1.0; // Ширина рулона обоев (для стены это длина)
            double rollColumn; // сколько обоев поместится в высоту
            double rollRow; // сколько обоев поместится в длину
            double costRolls;

            Console.Write("Введите длину стены (в м): ");
            double wallLength = Convert.ToDouble(Console.ReadLine());
            Console.Write("Введите высоту стены (в м): ");
            double wallHeight = Convert.ToDouble(Console.ReadLine());

            Console.Write("Введите цену одного рулона (в руб.): ");
            double costOneRoll = Convert.ToDouble(Console.ReadLine());

            rollColumn = wallHeight / rollHeight;
            rollRow = wallLength / rollLength;

            rollColumn = Math.Ceiling(rollColumn); // округление вседа до большего целого, т.к. половину рулона не продадут
            rollRow = Math.Ceiling(rollRow);

            costRolls = rollColumn * rollRow * costOneRoll;
            string text = $"Обои для всей стены будут стоить {costRolls} руб.";
            Console.WriteLine(text);

            string path = "bilet22_sharp.txt";
            using (StreamWriter writer = new StreamWriter(path, false)) {
                writer.WriteLine(text);
                Console.WriteLine("Файл записан");
            }
        }
    }
}
