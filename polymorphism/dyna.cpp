#include<iostream>
using namespace std;
class A{
    int a;
    int b;
    public:
    virtual void show(){
        cout<<"This is class A"<<endl;
    }
};
class B:public A{
    public:
    void show(){
        cout<<"This is class B"<<endl;
    }

};
class C: public A{
    public:
    void show(){
        cout<<"This is class C"<<endl;
    }
};
int main(){
    A *a, p;
    B b;
    C c;
    a = &b;
    a->show();
    a = &c;
    a->show();
    a= &p;
    a->show();
    return 0;
}