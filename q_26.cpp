//calling the library
#include<iostream>
using namespace std;
//calling the main function
int main()
	{
	int n = 1;
	while (n <= 100)//using the while loop,we condition 
		{
		if (!(n% 2 == 0))//ensuring the number is not divisible by 2
		{
			cout << n << endl;
		}
		      n++;//increasing the value by 1
		}
	return 0;
	}
