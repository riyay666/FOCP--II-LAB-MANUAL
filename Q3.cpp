#include<iostream>
using namespace std;
int main(){
    int f;
    cout<<"Enter temperature in farenheit: ";
    cin>> f;
    float c = (5.0/9.0)*(f-32);
    cout<<"Temperature in celsius is "<< c;
    return 0;
}