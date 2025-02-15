#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,n,arr[20],number=0;
    system("cls");
    printf("Enter the number of values:");
    scanf("\n %d",&n);
    for(i=0;i<n;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    i=0;
    while(i<n){
        number = number *10 +arr[i];
        i++;
    }
    printf("\n the number formed is:%d",number);
    return 0;
}