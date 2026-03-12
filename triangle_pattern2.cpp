#include <iostream>
using namespace std;

int main(){
    int n=4;
    // char ch='A';
    for (int i=1;i<=n;i++){ //Outer loop
        for(int j=1;j<=i;j++){ //Inner loop
            cout<<j;
        }
        // ch=ch+1; //A+1=B, B+1=C, C+1=D
        cout<<endl;
    }
    return 0;
}