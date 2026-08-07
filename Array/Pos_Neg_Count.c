#include<stdio.h>
int main(){
    int arr[6]={-2,5,8,-1,-8,-3};
    int key=0, pos=0, neg=0;
    for (int i=0;i<6;i++){
        if(arr[i]<key){
            neg++;
        }
        if(arr[i]>key){
            pos++;
        }
    }
    printf("Positive number count : %d\n",pos);
    printf("Negative number count : %d",neg);
    return 0;
}