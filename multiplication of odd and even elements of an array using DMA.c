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
    int oddmul=1,evenmul=1;
    for(int i=0;i<n;i++)
    {
      if(*(arr+i)%2 == 0)
      {
        evenmul*=*(arr+i);
      }
      else{
        oddmul*=*(arr+i);
      }
    }
    printf("oddmul:%d\nevenmul:%d",oddmul,evenmul);
    free(arr);
    return 0;
}
