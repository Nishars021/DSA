#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter your age:\n";
    cin>>a;
    if (a>=18){
        cout<<"You are eligible to vote\n";
    } else {
        cout<<"You are not eligible to vote\n";
    }
    return 0;
}