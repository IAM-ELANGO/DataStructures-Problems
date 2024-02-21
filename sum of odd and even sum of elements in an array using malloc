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
    int oddsum=0,evensum=0;
    for(int i=0;i<n;i++)
    {
      if(*(arr+i)%2 == 0)
      {
        evensum+=*(arr+i);
      }
      else{
        oddsum+=*(arr+i);
      }
    }
    printf("oddsum:%d\nevensum:%d",oddsum,evensum);
    free(arr);
    return 0;
}
