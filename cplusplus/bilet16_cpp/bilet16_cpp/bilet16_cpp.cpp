// В киоске продается газета стоимостью А руб. и журнал стоимостью 
// В руб. Составить программу, которая спрашивает о желании покупателя
// купить журнал или газету, принимает деньги и печатает причитающуюся
// сдачу, а в конце дня выдает сообщение о количестве проданных газет и на
// какую сумму и о количестве проданных журналов и на какую сумму и выводит
// всю дневную выручку.Количество покупателей заранее неизвестно.


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251");
    int day = 0;
    int choice = 0;
    float costNewspaper;
    float costMagazine;
    int countNewspapers = 0;
    int countMagazines = 0;
    float cost = 0;
    float cash = 0;
    float cashClient = 0;
    float sumCostNewspapersCost = 0;
    float sumCostMagazinesCost = 0;
    float money = 0;

    cout << "Введите стоимость газеты (в руб.): ";
    cin >> costNewspaper;

    cout << "Введите стоимость журнала (в руб.): ";
    cin >> costMagazine;

    while (day != 1)
    {
        cout << "Рабочий день подошел к концу? 1 - да, 0 - нет: ";
        cin >> day;

        if (day == 0)
        {
            while (choice == 0)
            {
                cout << "Выберите, что купить, 1 - газета, 2 - журнал: ";
                cin >> choice;

                if (choice == 1) {
                    countNewspapers++;
                    cost = costNewspaper;

                    cout << "К получению: " << cost << endl;

                    cout << "Получено от покупателя: ";
                    cin >> cash;
                    cashClient = cash - cost;

                    cout << "К сдаче: " << cashClient << " руб." << endl;
                }
                else if (choice == 2) {
                    countMagazines++;
                    cost = costMagazine;

                    cout << "К получению: " << cost << endl;

                    cout << "Получено от покупателя: ";
                    cin >> cash;
                    cashClient = cash - cost;

                    cout << "К сдаче: " << cashClient << " руб." << endl;
                }
                else {
                    cout << "Пожалуйста, повторите. ";
                }
            }
            choice = 0;
        }
        else if (day == 1) {
            sumCostNewspapersCost = costNewspaper * countNewspapers;
            sumCostMagazinesCost = costMagazine * countMagazines;
            money = sumCostNewspapersCost + sumCostMagazinesCost;

            cout << "Продано " << countNewspapers << " газет на сумму " << sumCostNewspapersCost << " руб."
                << endl << "Продано " << countMagazines << " журналов на сумму " << sumCostMagazinesCost << " руб."
                << endl << "Дневная выручка: " << money << " руб." << endl;
        }
        else {
            cout << "Пожалуйста, повторите. ";
        }
    }
    ofstream out;
    out.open("bilet16_cpp.txt");

    if (out.is_open())
    {
        out << "Продано " << countNewspapers << " газет на сумму " << sumCostNewspapersCost << " руб."
            << endl << "Продано " << countMagazines << " журналов на сумму " << sumCostMagazinesCost << " руб."
            << endl << "Дневная выручка: " << money << " руб." << endl;
        cout << "Файл записан";
    }
    out.close();
}