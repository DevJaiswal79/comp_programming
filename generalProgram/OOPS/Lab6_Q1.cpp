#include<iostream>
using namespace std;
class dist
{
    double feet;
    double inch;
public:
    dist():feet(0),inch(0){}
    dist(double a,double b):feet(a),inch(b){}
    dist operator -(dist &);
    dist operator +(dist &);
    dist operator +=(dist &);
    dist operator -=(dist &);
    bool operator >(dist d){
        return((feet*12+inch)>(d.feet*12+d.inch));
    }
    void display(){cout<<"dist is = "<<feet<<" "<<inch<<endl;}
};
dist dist::operator -(dist &ob){
    dist temp;
    temp.feet=feet-ob.feet;
    temp.inch=inch-ob.inch;
    return temp;
}
dist dist::operator +(dist &ob){
    dist temp1;
    temp1.feet=feet+ob.feet;
    temp1.inch=inch+ob.inch;
    return temp1;
}
dist dist::operator +=(dist &ob){
    dist temp1;
    ob.feet=feet+ob.feet;
    ob.inch=inch+ob.inch;
    return temp1;
}
dist dist::operator -=(dist &ob){
    dist temp1;
    ob.feet=feet-ob.feet;
    ob.inch=inch-ob.inch;
    return temp1;
}

int main(){//condition feet should be less than or equal to 12
    dist ob1(45.2,8.5),ob2(12.5,2.33),ob3;
    ob3=ob1+ob2;
    ob3.display();
    ob3=ob1-ob2;
    ob3.display();
}
