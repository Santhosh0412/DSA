
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j,n,arr[20],targetsum;
    system("cls");
    printf("enter the number of values:");
    scanf("%d",&n);
    printf("Enter the target value:");
    scanf("%d",&targetsum);
    printf("Enter the values:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int found =0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j] == targetsum){
                printf("pair found :%d,%d\n",arr[i],arr[j]);
                found =1;
        }
        }
    }
    if(!found){
        printf("there is no such pair.\n");
    }
    return 0;
}
