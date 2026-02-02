#include<iostream>
using namespace std;
class Tag{
    private:
    int numId;
    int ID;
    public:
    void getData(){
        cout<<"Enter number of IDS: ";
        cin>>numId;
    }
    void giveTag(){
        for(int i=1; i<=numId;i++ ){
            cout<<"Enter ID: ";
            cin>>ID;
        if(ID % 3==0 && ID % 5 == 0){
            cout<<"Buzz"<<endl<<"Fuzz"<<endl;
        }
        else if(ID % 3 == 0){
            cout<<"Buzz"<<endl;
        }
        else if(ID % 5 == 0){
            cout<<"Fuzz"<<endl;
        }
        else {
            cout<<"Invalid input"<<endl;
        }
        }

    }
};
int main(){
    Tag obj;
    obj.getData();
    obj.giveTag();
    return 0;
}