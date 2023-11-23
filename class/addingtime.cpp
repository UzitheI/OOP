#include<iostream>
using namespace std;
class Time{
    private:
    int hrs,min,sec;
    public:
    Time(){

    }
    Time(int h, int m, int s){
        hrs=h;
        min=m;
        sec=s;

    }
    void show(){
        cout<<hrs<<":"<<min<<":"<<sec<<endl;
    }
    void add(Time t1, Time t2){
        sec=t1.sec+t2.sec;
        min=sec/60;
        sec=sec%60;
        min+=t1.min+t2.min;
        hrs=min/60;
        min=min%60;
        hrs+=t1.hrs+t2.hrs;
    }
};
int main(){
    Time t1(4,54,64);
    Time t2(5,6,7);
    Time t3;
    t3.add(t1,t2);
    t1.show();
    t2.show();
    t3.show();
    return 0;

}