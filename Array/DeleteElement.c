#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,n,arr[20],pos;
    system("cls");
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("enter the value in the array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the postion to be deleted:");
    scanf("%d",&pos);
    for(i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("After deletion of %d, array is:\n",pos);
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
    
}