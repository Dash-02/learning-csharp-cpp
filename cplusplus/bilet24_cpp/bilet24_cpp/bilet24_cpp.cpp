// В текущем месяце бригада в каждый последующий день работы
// выпускала на три изделия больше, чем в предыдущий. В первый день было
// выпущено 42 изделия, что составило 67 % дневной нормы (в месяце 26 рабочих
// дней). Напечатайте: "Бригада выполнила норму" или "Бригада не выполнила 
// норму" в зависимости от полученного результата.


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251");
    int details = 42;
    int day = 1;
    int workMounth = 26;
    int norm = (details * 100) / 67;

    while (day < workMounth)
    {
        details += 3;
        day += 1;
    }
    
    if (details >= norm)
    {
        cout << "Бригада выполнила норму" << endl;
    }
    else {
        cout << "Бригада не выполнила норму" << endl;
    }

    ofstream out;
    out.open("bilet24_cpp.txt");
    if (out.is_open()) 
    {
        if (details >= norm)
        {
            out << "Бригада выполнила норму";
        }
        else {
            out << "Бригада не выполнила норму";
        }
    }
    out.close();
    cout << "Файл записан";
}
