#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n ,m ,i, sum = 0;
    system("cls");
    printf("\n enter a value:");
    scanf("%d", &m);
    i=m;
    printf("\n enter another value:");
    scanf("%d",&n);
    while(i<=n){
        sum = sum +i;
        i++;
    }
    printf("\n the sum of numbers from %d to %d is:%d",m,n,sum);
    return 0;

}