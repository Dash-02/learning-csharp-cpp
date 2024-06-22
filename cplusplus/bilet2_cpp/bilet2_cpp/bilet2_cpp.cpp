#include <iostream>
#include <fstream> // for ofstream
using namespace std;

int main()
{
    system("chcp 1251"); // for russian symbols
    int count_houseIvanovs;
    int count_housePetrovs;

    cout << "Введите количество домов, в которых живут Ивановы: ";
    cin >> count_houseIvanovs;

    cout << "Введите количество домов, в которых живут Петровы: ";
    cin >> count_housePetrovs;

    ofstream out;
    out.open("bilet2_cpp.txt");
    if (out.is_open()) {
        out << "Количество домов, в которых живут Ивановы: " 
            << count_houseIvanovs << endl 
            << "Количество домов, в которых живут Петровы: " 
            << count_housePetrovs;
    }
    out.close();
    cout << "Файл был записан" << endl;
}