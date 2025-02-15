#include <stdio.h>
#include <stdlib.h>

int main(){
    int flag, num;
    system("cls");
    printf("\n Enter a value:");
    scanf("%d", &num);
    flag = evenodd(num);
    if (flag == 1)
        printf("\n The value is even ");
    else
        printf("\n The value is odd");
    
}
int evenodd(int a){
    if (a %2 == 0)
        return 1;
    else
        return 0;
}