#include <iostream>
#include <DinamicPower.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    std::string name;
    DinamicPower::Leaver leaver;
    leaver.leave(name);
    return 0;
}