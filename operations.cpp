#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter first no.";
    cin>> x;
    cout<<"Enter second no.";
    cin>> y;
    int sum = x+y;
    int difference = x-y;
    int product = x*y;
    int quotient = x/y;
    cout<<"The sum of 2 numbers is "<< sum;
    cout<<"\n";
     cout<<"The difference of 2 numbers is "<< difference;
     cout<<"\n";
      cout<<"The product of 2 numbers is "<< product;
      cout<<"\n";
       cout<<"The quotient of 2 numbers is "<< quotient;
       cout<<"\n";
    return 0;
}