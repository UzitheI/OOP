// The user will receive three inputs: The name and the price of a product, and the quantity of products.
// For example the inputs: Toy, 1.50, 24 means that the product Toy costs 1.5$ and there are 24 toys.

// Read the three variables and print them in a format:

// Product: {product}
// Price: {price}
// Quantity: {quantity}



#include<iostream>
using namespace std;
int main(){
   string name="Herbal";
   float c=1.25;
   int q=5;
   
   cout<<"The name of the product is "<<name<<", the cost per packet is "<<c<<
   "the number of items bought is "<<q<<endl;
   return 0;
}