#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n,small,pos,arr[20];
    system("cls");
    printf("\n Enter the number of values:");
    scanf("\n %d",&n);
    printf("\n enter the values:");
    for(i=0;i<n;i++){
        scanf(" %d",&arr[i]);
    }
    small = arr[0];
    pos = 0;
    for(i=0;i<n;i++){
        if (arr[i] <small)
        {
           small = arr[i];
           pos = i;
        }
    }
    printf("\n The smallest value is :%d",small);
    printf("\n the position of the smallest value:%d",pos);
    return 0;
}