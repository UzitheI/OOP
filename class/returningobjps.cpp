//here i'm passing an object with pointer and returning it
#include<iostream>
using namespace std;
class complex{
    private:
    int real; 
    int img;
    public:
    void getdata(){
        cout<<"Enter the value of real"<<endl;
        cin>>real;
        cout<<"Enter the value of img:"<<endl;
        cin>>img;
    }
    void showdata(){
        cout<<real<<"+"<<img<<endl;
    }
    complex &showcomplex(complex &c){
        c.real=real+c.real;
        c.img=img+c.img;
        return c;
        
    }
};
int main(){
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c2.showcomplex(c1);
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
    
}