#include <iostream>
using namespace std;
int main(){
  int a=2;
  int b=a++;
    cout<<a<<"Post-Increment"<<b<<endl; //first work & then increment
    int a=2;
  int b=++a;
    cout<<a<<"Pre-Increment"<<b<<endl; //first increment & then work
return 0;
}