#include<iostream>
using namespace std;
int main(){
    int item_no , quantity , unit_price;
    cout<<"Enter item no. : ";
    cin>> item_no;
    cout<<"Enter quantity : ";
    cin>> quantity;
    cout<<"Enter unit price : ";
    cin>> unit_price;
    float discount = (20.0/100.0)*(quantity*unit_price);
    int bill = (unit_price*quantity) - discount;
    cout<<"The bill amount is: "<< bill;
    return 0;
}