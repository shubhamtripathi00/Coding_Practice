#include<stdio.h>

int main(int argc, char const *argv[])
{
    int z,swap;
    printf("Enter the number of elements : \n");
    scanf("%d",&z);

    int arr[z];

    for (int i = 0; i < z; i++)
    {
        printf("Enter your element : ");
    
        scanf("%d",&arr[i]);
    }

for (int i = 0; i < z; i++)
{
    printf("%d ",arr[i]);
}

printf("\n");


for (int i = 0; i < z-1; i++)
{
    for (int j = 0; j < z-i-1; j++)
    {
        if (arr[j] > arr[j+1])
        {
            swap = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = swap;
        }
    }
}

for (int i = 0; i < z; i++)
{
    printf("%d ",arr[i]);
}


    return 0;
}
