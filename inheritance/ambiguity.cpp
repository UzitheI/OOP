#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A(){
        cout<<"Enter a:"<<endl;
        cin>>a;
    }
    void shoowdata(){
        cout<<"The value of a is "<<a<<endl;
    }
};
class B: virtual public A{
    int b;
    public:
    void getdata(){
        cout<<"Enter the value of b:"<<endl;
        cin>>b;
    }
    void showdata(){
        cout<<"the value of b is "<<b<<endl;
    }
};
class C: virtual public A{
    int c; 
    public:
    void get(){
        cout<<"Enter the value of c:";
        cin>>c;
    }
    void show(){
        cout<<"The value of c is "<<c<<endl;
    }
};
class D: public B, public C{
    int d;
    public:
    void Get(){
        cout<<"Enter the value of d:";
        cin>>d;
    }
    void Show(){
        cout<<"the value of  d is "<<d<<endl;
    }
};
int main(){
    D d;
    d.getdata();
    d.get();
    d.Get();
    d.shoowdata();
    d.showdata();
    d.show();
    d.Show();
    return 0;
}