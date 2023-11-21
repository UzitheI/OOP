#include<iostream>
#include<string.h>
using namespace std;
class Book{
    private: 
    string name;
    int year;
    float price;

    public:
    Book(){
        cout<<"This is the section where the vendor will write important details about the book"<<endl;
        cout<<"IMPORTANT DETAILS:"<<endl;
        cout<<"1) The books can be sold only through reputed vendors or librarians"<<endl;
        cout<<"2) The books can be returned only if it has incurred any damage. Change of heart cannot be applicable. "<<endl;
    }
    void getdata(){
        cout<<"Enter the name of the book:"<<endl;
        cin>>name;
        cout<<"When was it written?"<<endl;
        cin>>year;
        cout<<"Tell me the price:"<<endl;
        cin>>price;
    }
    void showdata(){
        cout<<"The name of the book is "<<name<<" and it was written in "<<year<<" ,it's current market price is "<<price<<endl;
    }

};
class Buyer:public Book{
    private:
    string buyer;
    int phone_no;
    public:
    Buyer(){
        cout<<"Important details about the Buyer are to be recorded now. The information falls under strict confidentiality and it will be used only for refunds and further notices regarding library changes."<<endl;
    }
    void getBuyer(){
        cout<<"Enter the name of the buyer"<<endl;
        cin>>buyer;
        cout<<"Enter phone number:"<<endl;
        cin>>phone_no;
    }
    void showBuyer(){
        cout<<"The name of the buyer is "<<buyer<<" and his phone number is "<<phone_no<<endl;
    }
};
int main(){
    int n;
    cout<<"How many buyers are present?"<<endl;
    cin>>n;
    Buyer b1;
    // for(int i=0;i<n;i++){
    //     b1[n].getdata();
    // }
    // for(int i=0;i<n;i++){
    //     b1[n].showBuyer();

    // }   
    // for(int i=0;i<n;i++){

    //     b1[n].showdata();
    // } 
    // for(int i=0;i<n;i++){

    //  b1[n].getBuyer();
    // }  
    b1.getdata();
    b1.getBuyer();
    b1.showdata();
    b1.showBuyer();
    
    return 0;
}
