#include "dom_10.h"

void Student::Print()
{
    cout << "Фамилия Имя Отчество студента: " << surname << " " << name << " " << middlename << ", " << " возраст: " << age << ", ";
    if (on_lesson)
    {
        cout << "присутствует на паре. " << endl;
    }
    else
    {
        cout << "отсутствует на паре. " << endl;
    }
}

void Boss::Print()
{
    cout << "Фамилия Имя Отчество начальника: " << surname << " " << name << " " << middlename << ", " << "количество подчиненных:" << number_of_workers << ". " << endl;
}