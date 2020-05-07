#include <stdio.h>
int main()
{
    int n, i, j, swap;
    int arr[100];
 
    printf("Enter number of elements\n");
    scanf("%d", &n);
 
    printf("Enter the array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1 ; i <= n - 1; i++)
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])
            {	        
                swap    = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = swap;
                j--;
            }
    }
    printf("Sorted array in ascending order:\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}


