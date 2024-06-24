// Составить программу, подсчитывающую число посещений в
// поликлинике врачей - специалистов (отоларинголога, окулиста и хирурга).
// В конце дня выдать итоговое сообщение. В начале работы программы должна
// вводиться дата, которая будет фигурировать в итоговом сообщении.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251");

    int otolaryngologist, ophthalmologist, surgeon;
    string date;
    int day = 0;

    cout << "Введите дату (дд.мм.гггг): ";
    cin >> date;

    cout << "Количество приемов отоларинголога: ";
    cin >> otolaryngologist;
    cout << "Количество приемов окулиста: ";
    cin >> ophthalmologist;
    cout << "Количество приемов хирурга: ";
    cin >> surgeon;

    while (day != 1)
    {
        cout << "Рабочий день закончился? 1 - да, 0 - нет: ";
        cin >> day;

        if (day == 1)
        {
            cout << "За " << date << endl
                << "Число посещений отоларинголога: " << otolaryngologist << endl
                << "Число посещений окулиста: " << ophthalmologist << endl
                << "Число посещений хирурга: " << surgeon << endl;
        }
        else if (day == 0) {
            int a, b, c;
            cout << "Количество приемов отоларинголога: ";
            cin >> a;
            otolaryngologist += a;

            cout << "Количество приемов окулиста: ";
            cin >> b;
            ophthalmologist += b;

            cout << "Количество приемов хирурга: ";
            cin >> c;
            surgeon += c;
        }
        else {
            cout << "Пожалуйста, попробуйте снова. " << endl;
        }
    }

    ofstream out;
    out.open("bilet21_cpp.txt");
    if (out.is_open())
    {
        out << "За " << date << endl
            << "Число посещений отоларинголога: " << otolaryngologist << endl
            << "Число посещений окулиста: " << ophthalmologist << endl
            << "Число посещений хирурга: " << surgeon << endl;
        cout << "Файл записан" << endl;
    }
    else {
        cout << "Ошибка. Файл не записан" << endl;
    }
    out.close();
}