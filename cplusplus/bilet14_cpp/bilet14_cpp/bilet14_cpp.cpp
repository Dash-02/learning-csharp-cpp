// Исследуется структура автомобильного потока на дороге путем 
// последовательной регистрации проезжающих автомобилей по 4 признакам,
// соответствующим типам автомобилей. В конце регистрации определяется
// процентное соотношение этих типов к общему числу автомобилей.Кодируйте
// тип автомобиля по признакам : легковые - 1, грузовые до 5т. - 2, грузовые
// свыше 5т. - 3, транспорт - 4. Признак окончания ввода любое отрицательное число

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251");

    int type = 0;
    int countAuto = 0; 
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int percent1 = 0;
    int percent2 = 0;
    int percent3 = 0;
    int percent4 = 0;
    
    while (type >= 0)
    {
        cout << "Укажите тип автомобиля:\n 1 - легковые\n 2 - грузовые до 5т.\n 3 - грузовые свыше 5т.\n 4 - транспорт\n-1 - выход\n";
        cin >> type;

        if (type == 1)
        {
            count1++;
        } 
        else if (type == 2)
        {
            count2++;
        }
        else if (type == 3)
        {
            count3++;
        }
        else if (type == 4)
        {
            count4++;
        }
        else if (type < 0)
        {
            countAuto = count1 + count2 + count3 + count4;
            percent1 = (count1 * 100) / countAuto;
            percent2 = (count2 * 100) / countAuto;
            percent3 = (count3 * 100) / countAuto;
            percent4 = (count4 * 100) / countAuto;

            cout << "Из " << countAuto << " автомобилей: " << percent1 << "% - легковые, " << percent2 << "% - грузовые до 5т, " << percent3 << "% - грузовые свыше 5т, " << percent4 << "% - транспорт\n";
        }
        else
        {
            cout << "Пожалуйста, повторите. ";
        }
    }
    type = 0;

    ofstream out;
    out.open("bilet14_cpp.txt");
    if (out.is_open())
    {
        out << "Из " << countAuto << " автомобилей: " << percent1 << "% - легковые, " << percent2 << "% - грузовые до 5т, " << percent3 << "% - грузовые свыше 5т, " << percent4 << "% - транспорт\n";
        cout << "Файл записан";
    }
    out.close();
 }