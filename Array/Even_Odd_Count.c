#include <stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6.7};
    int count1 = 0;
    int count2 = 0;
    for(int i = 0;i<7;i++){
        if(arr[i]%2 == 0){
            count1++;
        }
        else{
            count2++;  
    }
}
printf("Even number count : %d\n",count1);
printf("Odd number count : %d\n",count2);
return 0;
}