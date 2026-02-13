#include <iostream>
using namespace std;
int main(){
    int i,n;
    int sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<"Sum : "<<sum;
    return 0;
}