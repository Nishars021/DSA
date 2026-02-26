#include <iostream>
using namespace std;

int main (){
    // int i;
    int n=3;
    // cout<<"Enter n value : ";
    // cin>>n;
    char ch='A';
    for(int i=0;i<n;i++){ //outer loop
       
        for(int j=0;j<n;j++){ //inner loop
            cout<<ch<<" ";
            ch=ch+1; //65+1=66 -> 'B'
        }
        cout<<endl;
    }
    return 0;
}