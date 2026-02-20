// #include <iostream>
// using namespace std;

// int main(){
//    int i,j;
//    int n=2;
//    int a=1;
//    for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
        
//         cout<<a<<" ";
//         a++;
//     }
//     cout<<endl;
//    }
//    cout<<"The last number after the pattern : "<<a;
//    return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int i,j;
     int n;
     cout<<"Enter n value :";
     cin>>n;
     char ch='A';
     for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
            if(i==0 && j==0){
                 cout<<ch<<" ";
                 ch++;
            }
      }
      cout<<endl;
     }
     cout<<"The last character after the pattern : "<<endl;
     return 0
}