#include<iostream>
using namespace std;
class Student{
    public:
    
    string name;
    int mids;
    float ends;
    bool abs;



};

class Vehicle{
    public:
    int    Tyres;
    int    Capacity;
    string VehicleType;
    string name;

};

int main()
{
    Student a;
    a.name="Sanjay";
    a.mids=99;
    a.ends=69.96;
    a.abs=0;
    cout<<a.name<<endl;
    cout<<a.abs<<endl;
    cout<<a.ends<<endl;
    cout<<a.mids<<endl;

    Vehicle b;
    b.name="Ferrari";
    b.VehicleType= "Car";
    b.Capacity=5;
    b.Tyres=4;
    cout<< b.VehicleType<<endl;
    cout<<b.name<<endl;
    cout<<b.Capacity<<endl;
    cout<<b.Tyres<<endl;
}