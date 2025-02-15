#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n,sum =0,arr[20];
    float avg =0.0;
    system("cls");
    printf("\n Enter the number of elements :");
    scanf("\n %d",&n);
    for(i=0;i<n;i++){
        printf("\n arr[%d]=",i);
        scanf("\n%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum +=arr[i];
    }
    avg=(float)sum/n;
    printf("\n sum of %d numbers is:%d",n,sum);
    printf("\n the average of %d numbers is :%.2f",n,avg);
    return 0;
}