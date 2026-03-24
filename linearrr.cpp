#include <stdio.h>

int main()
{
    int arr[50], n, i, target;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search (target): ");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            printf("Element found at index %d", i);
            return 0;
        }
    }

    printf("Element not found.");
    return 0;
}
