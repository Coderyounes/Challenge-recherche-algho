#include <stdio.h>

int main()
{
    int i, size, valeur;
    int arr[] = {41, 15, 16, 99, 85, 124, 14};
    size = sizeof(arr) / sizeof(arr[0]);

    printf("Valeur to rechere: ");
    scanf("%d", &valeur);
    for (i = 0; i < size; i++)
    {
        if (arr[i] == valeur)
        {
            printf("Found it !!!\n");
            break;
        }
    }
    return (0);
}