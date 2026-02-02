#include<iostream>
using namespace std;
class Leap{
    private:
    int days;
    public:
    void getData(){
        cout<<"Enter the number of days in february: ";
        cin>>days;}
        void checkLeap(){
            if (days==29){
                cout<<"It is a leap year";
            }
            else if(days==28) {
                cout<<"It is not a leap year";
            }
            else {
                cout<<"Invalid input";
            }
        }
    
};
int main(){
    Leap obj;
    obj.getData();
    obj.checkLeap();
    return 0;
}