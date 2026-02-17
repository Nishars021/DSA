#include <iostream>
using namespace std;
int main(){
    int i;
    int n;
    int m;
    cout<<"Enter value : ";
    cin>>n;
    cout<<"Enter value : ";
    cin>>m;
    for(i=1;i<=n;i++){
        {
            for(i=1;i<=m;i++){
                cout<<"* ";
            }
        }
        cout<<"* ";
    }
    return 0;
}