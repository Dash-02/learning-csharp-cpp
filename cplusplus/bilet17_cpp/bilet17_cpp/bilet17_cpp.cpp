// Составить программу, суммирующую штрафное время команд при 
// игре в хоккей. Выводит на экран суммарное штрафное время обеих команд
// после любого его изменения. После окончания игры выдать итоговое сообщение

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251");

    int endGame = 0;
    int penaltyCommandFirst = 0;
    int penaltyCommandSecond = 0;
    int sumPenalty = 0;

    while (endGame != 1) 
    {
        cout << "Игра окончена? да - 1, нет - 0: ";
        cin >> endGame;

        if (endGame == 0)
        {
            int a, b;
            cout << "Введите штрафное время первой команды: ";
            cin >> a;
            penaltyCommandFirst += a;

            cout << "Введите штрафное время второй команды: ";
            cin >> b;
            penaltyCommandSecond += b;
            cout << endl;
        }
        else if (endGame == 1) {
            cout << "Штрафное время первой команды: " << penaltyCommandFirst << endl;
            cout << "Штрафное время второй команды: " << penaltyCommandSecond << endl;
            sumPenalty = penaltyCommandFirst + penaltyCommandSecond;
            cout << "Штрафное время обеих команд: " << sumPenalty;
        }
        else {
            cout << "Пожалуйста, повторите. ";
        }
    }

    ofstream out;
    out.open("bilet17_cpp.txt");
    if (out.is_open())
    {
        out << "Штрафное время первой команды: " << penaltyCommandFirst << endl
            << "Штрафное время второй команды: " << penaltyCommandSecond << endl
            << "Штрафное время обеих команд: " << sumPenalty;
        cout << "\nФайл записан";
    }
    else {
        cout << "Ошибка. Файл не записан" << endl;
    }
    out.close();
}