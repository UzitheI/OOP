#include<iostream>
using namespace std;
class size3{
    int l;
    int b;
    public:
    size3(int length, int breadth){
        l=length;
        b=breadth;
    }
    void operator ++(){
        ++l;
        ++b;
    }
    void display(){
        cout<<"length="<<l<<endl;
        cout<<"breadth="<<b<<endl;
    }
};
int main(){
    size3 s1(4,5);
    ++s1;//overloaded unary operator to work on object
    s1.display();
    return 0;


}