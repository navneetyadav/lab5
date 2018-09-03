//calling the library
#include<iostream>
using namespace std;
//calling the main function
int main()
    {//declaring the starting number
    int n = 1;
    while (n <= 100)//putting the condition using the while command
   	 {
   		 if (n % 2 == 0)//checking if the number is divisible by 2
    	 {
    cout << n << endl;
    	 }
    n++;
    	 }
    return 0;
    }
