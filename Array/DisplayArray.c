#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, n, arr[5];
    system("cls");
    printf("\n Enter the number of elements inthe array:");
    scanf("\n %d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d] =",i);
        scanf("%d",&arr[i]);
    }
    printf("\n the elements of the array are:");
    for(i=0;i<n;i++)
        printf("\t %d",arr[i]);
    
    return 0;
}

