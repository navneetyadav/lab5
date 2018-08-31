//call the library
#include<iostream>

using namespace std;

//call main function
int main(){
	//declare the variables and asking the users to enter them
	float a1;
	float a2;
	float a3;
	cout <<"ENTER THE THREE NUMBERS THAT YOU HAVE TO COMPARE"<<endl;
	cin>> a1;
	cin>>a2;
	cin>>a3;
	if(a1>a2 && a1>a3)
		{
		cout <<"THE GREATER NUMBER IS "<<a1<<endl;
		}
     	else if(a2>a1 && a2>a3)
		{
		cout <<"THE GREATER NUMBER IS "<<a2<<endl;
		}
	else
		{
		cout<<"THE GREATER NUMBER IS "<<a3<<endl;
		}
     




	return 0;
	}

//comparing the given numbers using if command

