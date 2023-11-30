#include<iostream>
using namespace std;
class A{
    public:
    virtual void show()=0;//pure virtual function
    //generally we create a virtual function in the base class but it doesn't achieve anything, so we create a virtual function to tell the compiler that we dont have anything inside the base class
};
class B:public A{
    public:
    void show(){
        cout<<"this is base class B"<<endl;
    }

};
int main(){
    A *p;
    //also pure virtual functions can only create pointer type of object and cannot create real object
    B b; 
    p=&b;
    p->show();
    return 0;
    //this should still achiever dynamic polymorphism


}