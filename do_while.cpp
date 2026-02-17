#include <iostream>
using namespace std;
int main() {
    int i=1;
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    do {
        if (n%i!=0){
        cout<<i<<" ";
        i++;
        }
    } while(i<=(n-1));
    {
        cout<<i<<" ";
    }
    return 0;
}