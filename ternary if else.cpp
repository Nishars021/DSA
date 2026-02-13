#include <iostream>
using namespace std;
int main(){
    int a=23;
    cout<<"Enter a number:\n";
    cin>>a;
    cout<<(a%2==0?"Even":"Odd") <<endl;
    return 0;
}