#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n,j,arr[10],flag=0;
    system("cls");
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("array[%d]=",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
         for(j=i+1;j<n;j++){
            if(arr[i] == arr[j] && i !=j){
                flag =1;
                printf("The duplicates are present in the positions %d and %d",i,j);
            }
         }
    }
    if(flag == 0){
        printf("there are no duplicates");
    }
}