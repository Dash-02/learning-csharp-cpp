// В магазине продается костюмная ткань. Ее цена В руб. за квадратный 
// метр. Напишите программу, которая подсчитает и выведет на экран стоимость 
// куска этой ткани длиной Х метров и шириной 80 см.

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bilet21_sharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double pieceCloth; // кусок ткани
            double pieceClothCost; // искомая соимость куска ткани
            double clothWidth = 0.8; // 80см = 0.8м

            Console.Write("Укажите цену ткани за 1 кв.м (в руб.): ");
            double costCloth = Convert.ToDouble(Console.ReadLine());

            Console.Write("Введите длину ткани (в м): ");
            double clothLength = Convert.ToDouble(Console.ReadLine());

            pieceCloth = clothWidth * clothLength; // находим площадь куска ткани
            pieceClothCost = pieceCloth * costCloth;

            string text = $"Стоимость куска ткани длиной {clothLength}м и шириной {clothWidth}м равна {pieceClothCost} руб.";
            Console.WriteLine(text);

            string path = "bilet21_sharp.txt";
            using (StreamWriter writer = new StreamWriter(path, false)) 
            {
                writer.WriteLine(text);
                Console.WriteLine("Файл записан");
            }
        }
    }
}
