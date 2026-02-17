#include <iostream>
using namespace std;
int main(){
    char letter;
    cout<<"Enter a letter:\n";
    cin>>letter;
    if((letter>=65) && (letter<=90)){ //Implicit type conversion of char to int
        cout<<"You entered an uppercase letter\n";
    } else {
        cout<<"You entered a lowercase letter\n";
    }
    return 0;
}