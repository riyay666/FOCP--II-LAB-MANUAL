// write a program to add numbers using classes and objects 
#include <iostream>
using namespace std;
class Addition 
// class name should start with capital letter 
// give the variable name as asked in the problem statement
// when we declare a function, function name is given in camel case order
// i.e.function is combination of two words where first word start from small letter and second word starts from capital letter
// variables declared in class are known as data variables whereas functions are known as member functions
// there are 3 Access Specifiers 1. private 2. public 3. protected
/* when we are declaring the data in private mode it means that the data is inaccesible
 to the outer world but it can be accesed by members of that particular class*/
// by default the access specifier is private
// when the data is declared in public mode it means it is accesible by the function which are present outside the class
// the public members can only be accesed by using an object of that particular class
{
    private:
    int number1 , number2;
    int sum;
    public:
    void getData();
    void displaySum();
};
void Addition :: getData() //:: scope resolution operator (where getdata belons to)
{
    cout<<"Enter a no.: ";
    cin>> number1;
    cout<<"Enter second no.: ";
    cin>> number2;
}
void Addition :: displaySum()
{
    sum = number1 + number2;
    cout<<"The sum of two numbers is "<< sum;
}
int main(){
    Addition a1; // Addition is class name and a1 is object of class Addition
    a1.getData();
    a1.displaySum();
    return 0;
}
// class is a user defined data type so we can declare variables of class type and those variables
// are known as the objects