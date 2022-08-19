/* Area of  a triangle*/

#include<iostream>

using namespace std;

int main() 
{
  float i,j,k;
  std::cout << "Enter the length of base :" << std::endl;
  std::cin >> i;
  std::cout << "Enter the length of height: " << std::endl;
  std::cin >> j;
  
  k = (i*j)/2;
  
  std::cout << k << endl;
    return 0;
}
