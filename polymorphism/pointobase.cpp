#include<iostream>
using namespace std;
class Parent{
    protected:
    int a, b;
    public:
    void getdata(int x, int y){
        a=x;
        b=y;
    }
};
class Derv: public Parent{
    public:
    void show(){
        cout<<a<<b<<endl;
    }
};
int main(){
    Parent *p1;
    Derv d1;
    p1=&d1;
    p1->getdata(4,5);
    d1.show();
    return 0;
}