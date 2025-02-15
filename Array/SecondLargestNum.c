
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,n,largest,second_largest,arr[20];
    system("cls");
    printf("Enter the number of values:");
    scanf("\n %d",&n);
    printf("\n Enter the value:");
    for(i=0;i<n;i++){
        printf("\n arr[%d]=",i);
        scanf("\n%d",&arr[i]);
    }
    largest =arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    second_largest = arr[1];
    for(i=0;i<n;i++){
        if(arr[i]!= largest){
            if(arr[i]>second_largest){
                second_largest = arr[i];
            }
        }
    }
    printf("\n the largest value is :%d",largest);
    printf("\n the second largest value is :%d",second_largest);
    return 0;
}
