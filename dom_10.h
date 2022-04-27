#ifndef DOM_9
#define DOM_9
#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    string middlename;
    string surname;
    int age;

public:
    Human()
    {

    }
    Human(string surname, string name, string middlename, int age)
    {
        this->name = name;
        this->middlename = middlename;
        this->surname = surname;
        this->age = age;
    }
    virtual void Print() = 0;
    virtual ~Human() {}
};

class Student : public Human
{
private:
    bool on_lesson;

public:

    Student()
    {

    }
    Student(string surname, string name, string middlename, int age, bool on_lesson) : Human(surname, name, middlename, age)
    {
        this->on_lesson = on_lesson;
    }

    virtual void Print();
    ~Student() {};
};

class Boss : public Human
{
private:
    int number_of_workers;

public:

    Boss()
    {

    }

    Boss(string surname, string name, string middlename, int age, int number_of_workers) : Human(surname, name, middlename, age)
    {
        this->number_of_workers = number_of_workers;
        //this->number_of_workers++;
    }

    virtual void Print();
    ~Boss() {};
};
#endif
