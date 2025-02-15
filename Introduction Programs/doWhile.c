#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, sum = 0, i = 0;
    float avg =0.0;
    system("cls");
    printf("\n enter the value of n:");
    scanf("%d", &n);
    do{
        sum = sum +i;
        i++;
    }
    while(i<=n);
    avg =(float)sum/n;
    printf("\n sum of the first n numbers:%d", sum);
    printf("\n avg of first n numbers:%2.f",avg);
    return 0;
}