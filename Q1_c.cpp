// Q1 from lab manual using classes and objects
#include<iostream>
using namespace std;
class Average {
    private: 
    int marks1 , marks2 , marks3;
    int avg;
    public:
    void getData();
    void displayAvg();
};
void Average :: getData() {
    cout<<"Enter marks of first student: ";
    cin>> marks1;
    cout<<"Enter marks of second student: ";
    cin>> marks2;
    cout<<"Enter marks of third student: ";
    cin>> marks3;
}
void Average :: displayAvg(){
    avg = (marks1+marks2+marks3)/3;
    cout<<"The average marks are: "<< avg;
}
int main(){
    Average a1;
    a1.getData();
    a1.displayAvg();
    return 0;
}