#include<iostream>
using namespace std;
int main(){
    int employees , basic_salary;
    cout<<"Enter no. of employees : ";
    cin>> employees;
    cout<<"Enter basic salary : ";
    cin>> basic_salary;
    float bonus = (12.0/100.0)*basic_salary;
    float net_salary = (basic_salary + bonus)*employees;
    cout<<"The net salary is: "<< net_salary;
    return 0; 
}