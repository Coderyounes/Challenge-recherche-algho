#include <stdio.h>

int main() {
    int arr[] = {11, 17, 19, 25, 99, 18, 25, 180, 2, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int counteur = 0, x = 88, i;

    for(i = 0; i < size; i++) {
        if(arr[i] == x) {
            counteur++;
        }
    }
    if(counteur <= 0) {
        printf("Nothing Found");
    } else {
        printf("The total occurece of %d is %d times\n", x, counteur);
    }
    return (0);
}