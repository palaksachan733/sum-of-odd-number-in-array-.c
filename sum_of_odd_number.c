#include<stdio.h>
int main(){
    int arr[100],i,sum=0,size;
    printf("enter the size of array=");
    scanf("%d",&size);
    printf("enter the array of element");
    for(i=0;i<=size;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0){
            sum+=arr[i];
        }
    }
    printf("%d",sum);

    return 0;
}