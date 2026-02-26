#include <iostream>

using namespace std
int main(){
int i,j;
int n=3;

for(int i=0;i<n;i++){ //Outer loop
    for(int j=0;j<i+1;j++){ //Inner loop
        cout<<" * ";
    }
    cout<<endl;
}
    return 0;
}