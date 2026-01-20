#include<iostream>
using namespace std;
int main(){
    //swap using bitwise operator
    int a = 10;
    int b = 20;
    a = a^b; 
    b = b^a;
    a = a^b;
     cout<<a;
    cout<<"\n";
    cout<<b;
    return 0;
}