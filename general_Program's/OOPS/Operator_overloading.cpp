1.	Write a Design a class Distance that includes following data members: feet, inches. It has the following member function:-
•	Constructor, that initializes the distance to 0,0  by default. 
•	Parameterized Constructor that initializes the distance with some values; give a check so that the inches part is always less than 12.0.
•	Display function
•	Overloaded – operator to subtract 2 distances
•	Overloaded + operator to add 2 distances
•	Overload += and -= operator
•	Overload > and < operators to compare two distances.


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
