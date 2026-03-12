#include <iostream>
using namespace std;

int main(){
    int n=4;
    char ch='A';
    for (int i=0;i<=n;i++){ //Outer loop
        for(int j=0;j<=i;j++){ //Inner loop
            cout<<ch<<" "; //Print the character and a space
        }
        ch=ch+1; //A+1=B, B+1=C, C+1=D
        cout<<endl;
    }
    return 0;
}