#include <iostream>
using namespace std;
class Coordinates{
    public:
    float a;
    float b;
    Coordinates operator+(Coordinates const & obj){
        Coordinates z;
        z.a=this->a+obj.a;
        z.b=this->b+obj.b;
        return z;

    }





    float sqofidst(float a,float b){
        float dist;
        dist=(this->a-a)*(this->a-a)+(this->b-b)*(this->b-b);
        return dist;
    }
    float sqofidst(float a){
        float dist;
        dist=(this->a-a)*(this->a-a);
        return dist;
    }


};
int main(){
    Coordinates x,y;
    x.a=234;
    x.b=79;
    y.a=3;
    y.b=5;
    //Function overloading
    cout<<x.sqofidst(0)<<endl;
    cout<<x.sqofidst(3,5)<<endl;
    //Operator overloading
    Coordinates z;
    z=x+y;
    cout<<z.a<<" "<<z.b;


}