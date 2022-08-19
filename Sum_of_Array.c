#include<stdio.h>

/*..Sum using array and pointer..*/



int main(int argc, char const *argv[])
{
    int sumarray[5];
    int sumofconstants = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%2d",&sumarray[i]);
        int *ip = &sumarray[i];
        sumofconstants = sumofconstants + sumarray[i];
    }

    printf("%d\n",sumofconstants);

    return 0;
}
