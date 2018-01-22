//its just an array example
//find the sum of all the value inside the array
#include <iostream>
using namespace std;

int ary[5]={2, 4, 6, 8, 10};/*insert your own value*/

int main()
{	
	int n, result=0;
	for(n=0; n<=5; n++)/* n is not more than 10*/
	{
		result += ary[n];
	}
	cout<<result;
	return  0;
	

}
