// Составить программу, подсчитывающую число удалений в каждой 
// команде при игре в хоккей. После каждого удаления выводить на экран
// фамилию хоккеиста, время, на которое он удаляется с поля, и суммарное число
// удалений в каждой команде. После окончания игры выдать итоговое сообщение.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251");

    int countDeleteFirst = 0;
    int countDeleteSecond = 0;
    int sumDelete = 0;
    const int n = 6; // в хоккее команда состоит из 6 игроков
    string comandFirst[n]{ "Абдул", "Джотаро", "Джозеф", "Польнарефф", "Какёин", "Игги" };
    string comandSecond[n]{ "Дио", "Айс", "ХолХорс", "Боинго", "Оинго", "ПетШоп" };
    int number;
    int time;
    int numCommand;
    int endGame = 0;

    while (endGame != 1) // игра закончилась или нет  
    {
        cout << "Игра закончилась? 1 - да, 0 - нет: ";
        cin >> endGame;
        if (endGame == 0)
        {
            cout << "Выберите номер команды: ";
            cin >> numCommand;
            if (numCommand ==  1)
            {
                for (int i = 0; i < n; i++)
                {
                    cout << "Игрок №" << i + 1 << " " << comandFirst[i] << endl;
                }
                cout << "Введите номер хоккеиста, которого нужно удалить: ";
                cin >> number;
                cout << "Укажите на какое время удален игрок (в мин.): ";
                cin >> time;

                cout << "Из 1 команды был удален хоккеист " << comandFirst[number - 1] << " на " << time << " минут" << endl;
                countDeleteFirst++;
            }
            else if (numCommand == 2) {
                for (int i = 0; i < n; i++)
                {
                    cout << "Игрок №" << i + 1 << " " << comandSecond[i] << endl;
                }
                cout << "Введите номер хоккеиста, которого нужно удалить: ";
                cin >> number;
                cout << "Укажите на какое время удален игрок (в мин.): ";
                cin >> time;

                cout << "Из 2 команды был удален хоккеист " << comandSecond[number - 1] << " на " << time << " минут" << endl;
                countDeleteSecond++;
            }
            else {
                cout << "Такой команды нет. Попробуйте еще раз." << endl;
            }
        }
        else if (endGame == 1)
        {
            cout << "По итогам игры: \nИз команды 1 удалено " << countDeleteFirst << " игроков" << endl;
            cout << "Из команды 2 удалено " << countDeleteSecond << " игроков";
        }
        else {
            cout << "Попробуйте еще раз. "; 
        }
    }

    ofstream out;
    out.open("bilet20_cpp.txt");
    if (out.is_open())
    {
        out << "По итогам игры: \nИз команды 1 удалено " << countDeleteFirst << " игроков" << endl
            << "Из команды 2 удалено " << countDeleteSecond << " игроков" << endl;
        cout << "Файл записан";
    }
    out.close();
}
