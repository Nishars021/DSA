// #include <iostream>
// using namespace std;

// int main(){
//    int i,j;
//    int n;
//    cout<<"Enter n value : ";
//    cin>>n;
//    int a=1;
//    for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
        
//         cout<<a<<" ";
//         a++;
//     }
//     cout<<endl;
//    }
//    return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int i,j;
     int n;
     cout<<"Enter n value : ";
     cin>>n;
     char ch='A';
     for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
                 cout<<ch<<" ";
                 ch++;
            }
            cout<<endl;
      }
      return 0;
}