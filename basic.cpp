#include <iostream>
using namespace std;
int main(){
  int a=2;
  int b=a++;
    cout<<"Post-Increment"<<b<<endl; //first work & then increment
    int c=2;
  int d=++c;
    cout<<"Pre-Increment"<<d<<endl; //first increment & then work
return 0;
}