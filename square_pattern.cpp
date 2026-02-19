#include <iostream>
using namespace std;

int main (){
    // int i;
    int n=5;
    // cout<<"Enter n value : ";
    // cin>>n;
    for(int i=0;i<n;i++){ //outer loop
        char ch='A';
        for(int j=0;j<n;j++){ //inner loop
            cout<<ch<<" ";
            ch=ch+1; //65+1=66 -> 'B'
        }
        cout<<endl;
    }
    return 0;
}