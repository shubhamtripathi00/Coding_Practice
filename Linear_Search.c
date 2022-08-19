#include<stdio.h>

int linearsearch(int array[], int n, int x) {
  
  // Going through array sequencially
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
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

   result = linearsearch(arr,z,o);

   if (result == -1)
   	printf("The element is not present in the array.");
   else
   	printf("The element is present at the %d index.\n",result);

	return 0;
}
