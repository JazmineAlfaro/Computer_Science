#include<string>
#include<iostream>
using namespace std;

class Vehiculo
{
protected:
    string license;
    int year;
public:
    Vehiculo();
    Vehiculo(const string myLicense, const int myYear);
    const string getLicense();
    const int getYear();
    void print();

};

