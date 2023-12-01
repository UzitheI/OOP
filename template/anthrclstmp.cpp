#include<iostream>
using namespace std; 
template <class T>
class A{
    private:
    T a;
    public:
    A(T data){
        a=data;
    }
    void show(){
        cout<<"The value of a is "<<a<<endl;
    }
};
int main(){
    A a1(4.3);
    a1.show();
    return 0;
}