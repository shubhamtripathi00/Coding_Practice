#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    float median,swap;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);

    float arr[n];

    for (int i = 0; i < n; i++)
    {
      printf("Enter your element: \n");
      scanf("%f",&arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%f ",arr[i]);
    }

printf("\n");

for (int i = 0; i < n-1; i++)
{
    for (int j = 0; j < n-i-1; j++)
    {
        if (arr[j] > arr[j+1])
        {
            swap = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = swap;
        }
    }
}

for (int i = 0; i < n; i++)
    {
        printf("%f ",arr[i]);
    }


  if (n % 2 == 0)
   median = (arr[n/2-1] + arr[n/2])/2.0 ;
else
   median = arr[n/2];
        
printf("\n");        

        printf("%f",median);

    return 0;
}
