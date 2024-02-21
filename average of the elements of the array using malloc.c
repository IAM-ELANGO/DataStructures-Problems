#include <stdio.h>

int main()
{
    int n;
    int* arr=(int*) malloc(n*sizeof(int));
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=*(arr+i);
    }
    int average=sum/n;
    printf("the average of the array elements is %d",average);
    free(arr);
    return 0;
}
