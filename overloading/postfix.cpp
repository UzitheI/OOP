#include<iostream>
using namespace std;
class size3{
    int l;
    int b;
    public:
    size3(int length, int breadth){
        l=length;
        b=breadth;
    }
    void operator --(int){//if it is postfix operator you have to use int inside the parameter
        l--;
        b--;
    }
    void display(){
        cout<<l<<":"<<b<<endl;
    }
};
int main(){
  size3 s1(4,5);
  s1--; 
  s1.display(); 
}
