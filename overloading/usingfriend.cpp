#include<iostream>
using namespace std;

class october{
    int length;
    int breadth;

public:
    october() {}
    void getdata(){
        cout << "Enter length:" << endl;
        cin >> length;
        cout << "Enter breadth:" << endl;
        cin >> breadth;
    }

    // Friend function declaration
    friend october operator+(const october& o1, const october& o2);
    
    // Display function
    void display() {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
    }
};

// Friend function definition
october operator+(const october& o1, const october& o2){
    october o3;
    o3.length = o1.length + o2.length;
    o3.breadth = o1.breadth + o2.breadth;
    return o3;
}

int main(){
    october obj1, obj2, result;

    cout << "Enter data for object 1:" << endl;
    obj1.getdata();

    cout << "Enter data for object 2:" << endl;
    obj2.getdata();

    result = obj1 + obj2;

    cout << "Resulting object:" << endl;
    result.display();

    return 0;
}
