// В сборе картофеля принимают участие 3 бригады. Учет ведется с
// помощью ЭВМ. Составить программу, которая определяет, сколько картофеля
// собрала каждая бригада (вес каждой новой порции прибавляется к уже
// накопленной сумме), выводит на экран текущий результат по трем бригадам
// после любых изменений и подсчитывает суммарный результат по всем
// бригадам в конце дня.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251");

    float sumPotatoes = 0;
    float potatoesFirst;
    float potatoesSecond;
    float potatoesThird;
    int yesNo = 0;

    cout << "Сколько картофеля собрала бригада 1 (в кг): ";
    cin >> potatoesFirst;
    cout << "Сколько картофеля собрала бригада 2 (в кг): ";
    cin >> potatoesSecond;
    cout << "Сколько картофеля собрала бригада 3 (в кг): ";
    cin >> potatoesThird;

    while (yesNo != 1)
    {
        cout << "Рабочий день закончен? (1 - да, 0 - нет): ";
        cin >> yesNo;
        if (yesNo == 1)
        {
            sumPotatoes = potatoesFirst + potatoesSecond + potatoesThird;
            cout << "Все три бригады собрали " << sumPotatoes << " кг каротфеля за день" << endl;
        }
        else if (yesNo == 0) {
            float a, b, c;
            cout << "Сколько картофеля собрала бригада 1 (в кг): ";
            cin >> a;
            potatoesFirst += a;
            cout << "Бригада 1 собрала " << potatoesFirst << " кг картофеля" << endl;

            cout << "Сколько картофеля собрала бригада 2 (в кг): ";
            cin >> b;
            potatoesSecond += b;
            cout << "Бригада 2 собрала " << potatoesSecond << " кг картофеля" << endl;

            cout << "Сколько картофеля собрала бригада 3 (в кг): ";
            cin >> c;
            potatoesThird += c;
            cout << "Бригада 3 собрала " << potatoesThird << " кг картофеля" << endl;
        }
        else if (yesNo != 0 || yesNo != 1) {
            cout << "Пожалуйста, попробуйте снова. ";
        }
    }
    ofstream out;
    out.open("bilet23_cpp.txt");
    if (out.is_open()) {
        out << "Бригада 1 собрала " << potatoesFirst << " кг картофеля" << endl
            << "Бригада 2 собрала " << potatoesSecond << " кг картофеля" << endl
            << "Бригада 3 собрала " << potatoesThird << " кг картофеля" << endl
            << "Все три бригады собрали " << sumPotatoes << " кг каротфеля за день" << endl;
        cout << "Файл записан";
    }
    out.close();
}
