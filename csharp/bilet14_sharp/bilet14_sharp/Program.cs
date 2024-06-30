using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bilet14_sharp
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double cash = 100;
            int costBull = 10;
            int costCow = 5;
            double costCalf = 0.5;
            int countAll = 100;
            int count = 0;
            int countBull = 5;
            int countCow = 10;
            int countCalf = 50;
            double sumCount = 0;
            double sumCost = 0;

            int[] maxCounts = {10, 20, 200};

            for (int i = 0; i < maxCounts.Length; i++) 
            {
                sumCost += maxCounts[i];
                Console.WriteLine($"sumCost - {sumCost}");
                for (int j = 0; j < maxCounts.Length; j++)
                {
                    while (sumCost != 100) {
                        maxCounts[j]--;
                        Console.WriteLine(maxCounts[j]);
                        if (j == 0) {
                            maxCounts[j] *= costBull;
                        } else if (j == 1)
                        {
                            maxCounts[j] *= costCow;
                        }
                        else if (j == 2)
                        {
                            maxCounts[j] *= (5 / 10);
                        }
                        break;
                    }

                }
            }
            
            //countBull = Convert.ToInt32(cash / costBull);
            //countCow = Convert.ToInt32(cash / costCow);
            //countCalf = Convert.ToInt32(cash / costCalf);

            //Console.WriteLine($"{}");
            //sumCount = costBull * countBull + costCow * countCow + costCalf * countCalf;
            //while (sumCount != 100) 
            //{
            //    // sumCount = countAll / countBull + countAll / countCow + countAll / countCalf;
            //    sumCount = costBull * countBull + costCow * countCow + costCalf * countCalf;
            //    // sumCost = 
            //    Console.WriteLine($"{sumCount} sumCount");
            //    if (sumCount == countAll) 
            //    {
            //        Console.WriteLine("g");
            //        break;
            //    }
            //    count++;
            //    countBull--;
            //    countCow--;
            //    countCalf--;
            //    Console.WriteLine($"count - {count}, countBull - {countBull}, countCow - {countCow}, countCalf - {countCalf}");
            //}
            //Console.WriteLine("sumCount = " + sumCount);
            string text = $"На {cash} руб. можно купить {countBull} быков, {countCow} коров, {countCalf} телят";
            //Console.WriteLine(text);
        }
    }
}
