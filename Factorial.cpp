#include <iostream>
using namespace std;
int main() {
    
    int i,n,factorial;
    cin >> n;
    factorial = 1;
    
    for(i=1;i <= n;i++)
    {
        factorial = factorial * i;
    }
    
    cout << factorial << endl;

    return 0;
}
