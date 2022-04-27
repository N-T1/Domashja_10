#include <iostream>
#include <string>
#include "dom_10.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    Human* human;
    Student student("Иванов", "Иван", "Иванович", 19, 1);
    student.Print();
    Boss boss("Петров", "Петр", "Петрович", 50, 3);
    human = &boss;
    human->Print();
    Boss boss2("Сидоров", "Сидор", "Сидорович", 50, 5);
    human = &boss2;
    human->Print();
    return 0;
}