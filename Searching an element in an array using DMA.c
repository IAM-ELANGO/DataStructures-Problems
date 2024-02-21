#include <stdio.h>

int main()
{
    int n,target;
    int* arr=(int*) malloc(n*sizeof(int));
    printf("Enter the size of array:");
    scanf("%d",&n);
  printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
  printf("eneterr the element that need to be checked:");
  scanf("%d",&target);
  int flag=0;
   for(int i=0;i<n;i++)
     {
       if(*(arr+i) == target)
       {
        flag=1;
         break;
       }
       
     }
  if(flag==1)
  {
     printf("%d is present",target);
  }
  else{
    printf("the element is not present in the array");
  }
    return 0;
    free(arr);
}
