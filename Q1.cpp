#include<iostream>
using namespace std;
int main(){
    int x , y , z;
    cout<<"Enter marks of first student: ";
    cin>> x;
    cout<<"Enter marks of second student: ";
    cin>> y;
    cout<<"Enter marks of third student: ";
    cin>> z;
    int avg;
    avg = (x+y+z)/3;
    cout<<"The average marks are: "<< avg;
    return 0;

}