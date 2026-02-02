#include<iostream>
using namespace std;
class Operations{
    private:
    int num1 , num2;
    float num3 , num4;
    public:
    void addition(){
        cout<<"Enter the first number: "<<endl;
        cin>>num1;
        cout<<"Enter the second number: "<<endl;
        cin>>num2;
        cout<<"The sum of these two numbers is: "<<(num1+num2)<<endl;
    }
    void subtraction(){
        cout<<"Enter the first number: "<<endl;
        cin>>num1;
        cout<<"Enter the second number: "<<endl;
        cin>>num2;
        cout<<"The difference of these two numbers is: "<<(num1-num2)<<endl;
    }
    void multiplication(){
        cout<<"Enter the first number: "<<endl;
        cin>>num1;
        cout<<"Enter the second number: "<<endl;
        cin>>num2;
        cout<<"The product of these two numbers is: "<<(num1*num2)<<endl;
    }
    void division(){
        cout<<"Enter the first number: "<<endl;
        cin>>num3;
        cout<<"Enter the second number: "<<endl;
        cin>>num4;
        cout<<"The quotient of these two numbers is: "<<(num3/num4)<<endl;
    }
};
int main(){
    int x;
    Operations obj;
    while(1){
        cout<<"1:Addition"<<endl<<"2:Subtraction"<<endl<<"3:Multiplication"<<endl<<"4:Division"<<endl<<"Exit"<<endl;
        cout<<"Enter choice(from 1 to 4): ";
        cin>>x;
        if (x==1){
            obj.addition();
        }
        else if (x==2){
            obj.subtraction();
        }
        if (x==3){
            obj.multiplication();
        }
        if (x==4){
            obj.division();
        }
        else {
            break;
        }
    }
    return 0;
}