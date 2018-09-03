//call library
#include <iostream>
using namespace std;
//call the main function

int main()
{
    int n, sum = 0;//declaring the variables for the operations

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) 
	{
        sum += i;
        }

    cout << "Sum = " << sum;
    return 0;
}
