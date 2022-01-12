// EngineEfficiency.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<conio.h>>
using namespace std;

class Engine
{
protected:
    float input, output;

public:
    virtual void GetEfficiency() = 0;
};
class InternalEngine:public Engine
{
    
};
class PetrolEngine:public InternalEngine
{
public:
    void GetEfficiency()
    {
        cout << "Enter the input of Petrol Engine:";
        cin >> input;
        cout << "Enter the output of Petrol Engine:";
        cin >> output;
        cout << "Efficiency of Petrol Engine:" << output / input;
    }
};
class DieselEngine :public InternalEngine
{
public:
    void GetEfficiency()
    {
        cout << "Enter the input of Diesel Engine:";
        cin >> input;
        cout << "Enter the output of Diesel Engine:";
        cin >> output;
        cout << "Efficiency of Diesel Engine:" << output / input;
    }
};
class ExternalEngine :public Engine
{

};
class SteamEngine:public ExternalEngine
{
public:
    void GetEfficiency()
    {
        cout << "Enter the input of Steam Engine:";
        cin >> input;
        cout << "Enter the output of Steam Engine:";
        cin >> output;
        cout << "Efficiency of Steam Engine:" << output / input;
    }
};

int main()
{
    int op;
    cout << "1.Petrol Engine\n";
    cout << "2.Diesel Engine\n";
    cout << "3.Steam Engine\n";
    cin >> op;
    if (op == 1)
    {

        PetrolEngine p;
        p.GetEfficiency();

    }
    else if (op == 2)
    {
        DieselEngine d;
        d.GetEfficiency();
    }
    else if (op == 3)
    {
        SteamEngine s;
        s.GetEfficiency();
    }
    else
        cout << "Invalid Selection";
    _getch();
    
}

