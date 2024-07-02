// Имеется 100 рублей. Сколько быков, коров и телят можно купить на все 
// эти деньги, если плата за быка — 10 рублей, за корову — 5 рублей, за теленка 
// — полтинник (0,5 рубля) и надо купить 100 голов скота?

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bilet14_sharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int count = 100;
            int sum = 100;
            double sumCount = 0;
            int r = 0;
            int c = 0;
            int d = 0;
            double cd = 0;

            for (int countBull = 0; countBull <= sum / 10; countBull++) 
            {
                for (int countCow = 0; countCow <= sum / 5; countCow++)
                {
                    for (int countT = 0; countT <= sum / 0.5; countT++) 
                    {
                        if (countBull + countCow + countT == count) 
                        {
                            sumCount = 10 * countBull + 5 * countCow + 0.5 * countT;
                            if (sumCount == sum)
                            {
                                r = countBull;
                                c = countCow;
                                d = countT;
                                cd = sumCount;
                                Console.WriteLine($"кол-во быков:{countBull} кол-во коров:{countCow} кол-во телят:{countT} сумма:{sumCount}");
                            }
                        }
                    }
                }
            }
            string path = "bilet14_sharp.txt";
            using (StreamWriter writer = new StreamWriter(path, false)) 
            {
                writer.WriteLine($"кол-во быков:{r} кол-во коров:{c} кол-во телят:{d} сумма:{cd}");
            }
        }
    }
}
