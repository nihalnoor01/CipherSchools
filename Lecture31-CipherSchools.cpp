#include<iostream>
using namespace std;
class Vehicle{
    public:
    int Tyres;
    int Capacity;
    string Name;


};
class Car : public Vehicle{
    public:
    int ac_con;
    int petrolCapacity;

};
int main(){
    Car B;

    B.Tyres=4;
    B.Name="Bugatti";
    B.ac_con=100000000;
    cout<<B.Tyres<<endl;
    cout<<B.Name<<endl;
    cout<<B.ac_con<<endl;


}