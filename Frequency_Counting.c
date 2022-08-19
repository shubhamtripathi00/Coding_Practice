#include<stdio.h>


#define MAXVAL 50
#define COUNTER 11


int main(int argc, char const *argv[])
{
    float value[MAXVAL];
    int  i, low, high;
    int group[COUNTER];

    for (i = 0; i < MAXVAL; i++)
    {
        printf("Enter your Marks : \n");
        scanf("%f",&value[i]);
        ++group[(int) (value[i])/10];
    }

    printf("\n");

    for (int i = 0; i < COUNTER; i++)
    {
       low = i*10;
        if (low ==10)
            high = 100;
        else
            high = low + 9;

        printf("%2d %3d to %3d   %d\n",i,low,high,group[i]);
    }
    return 0;
}
