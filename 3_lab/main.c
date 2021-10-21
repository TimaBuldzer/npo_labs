#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int n = 5;
    int arr[n][n];;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() / 100;
        }
    }
    int min = arr[0][1];
    printf("Current array is: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
            if (i > j) {
                if(arr[i][j] < min){
                    min = arr[i][j];
                }
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("Min element in array is: %d\n", min);

    return 0;
}
