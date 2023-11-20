//no throw is responsible for checking whether the allocation of memory throght DMA was succesfull or not
/*it does this by allocating a null pointer to the first pointer that it points, 
if it is a null pointer, the dma has failed*/
#include<iostream>
using namespace std;
int main(){
    int* x=new(nothrow)int[5];
    if(x==NULL){
        cout<<"Program terminated because DMA failed";
    }
    else{
        for(int i=0;i<5;i++){
            cout<<"x["<<i<<"]=";
            cin>>x[i];
        }
    }
    //linear search
    int n;
    cout<<"Enter the number you want to search";
    cin>>n;
    for(int i=0;i<5;i++){
        if(n==x[i]){
            cout<<"the number is present and it is in "<<i<<"array. "<<endl;
            break;
        }
    }
    return 0;
}