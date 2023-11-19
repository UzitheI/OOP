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
    A c(4);
    A d(4.5);
    c.show();
    d.show();
    return 0;


}