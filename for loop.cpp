#include <iostream>
using namespace std;
int main(){
    int i,n;
    int sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(i=0;i<=n;i++){
        sum=sum+i;
        if(i==5){
            break;
        }
    }
    cout<<"Sum : "<<sum;
    return 0;
}