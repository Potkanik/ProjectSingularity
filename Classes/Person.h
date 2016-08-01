#include <iostream>

class Person
{
    public:
        int ID;

    public:
        int Width;

    Person()
    {
        std::cout << "Construktor\n";
    }

    Person(int i)
    {
        std::cout << "Construktor with parameter " + std::to_string(i)+ "\n";
    }

    public:
    int CalculateWidth(int id)
    {
        return id * 5;
    }

};