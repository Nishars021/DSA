#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int key, found=0;
    printf("Enter element to search : ");
    scanf("%d",&key);
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            printf("Element at %d",i);
            found=1;
            break;
        }
    }
        if(found==0){
            printf("Element not found");
        }
    return 0;
}