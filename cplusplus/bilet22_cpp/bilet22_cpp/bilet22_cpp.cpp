// Пассажирский самолет может поднять груз общим весом 30т.
// Составить программу для определения веса почтового груза, который можно
// поместить в самолет после посадки пассажиров и загрузки их багажа. Во время
// регистрации пассажиров ЭВМ должна подсчитывать количество пассажиров
// (условный вес одного человека 100 кг) и суммировать вес багажа.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251");
    int maxWeight = 30000; // 30т = 3000кг
    float postalCargo = 0; // почтовый груз
    float weightHuman = 100;
    int countPassenger;
    double weightPassengers; // общая масса пассажиров
    double weight, weightLuggage; // общий вес самолета, вес багажа

    cout << "Количество пассажиров на борту: ";
    cin >> countPassenger;

    cout << "Вес багажа (в кг): ";
    cin >> weightLuggage; // оптимальный вариант до 20кг на человека

    weightPassengers = weightHuman * countPassenger;
    weight = weightPassengers + weightLuggage;

    if (weight < 30000)
    {
        postalCargo = 30000 - weight;
        cout << "В самолете есть место. Можно поместить " << postalCargo << " кг почтового груза" << endl;
    }
    else {
        cout << "Самолет нагружен. Нельзя поместить почтовый груз." << endl;
    }
     
    ofstream out;
    out.open("bilet22_cpp.txt");
    if (out.is_open())
    {
        if (weight < 30000)
        {
            postalCargo = 30000 - weight;
            out << "В самолете есть место. Можно поместить " << postalCargo << " кг почтового груза" << endl;
        }
        else {
            out << "Самолет нагружен. Нельзя поместить почтовый груз." << endl;
        }
        cout << "Файл записан";
    }
    out.close();
}
