// Составить программу, которая ведет учет очков, набранных каждой 
// командой при игре в баскетбол. После любого изменения счет выводить на
// экран. После окончания игры выдать итоговое сообщение. Предусмотреть
// ввод названий команд в символьные переменные и высвечивание их на экране.


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251");
    string comandFirstName;
    string comandSecondName;
    int yesNo = 0;
    int scoreComandFirst = 0;
    int scoreComandSecond = 0;

    cout << "Введите имя 1-й команды: ";
    cin >> comandFirstName;

    cout << "Введите имя 2-й команды: ";
    cin >> comandSecondName;

    while (yesNo != 1)
    {
        cout << "Игра закончилась? 1 - да, 0 - нет: ";
        cin >> yesNo;

        if (yesNo == 0)
        {
            int a, b;
            cout << "Количество очков у команды " << comandFirstName << ": ";
            cin >> a;
            scoreComandFirst += a;

            cout << "Количество очков у команды " << comandSecondName << ": ";
            cin >> b;
            scoreComandSecond += b;

            string winName;
            if (scoreComandFirst > scoreComandSecond)
            {
                winName = comandFirstName;
                cout << "Счет игры " << scoreComandFirst << ":" << scoreComandSecond << " в пользу " << winName << endl;
            }
            else if (scoreComandFirst < scoreComandSecond) {
                winName = comandSecondName;
                cout << "Счет игры " << scoreComandFirst << ":" << scoreComandSecond << " в пользу " << winName << endl;
            }
            else {
                cout << "Счет игры " << scoreComandFirst << ":" << scoreComandSecond << endl;
            }
        }
        else if (yesNo == 1) {
            if (scoreComandFirst > scoreComandSecond)
            {
                cout << "Игра завершилась со счетом: " << scoreComandFirst << ":" << scoreComandSecond << " в пользу команды " << comandFirstName << endl;
            }
            else if (scoreComandFirst == scoreComandSecond) {
                cout << "Игра завершилась со счетом: " << scoreComandFirst << ":" << scoreComandSecond << " - ничья!" << endl;
            }
            else {
                cout << "Игра завершилась со счетом: " << scoreComandFirst << ":" << scoreComandSecond << " в пользу команды " << comandSecondName << endl;
            }
        }
        else {
            cout << "Попробуйте снова. ";
        }
    }

    ofstream out;
    out.open("bilet19_cpp.txt");
    if (out.is_open())
    {
        if (scoreComandFirst > scoreComandSecond)
        {
            out << "Игра завершилась со счетом: " << scoreComandFirst << ":" << scoreComandSecond << " в пользу команды " << comandFirstName << endl;
        }
        else if (scoreComandFirst == scoreComandSecond) {
            out << "Игра завершилась со счетом: " << scoreComandFirst << ":" << scoreComandSecond << " - ничья!" << endl;
        }
        else {
            out << "Игра завершилась со счетом: " << scoreComandFirst << ":" << scoreComandSecond << " в пользу команды " << comandSecondName << endl;
        }
        cout << "Файл записан";
    }
    out.close();
}