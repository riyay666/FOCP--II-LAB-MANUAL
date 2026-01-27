#include<iostream>
using namespace std;
class Area {
    private: 
    int radius; 
    int area;
    public: 
    void getData();
    void displayArea();
};
void Area :: getData() {
    cout<<"Enter radius of a circle: ";
    cin>> radius;
}
void Area :: displayArea() {
    area = (3.14)*radius*radius;
    cout<<"The area of the circular fountain is : "<< area;
}
int main(){
    Area a1;
    a1.getData();
    a1.displayArea();
    return 0;
}

