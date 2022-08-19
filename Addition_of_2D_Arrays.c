#include<stdio.h>


void printarrays(int a[2][2])

{
for (int p = 0; p < 2; p++)

{
    for(int q = 0;q<2; q++)
    {  
        printf("%d ",a[p][q]);
    }
    printf("\n");
}

}

void inputofarray(int b[2][2])

{

for (int i = 0; i < 2; i++)

{
    for(int j = 0;j<2; j++)
    { 
     printf("Enter the value of element: ");
     scanf("%d",&b[i][j]);
    }
}

}


int main(int argc, char const *argv[])

{
    int array1[2][2];
    int array2[2][2];
    int sum[2][2];

inputofarray(array1);

printarrays(array1);

inputofarray(array2);

printarrays(array2);


/*Adding of two arrays*/

for (int i = 0; i < 2; i++)

{
    for(int j = 0;j<2; j++)
    {  
        sum[i][j] = array1[i][j] + array2[i][j];
    }
    printf("\n");
}

printarrays(sum);


}



