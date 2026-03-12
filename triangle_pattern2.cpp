#include <iostream>
using namespace std;

int main(){
    int n=4;
    // char ch='A';
    for (int i=n;i>=0;i--){ //Outer loop
        for(int j=i;j>=0;j--){ //Inner loop
            cout<<i; //Print the character and a space
        }
        // ch=ch+1; //A+1=B, B+1=C, C+1=D
        cout<<endl;
    }
    return 0;
}