#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  float weight;
  float height;
  int age;

  printf("Enter your weight in Kilograms : \n");
  scanf("%f",&weight);
  printf("Enter your height in Centimeters : \n");
  scanf("%f",&height);
  printf("Enter your age : \n");
  scanf("%d",&age);

  float real_height = (height/100)*(height/100);
  float bmi = weight/real_height;

  printf("%4f\n\n",bmi);

if (bmi > 30)

  printf("You are obese!\n");

else if (bmi > 25 && bmi < 29.9)

  printf("You are overweight!\n");

else if (bmi > 18.5 && bmi < 24.9)

  printf("You are normal weight!\n");

else if (bmi < 18.5)

  printf("You are underweight!\n");


  return 0;
}
