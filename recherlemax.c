#include <stdio.h>

int main() {
    int i, min;
    int arr[] = {11, 17, 19, 25, 99, 18, 95, 180, 2, 13};
    int size = sizeof(arr) / sizeof(arr[0]);

    min = arr[0];
    for(i = 1; i < size; i++) {
        if(min < arr[i]) {
            min = arr[i];
        }
    }
    printf("le min indique: %d\n", min);

    return (0);
}