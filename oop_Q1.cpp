//Write a program to check a citizen of india is eligible to vote or not
#include<iostream>
using namespace std;
class vote{
    private:
    int age;
    public:
    void getAge(){
        cout<<"Enter your current age: ";
        cin>>age;
    }
    void checkData(){
        if(age>=18){
            cout<<"You are eligible to vote";
        }
        else {
            cout<<"Too young to cast vote";
        }
    }
};
int main(){
    vote obj;
    obj.getAge();
    obj.checkData();
    return 0;
}