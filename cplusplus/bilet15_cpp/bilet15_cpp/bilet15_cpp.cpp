// Вы решили достаточно много раз подбросить монету, чтобы убедиться 
// в равновероятности выпадения орла и решки (количество бросаний заранее
// неизвестно). Составить программу, которая помогает вам и подсчитывает,
// сколько раз выпал орел, сколько - решка. Если выпадает орел, вводится "Н";
// если решка "Т". После окончания эксперимента вывести на печать итоговое сообщение

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251");
    int yesNo = 0;
    string headTail;
    int countHead = 0;
    int countTail = 0;
    int count = 0;

    while (headTail !=  "E")
    {
        cout << "\nПодбросьте монету. \nЧто выпало? Орел - Н, Решка - Т, выход - E: ";
        cin >> headTail;

        if (headTail == "H") 
        {
            count++;
            countHead++;
            cout << "Орел выпал " << countHead << " раз\n";
        }
        else if (headTail == "T")
        {
            count++;
            countTail++;
            cout << "Решка выпала " << countTail << " раз\n";
        }
        else if (headTail == "E")
        {
            cout << "За " << count << " бросков решка выпала " << countTail << " раз, орел - " << countHead << " раз\n";
        }
    }
    ofstream out;
    out.open("bilet15_cpp.txt");
    if (out.is_open())
    {
        out << "За " << count << " бросков решка выпала " << countTail << " раз, орел - " << countHead << " раз";
        cout << "Файл записан";
    }
}
