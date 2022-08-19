#include<stdio.h>

int main(int argc, char const *argv[])
{
    int z,swap,position,j,i;
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
    position = i ;
    
    for (int j = i+1; j < z; j++)
    {
        if (arr[position] > arr[j])
        {
            position = j;
        }
    }

    if (position != i)
    {
        swap = arr[position];
        arr[position] = arr[i];
        arr[i] =swap;
    }
}


for (int i = 0; i < z; i++)
{
    printf("%d ",arr[i]);
}


    return 0;
}
