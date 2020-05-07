#include<stdio.h>
int main()
{
    int a[100],i,j,n,swap;
    printf(" Enter number of Elements to Sort:\n");
    scanf("%d",&n);
    printf(" Enter array Elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }
        }
     printf("sorted array in ascending order:\n");    
    for(i=0; i<n; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
 