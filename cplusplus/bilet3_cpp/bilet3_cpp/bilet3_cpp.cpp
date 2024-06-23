//Вводятся результаты контрольной работы 10 учащихся.
//Определите число не удовлетворительных, удовлетворительных, хороших, отличных
//оценок. Вывести среднюю оценку, полученную учащимися за контрольную работу.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251");

    const int count_students = 10;
    int count_bad = 0;
    int count_normal = 0;
    int count_good = 0;
    int count_excel = 0;
    double aver_mark = 0;
    int marks[count_students];

    cout << "Введите оценки учащихся.\n";
    for (int i = 0; i < count_students; i++)
    {
        cout << "ученик " << i + 1 << ": ";
        cin >> marks[i];
        if (marks[i] < 0 || marks[i] > 5)
        {
            cout << "Оценки должны быть в пятибалльной системе." << endl;
            i--;
        }
    }
    for (int el : marks)
    {
        aver_mark += el;
        
        if (el == 1 || el == 2)
        {
            count_bad++;
        }
        else if (el == 3) {
            count_normal++;
        }
        else if (el == 4) {
            count_good++;
        }
        else if (el == 5) {
            count_excel++;
        }
    }
    aver_mark /= count_students;
    cout << "bad_1_2: " << count_bad << endl << "normal_3: " << count_normal << endl << "good_4: " << count_good << endl << "exl_5: " << count_excel << endl << "aver mark:" << aver_mark << endl;
    
    ofstream out;
    out.open("bilet3_cpp.txt");
    if (out.is_open()) {
        out << "Число не удовлетворительных оценок: " << count_bad << endl
            << "Число удовлетворительных оценок: " << count_normal << endl
            << "Число хороших оценок: " << count_good << endl
            << "Число отличных оценок: " << count_excel << endl
            << "Средняя оценка за контрольную работу: " << aver_mark;
    }
    out.close();
    cout << "Файл записан";
}
