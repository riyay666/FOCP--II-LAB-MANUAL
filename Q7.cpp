#include<iostream>
using namespace std;
int main(){
    int s1 , s2 , s3;
    cout<<"Enter scores of Player 1, Player 2, Player 3: ";
    cin>> s1 >> s2 >> s3;
    if (s1 > s2 && s1 > s3){
        cout<<"Player 1 is ahead (Winner)";
    }
    else if (s2 > s1 && s2 > s3){
        cout<<"Player 2 is ahead (Winner)";
    }
    else if (s3 > s1 && s3 > s2){
        cout<<"Player 3 is ahead (Winner)";
    }
    else{
        cout<<"Its a tie";
    }
    return 0;
}
