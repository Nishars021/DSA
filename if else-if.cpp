#include <iostream>
using namespace std;
int main(){
    char letter;
    cout<<"Enter a letter:\n";
    cin>>letter;
    if((letter>=65) && (letter<=90)){
        cout<<"You entered an uppercase letter\n";
    } else if((letter>=97) && (letter<=122)){
        cout<<"You entered a lowercase letter\n";
    } else {
        cout<<"You did not enter a letter\n";
    }
    return 0;
}