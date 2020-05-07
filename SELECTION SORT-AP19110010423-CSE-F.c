#include <stdio.h>
int main()
{
    int n, i, j, position,swap;
    int a[100];
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter array elements\n");
    for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
    for(i = 0; i < n - 1; i++)
     {
       position=i;
    for(j = i + 1; j < n; j++)
     {
    if(a[position] > a[j])
     position=j;
    }
   if(position != i)
   {
   swap=a[i];
   a[i]=a[position];
   a[position]=swap;
   }
 }
   printf("Sorted array in ascending order:\n");
   for(i = 0; i < n; i++)
   printf("%d\n", a[i]);
   return 0;
  }