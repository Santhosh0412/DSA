#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    int i,num,n,pos,arr[100];
    system("cls");
    printf("enter the number of elements in the array :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("The position of the value:");
    scanf("%d",&pos);
    printf("the value to be inserted:");
    scanf("%d",&num);
    for(i=n-1;i>=pos;i--){
        arr[i+1] = arr[i];
    }
    arr[pos]=num;
    n=n+1;
    printf("the array after insertion:");
    for(i=0;i<n;i++){
        printf("\narr[%d]=%d",i,arr[i]);
    }
    return 0;
}
