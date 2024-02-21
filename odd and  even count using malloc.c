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
    int oddcount=0,evencount=0;
    for(int i=0;i<n;i++)
    {
      if(*(arr+i)%2 == 0)
      {
        evencount++;
      }
      else{
        oddcount++;
      }
    }
    printf("oddcount:%d\nevencount:%d",oddcount,evencount);
    free(arr);
    return 0;
}
