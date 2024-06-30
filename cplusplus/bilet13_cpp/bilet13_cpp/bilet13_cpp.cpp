// Введите по 4 оценки студента. Вычислить количество неуспевающих 
// студентов и средний балл группы по всем предметам. Количество студентов
// заранее неизвестно.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    system("chcp 1251");
    const int MAX_STUDENTS = 100;
    const int NUM_GRADES = 4;
    int count_student;
    int badMarkStudent = 0;
    double averMark = 0;

    cout << "Введите количество студентов: ";
    cin >> count_student;

    int studentsMark[MAX_STUDENTS][NUM_GRADES];

    for (int i = 0; i < count_student; i++) {
        cout << "Введите оценки для ученика " << i + 1 << ":" << endl;
        for (int j = 0; j < NUM_GRADES; j++) {
            cout << "Оценка " << j + 1 << ": ";
            cin >> studentsMark[i][j];
            if (studentsMark[i][j] == 1 || studentsMark[i][j] == 2)
            {
                badMarkStudent++;
            }
            averMark += studentsMark[i][j];
        }
    }
    averMark = averMark / static_cast<double>(count_student * NUM_GRADES);
    cout << "Средний балл группы: " << averMark << "\nКоличество неуспевающих студентов: " << badMarkStudent;
} 