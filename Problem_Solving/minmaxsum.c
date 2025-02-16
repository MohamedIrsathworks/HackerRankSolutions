#include <stdio.h>
#include <stdlib.h>

void miniMaxSum(int arr_count, int* arr) {
    long sum1 = 0, sum2 = 0, totalSum = 0;
    int temp = 0;

    for (int i = 0; i < arr_count - 1; i++) {  
        for (int j = 0; j < arr_count - 1 - i; j++) {  
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < arr_count; i++) {
        totalSum += arr[i];
    }

    sum1 = totalSum - arr[arr_count - 1];
    sum2 = totalSum - arr[0];

    printf("%ld %ld\n", sum1, sum2);
}

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    miniMaxSum(5, arr);

    return 0;
}
