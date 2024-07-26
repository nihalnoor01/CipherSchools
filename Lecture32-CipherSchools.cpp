#include<iostream>
using namespace std;
class Vehicle{
    protected:
    int Tyres;
    int Capacity;
    string Name;


};
class Car : private Vehicle{
    public:
    
    int ac_con;
    int petrolCapacity;

    

    void setall(int Tyres ,int Capacity,string Name ){
        this->Tyres=Tyres;
        this->Capacity=Capacity;
        this->Name=Name;

    }
    
    void Show_Tyres(){
        cout<<Tyres<<endl;
    }
    void Show_Name(){
        cout<<Name<<endl;
    }

};class SUV : public Car{
    public:
    bool four_wheel_drive;


};
int main(){
    Car B;

    B.setall(4,4,"Bugatti");
    cout<<"Name :";

    B.Show_Name();
    cout<<"Tyres :";
    B.Show_Tyres();
    Car c;
    SUV A;
    A.ac_con=1000;
    A.four_wheel_drive=true;
    cout<<A.four_wheel_drive<<endl;
    cout<<A.ac_con;

    
    

    


}