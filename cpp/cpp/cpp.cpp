#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
//int main() {

    /*system("chcp 1251");
    int count1 = 0, count2 = 0, count3 = 0;
    string date;
    string doctor;
    char choice;

    cout << "Введите дату: ";
    getline(cin, date);

    do
    {
        cout << "Введите доктора (отоларинголог, хирург и окулист): ";
        getline(cin, doctor);

        if (doctor == "отоларинголог")
        {
            count1++;
        }
        else if (doctor == "окулист")
        {
            count2++;
        }
        else if (doctor == "хирург")
        {
            count3++;
        }
        else {
            cout << "Неверный ввод, попробуйте еще раз" << endl;
            continue;
        }

        cout << "Ввести еще одно посещение? (y - Да, n - Нет): ";
        cin >> choice;
        cin.ignore();
    } while (choice == 'y' || choice == 'Y');
    ofstream outfile("result.txt");
    if (outfile.is_open())
    {
        outfile << "Итоговые посещения: " << endl;
        outfile << "Отоларинголог: " << count1 << endl;
        outfile << "Окулист: " << count2 << endl;
        outfile << "Хирург: " << count3 << endl;

        outfile.close();
        cout << "Результат сохранен в result.txt";
    }
    return 0;*/

        /*system("chcp 1251");
        int count = 0;
        double price;
        double money;
        double change = 0.0;
        double totalCost = 0.0;

        cout << "Введите цену товара: ";
        cin >> price;

        cout << "Введите количество товара: ";
        cin >> count;

        totalCost = count * price;

        cout << "Введите сумму для покупки: ";
        cin >> money;
        if (money >= totalCost)
        {
            change = money - totalCost;

        }
        else {
            cout << "Недостаточно денег для покупки";
            return -1;
        }





        ofstream outfile("result.txt");
        if (outfile.is_open())
        {
            outfile << "Количество товара: " << count << endl;
            outfile << "Цена за единицу товара: " << price << " рублей" << endl;
            outfile << "Общая стоимость: " << totalCost << " рублей" << endl;
            outfile << "Внесенная сумма денег: " << money << " рублей" << endl;
            outfile << "Сдача: " << change << " рублей" << endl;

            outfile.close();
            cout << "Результат сохранен в result.txt";
        }


        return 0;*/

    /*struct Student {

        char gender;
        double height;
    };*/

    int main() {

        /*system("chcp 1251");
        int N;
        cout << "Введите количество студентов: ";
        cin >> N;
        vector<Student> students(N);
        string gender;
        double height;

        int countBoys = 0;
        int countGirls = 0;

        double sumBoys = 0.0;
        double sumGirls = 0.0;

        for (int i = 0; i < N; i++)
        {
            Student student;

            cout << "Введите пол студента " << i + 1 << " (м - мужской, ж - женский): ";
            cin >> student.gender;

            cout << "Введите рост студента " << i + 1 << ": ";
            cin >> student.height;

            if (student.gender == 'м' || student.gender == 'М')
            {
                sumBoys += student.height;
                countBoys++;
            }
            else if (student.gender == 'ж' || student.gender == 'Ж')
            {
                sumGirls += student.height;
                countGirls++;
            }
            else {
                cout << "Некорректный ввод, попробуйте еще раз";
                i--;
            }
        }

        double avgBoys = static_cast<double>(sumBoys) / countBoys;
        double avgGirls = static_cast<double>(sumGirls) / countGirls;

        ofstream outfile("result.txt");
        if (outfile.is_open())
        {
            outfile << fixed << setprecision(2);
            outfile << "Средний рост мальчиков в группе: " << avgBoys << " см." << endl;
            outfile << "Средний рост девочек в группе: " << avgGirls << " см." << endl;
            outfile.close();
            cout << "Результат сохранен в result.txt";
        }
        return 0;*/
       /* system("chcp 1251");
        int N;
        cout << "Введите количество деталей: ";
        cin >> N;
        vector<int> detaiels(N);
        double diameters;
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            cout << "Введите диаметр детали " << i + 1 << ": ";
            cin >> diameters;
            if (diameters > 4 && diameters < 5)
            {
                count++;
            }
        }
        double perc_brak = (static_cast<double>(count) / N) * 100.0;
        ofstream outfile("result.txt");
        if (outfile.is_open())
        {
            outfile << "Количество деталей: " << N << endl;
            outfile << "количество браков: " << count << endl;
            outfile << "Процент брака: " << perc_brak << "%" << endl;
            outfile.close();
            cout << "Результат сохранен в result.txt";
        }
        return 0;*/

            system("chcp 1251");
            int N;
            cout << "Введите количество точек: ";
            cin >> N;
            vector<int> points(N);
            for (int i = 0; i < N; i++)
            {
                cout << "Введите координату для точки " << i + 1 << ": ";
                cin >> points[i];
            }

            vector<int> segments(4);
            cout << "Введите координатов отрезков A1, A2, A3, A4: ";
            for (int& segment : segments)
            {

                cin >> segment;
            }

            vector<int> result(3, 0);
            for (const auto& point : points)
            {
                if (point > segments[0] && point <= segments[1])
                {
                    result[0]++;
                }
                else if (point > segments[1] && point <= segments[2])
                {
                    result[1]++;
                }
                else if (point > segments[2] && segments[3])
                {
                    result[2]++;
                }

            }




            ofstream outfile("result.txt");
            if (outfile.is_open())
            {
                for (size_t i = 0; i < result.size(); i++)
                {
                    outfile << "Количество точек, входящих в отрезок с координатами [" << segments[i] << ": " << segments[i + 1] << "): " << result[i] << endl;
                }
                outfile.close();
                cout << "Результат сохранен в result.txt";
            }


            return 0;


        }
   
//}
