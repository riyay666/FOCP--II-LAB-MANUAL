#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int b = 20;
//     a = (b/a)*a;
// b = (a/b)*b;
a = a*b;
b = a/b;
a = a/b;
    // a = a^b; this is with bitwise
    // b = b^a;
    // a = a^b;
    cout<<a;
    cout<<"\n";
    cout<<b;
    return 0;
}
