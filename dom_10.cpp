#include "dom_10.h"

void Student::Print()
{
    cout << "������� ��� �������� ��������: " << surname << " " << name << " " << middlename << ", " << " �������: " << age << ", ";
    if (on_lesson)
    {
        cout << "������������ �� ����. " << endl;
    }
    else
    {
        cout << "����������� �� ����. " << endl;
    }
}

void Boss::Print()
{
    cout << "������� ��� �������� ����������: " << surname << " " << name << " " << middlename << ", " << "���������� �����������:" << number_of_workers << ". " << endl;
}