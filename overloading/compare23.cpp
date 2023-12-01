#include<iostream>
using namespace std; 
class time{
    private:
    int hrs;
    int min;
    public:
    time(int x, int y){
        hrs=x;
        min=y;
    }
    time operator >(time t2){
        int ft, st;
        ft=hrs+min;
        st=t2.hrs+t2.min;
        if(ft>st){
            cout<<ft<<"is greater than "<<st<<endl;
        }
        else{
            cout<<st<<" is greater than "<<ft<<endl;
        }
    }
};
int main(){
    time t1(4,5);
    
    t1>t2;
    return 0;
}