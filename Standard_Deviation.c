#include<stdio.h>
#include<math.h>


int main(int argc, char const *argv[])
{
    int z;
    float sum, mean, deviation, sumsqr, variance, stddeviation; 

    printf("Enter the number of elements : \n");
    scanf("%d",&z);

    int arr[z];

    for (int i = 0; i < z; i++)
    {
        printf("Enter your element : \n");
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }

    mean = sum/z;

    printf("The sum of all elements is %f\n",sum);

    printf("The mean of the provided values is %f\n",mean);

    for (int i = 0; i < z; i++)
    {
        deviation = arr[i] - mean;
        sumsqr = sumsqr + (deviation*deviation);
    }

    variance = sumsqr/z;
    stddeviation = sqrt(variance);

    printf("The standard deviation is %f\n",stddeviation);

    return 0;
}
