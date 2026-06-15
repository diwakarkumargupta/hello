#include <stdio.h>

int main()
{
    int arr[100], n, temp[100];
    int k = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
            temp[k++] = arr[i];
    }

    while(k < n)
        temp[k++] = 0;

    printf("Array after moving zeroes to end:\n");

    for(int i = 0; i < n; i++)
        printf("%d ", temp[i]);

    return 0;
}