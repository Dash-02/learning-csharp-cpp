// Начальный вклад в сберкассу составил А рублей. Через сколько лет он
// станет больше B рублей. (Каждый год вклад увеличивается на 3 %)

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251");

    double initialDeposit = 0; // начальный вклад
    double b = 0;
    int year = 0;
    double percent = 0.03; // 3%
    double percentNum = 0;

    cout << "Введите начальный вклад в сберкассу (в руб.): ";
    cin >> initialDeposit;

    while (initialDeposit <= 0) // ограничение ввода отрицательных чисел
    {
        cout << "Сумма начального вклада не может быть меньше 1 руб. ";
        cin >> initialDeposit;
    }

    cout << "Введите сумму, которую должен превысить начальный вклад (в руб.): ";
    cin >> b;

    while (b < initialDeposit || b <= 0) // ограничение ввода
    {
        cout << "Указанная сумма должна превышать сумму начального вклада! Попробуйсте еще раз:" << endl;
        cin >> b;
    }

    percentNum = initialDeposit * percent; // находим 3% от начального вклада

    while (initialDeposit < b) 
    {
        initialDeposit += percentNum;
        year++;
    }

    cout << "Через " << year << " лет начальный вклад станет больше " << b << " руб." << endl;

    ofstream out;
    out.open("bilet25_cpp.txt");
    if (out.is_open()) 
    {
        out << "Через " << year 
            << " лет начальный вклад станет больше " 
            << b << " руб.";
	cout << "Файл записан";
    }
    out.close();
}
