#include<iostream>
using namespace std;
class Time{
    private:
    int hrs;
    int min;
    public:
    Time(int h, int m){
        cout<<"This is a parameterized constructor"<<endl;
        hrs=h;

        min=m;
    }
    void show(){
        cout<<"hrs:"<<hrs<<endl;
        cout<<"min:"<<min<<endl;
    }
};
int main(){
    Time t1(4,6);
    t1.show();
    return 0;
}