#include<iostream>
using namespace std;
class Expense{
    private:
    int items;
    int unit_price;
    int expenses;
    int cost;
    public:
    void getData(){
        cout<<"Enter the number of items: ";
        cin>> items;
        cout<<"Enter the price of one item: ";
        cin>> unit_price;
    }
    void checkExpenses(){
        cost = unit_price*items;
        expenses = 0.9*cost;
        if(items>1000){
            cout<<"The total expenses are: "<<expenses;
        }
        else {
            cout<<"The total expenses are: "<< cost;
        }
        
    }
};
int main(){
    Expense obj;
    obj.getData();
    obj.checkExpenses();
    return 0;
}