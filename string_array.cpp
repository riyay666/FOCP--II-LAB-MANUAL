//using string length
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cout<<"Enter name: ";
    string name = "Riya Yadav";
    for(int i = 0; i < name.length();i++){
    cout<<name[i];
    }
    return 0;
}
