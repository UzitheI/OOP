#include<iostream>
using namespace std;
class A{
    private:
    int a;
    int b;
    public:
    void getdata(){
        cout<<"Enter the value of a:"<<endl;
        cin>>a;
        cout<<"Enter the value of b:"<<endl;
        cin>>b;
    }
    void showdata(){
        cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
    }
};
int main(){
    A *b=new A();
    A a1;
    b->getdata();
    a1.getdata();
    b->showdata();
    a1.showdata();
    return 0;

}