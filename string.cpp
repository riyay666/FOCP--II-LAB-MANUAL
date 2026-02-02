#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cout<<"Enter name: ";
    getline(cin,name);
    cout<<"The name is: "<<name;
    return 0;
}
// for getting name along with surname i.e. full line we use predefined function called getline
