#include<iostream>
using namespace std;
class Check{
    private:
    char letter;
    public:
    void getLetter(){
        cout<<"Enter a letter"<<endl;
        cin>> letter;
    }
    void checkLetter(){
        if(letter == 'A' || letter == 'a' ||  letter == 'E' || letter == 'e' || letter == 'I'
             || letter == 'i' || letter == 'O' || letter == 'o' || letter == 'U' || letter == 'u' ){
                cout<<"The letter is a vowel";
    }
    else if (letter == '0' || letter == '1'|| letter =='2' || letter == '3'|| letter == '4'||
     letter == '5'|| letter == '6'|| letter == '7'|| letter == '8'|| letter == '9'){
         cout<<"The letter is a number";
     }
    else{
    cout<<"The letter is a consonant";
    }
    }
};
int main(){
    Check obj;
    obj.getLetter();
    obj.checkLetter();
    return 0;
}