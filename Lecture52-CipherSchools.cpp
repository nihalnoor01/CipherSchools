#include<iostream>
using namespace std;
class Student{
    public:
    
    string name;
    int mids;
    float ends;
    bool abs;
     

    void Print_Total_marks(){
        cout<<"The total Marks of the student "<<name<<" is:"<<ends*0.75 + mids*0.25<<endl;
    }



};

class Vehicle{
    public:
    int    Tyres;
    int    Capacity;
    string VehicleType;
    string name;
    int distance_traveled;
    float fuel_consumption;
    float mileage(){
        float mileage=distance_traveled/fuel_consumption;
        return mileage;
    }

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
    a.Print_Total_marks();

    Vehicle b;
    b.name="Ferrari";
    b.VehicleType= "Car";
    b.Capacity=5;
    b.Tyres=4;
    b.distance_traveled=100000;
    b.fuel_consumption=5000;
    cout<< b.VehicleType<<endl;
    cout<<b.name<<endl;
    cout<<b.Capacity<<endl;
    cout<<b.Tyres<<endl;
    cout<<b.mileage();
}