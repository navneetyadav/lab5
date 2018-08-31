//call the library
#include<iostream>

using namespace std;

int main ()
	{
	//declaring the variables for comparison
	int a1;
	int a2;
	//asking the user to enter the numbers
	cout << "PLEASE ENTER THE TWO NUMBERS"	<< endl;
	cin >> a1;
	cin >> a2;
	//comparing the two numbers
	if(a1>a2)
		{
		cout<< "THE GREATER NUMBER IS   "<< a1 << endl;
		}
	else
		{
		cout<<"THE GREATER NUMBER IS    " <<a2 << endl;
		}




	return 0;

	}
