#include <stdio.h>

int main()
{
    int n;
    int* arr1=(int*) malloc(n*sizeof(int));
    int* arr2=(int*) malloc(n*sizeof(int));
    int* arr3=(int*) malloc(n*sizeof(int));
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter elements of 1st array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr1+i));
    }
   printf("Enter elements of second array:\n");
    for(int i=0;i<n;i++)
    {
      scanf("%d",(arr2+i));
    }
    
    for(int i=0;i<n;i++)
    {
     *(arr3+i)= *(arr1+i)+ *(arr2+i);
    }
  printf("the sum of two array is:\n");
  for(int i=0;i<n;i++)
    {
      printf("%d\n",*(arr3+i));
    }
    
   free(arr);
    return 0;
}
