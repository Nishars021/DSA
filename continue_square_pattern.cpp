#include <iostream>
using namespace std;

int main(){
   int i,j;
   int n;
   cout<<"Enter n value : ";
   cin>>n;
   char ch='A';
   for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
        
        cout<<ch<<" ";
        ch++;
    }
    cout<<endl;
   }
   return 0;
}

// #include <iostream>
// using namespace std;

// int main(){
//     int i,j;
//      int n;
//      cout<<"Enter n value : ";
//      cin>>n;
//      char ch='A';
//      for(int i=1;i<=n;i++){
//       for(int j=1;j<=n;j++){
//                  cout<<ch<<" ";
//                  ch=ch+1;
//             }
//             cout<<endl;
//       }
//       return 0;
// }