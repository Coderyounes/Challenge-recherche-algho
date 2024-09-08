#include <stdio.h>

int main()
{
    int i, size, valeur, low, high, mid;
    int arr[] = {12, 15, 22, 85, 99, 124, 180};
    size = sizeof(arr) / sizeof(arr[0]);

    printf("Valeur to rechere: ");
    scanf("%d", &valeur);

    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == valeur)
        {
            printf("Here: %d", arr[mid]);
            break;
        }
        else if (arr[mid] < valeur)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return (0);
}