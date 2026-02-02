//diff type of program for classes and objects
/*when we define the function outside the class it is neccessary
 to use scope resolution operator but in anither method when we are
  defining a method inside the class , there is no need to use scope 
  resolution operator.*/
  #include<iostream>
  using namespace std;
  class Addition{
    int num1,num2;// by default private is there if nothing specified
    int sum;
    public:
    void getData(){
        cout<<"Enter first number";
        cin>>num1;
        cout<<"Enter the second number";
        cin>>num2;
    }
    void sumTwo(){
        sum= num1+num2;
        cout<<"Sum of two numbers is: "<<sum;
    }
};
int main(){
    Addition obj; //object of class addition
    obj.getData(); // calling out the function inside the class using object 
    obj.sumTwo();
    return 0;
}
 