#include <iostream>
using namespace std;
int main(){
    float marks;
    cout<<"Enter your marks:\n";
    cin>>marks;
    if (marks>=90){
        cout<<"Your grade is A\n";
    } else if((marks>=80) && (marks<90)) {
        cout<<"Your grade is B\n";
    } else if((marks>=70) && (marks<80)) {
        cout<<"Your grade is C\n";  
    }
    return 0;
}