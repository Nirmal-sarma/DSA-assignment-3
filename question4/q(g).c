#include <stdio.h>
#include <stdlib.h>

int FindItemUnsorted(int arr[], int n)
{
    int idx = 0;
    if (arr[0] > arr[1])
    {
        idx = 0;
    }
    else if (arr[n - 1] < arr[n - 2])
    {
        idx = n - 1;
    }
    else
    {

        for (int i = 1; i < n - 1; i++)
        {

            if ((arr[i] > arr[i - 1] && arr[i + 1] < arr[i]))
            {

                idx = i;
                break;
            }
        }
    }

    return idx;
}

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int p = FindItemUnsorted(arr, n);

    printf("%d", p);
    return 0;
}