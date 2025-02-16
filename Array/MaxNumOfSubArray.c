#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, k, arr[20], maxsum = 0, n, sum;
    system("cls");
    printf("Enter the number of values: ");
    scanf("%d", &n);
    printf("Enter the values:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            sum = 0;
            for (k = i; k <= j; k++) {
                sum += arr[k];
            }
            if (sum > maxsum) {
                maxsum = sum;
            }
        }
    }
    printf("Maximum sum of subarrays: %d\n", maxsum);

    return 0;
}