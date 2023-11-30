#include<iostream>
using namespace std;
class alpha{
    private:
    int a;
    public:
    alpha(){
        cout<<"Enter the value of a:"<<endl;
        cin>>a;
    }
    void show(){
        cout<<"The values of a is "<<a <<endl;
    }
    friend class beta; 
};
class beta{
    private:
    int b;
    public:
    void show(alpha a1){
        cout<<"The value of beta is "<<a1.a<<endl;
    }

};
int main(){
    beta b;
    alpha a1;
    a1.show();
    b.show(a1);
    return 0;

}