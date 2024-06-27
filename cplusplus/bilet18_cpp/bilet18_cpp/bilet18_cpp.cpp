// Составить программу помощника кассира в универсальном магазине. 
// ЭВМ должна запрашивать цену товара и его количество, подсчитывать
// суммарную стоимость купленных товаров, запрашивать сумму денег,
// внесенных покупателем, и определять причитающуюся ему сдачу.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251");

    int yesNo = 0;
    int buy = 0;
    float costGood;
    float countGood;
    float sumCostGoods = 0;
    float sumGoods = 0;
    float money = 0;
    float cashClient;
    float cash = 0;

    while (yesNo != 1)
    {
        cout << "Рабочий день подошел к концу? 1 - да, 0 - нет: ";
        cin >> yesNo;

        if (yesNo == 1)
        {
            cout << "За рабочую смену заработано " << money << " руб.\n";
        }
        else if (yesNo == 0) 
        {
            cout << "Вводите покупки: ";
            while (buy != 1)
            {
                cout << "Напечатать чек? 1 - да, 0 - нет: ";
                cin >> buy;
                if (buy == 0)
                {
                    cout << "Цена товара: ";
                    cin >> costGood;

                    cout << "Количество товара: ";
                    cin >> countGood;

                    sumCostGoods = costGood * countGood; // цена за товар
                    sumGoods += sumCostGoods; // сумма цен товаров
                }
                else if (buy == 1) {
                    cout << "Выбрано товаров на сумму: " << sumGoods << "руб.\n";

                    cout << "Получено от покупателя: ";
                    cin >> cashClient;

                    cash = cashClient - sumGoods;
                    cout << "К сдаче: " << cash << "руб.\n";

                    money += sumGoods; // сумма за день
                    sumGoods = 0;
                }
                else {
                    cout << "Неверный ввод. Попробуйте снова. ";
                }
            }
            buy = 0;
        }
        else {
            cout << "Неверный ввод. Попробуйте снова. ";
        }
    }

    ofstream out;
    out.open("bilet18_cpp.txt");
    if (out.is_open())
    {
        out << "За рабочую смену заработано " << money << " руб.\n";
        cout << "Файл записан";
    }
    out.close();
}