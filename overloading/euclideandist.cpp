#include<iostream>
using namespace std; 
class Point{
    int a;
    int b;
    public:
    Point(){}
    Point(int x, int y){
        a=x;
        b=y;
    }
    Point operator -(Point p2){
        Point p1;
        p1.a=a-p2.a;
        p1.b=b-p2.b;
    }
    void show(){
        cout<<a<<","<<b<<endl;
    }
};
int main(){
    Point p1(4,5),p2(5,6);
    Point p3;
    p3=p1-p2;
    p3.show();
    return 0;
}