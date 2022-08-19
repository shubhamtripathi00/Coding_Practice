#include<stdio.h>

int binarysearch(int array[], int n, int x) 

{
   int low = 0;
   int high = n-1;

   while (low <= high)  
   
   { 
      int mid = (low + high)/2;

    if (x < array[mid])
   {
     high = mid - 1;
   }

   else if (x > array[mid])
   {
      low = mid + 1;
   }

   else if (x == array[mid])
   {
    return mid;
    break;
   }
}

}

int main(int argc, char const *argv[])
{
    int z,o,result;

    printf("Enter the number of elements : \n");
    scanf("%d",&z);

    printf("\n");

    int arr[z];

    for (int i = 0; i < z; i++)
    {
        printf("Enter the element : \n");
        scanf("%d",&arr[i]);
    }

    printf("\n");
    

    for (int i = 0; i < z; i++)
    {
        printf("%d \n",arr[i]);
    }

    printf("\n");

    printf("Enter the element you need to search : \n");
    scanf("%d",&o);

    printf("\n");

   result = binarysearch(arr,z,o);

    printf("The element is present at the %d index.\n",result);

    return 0;
}
