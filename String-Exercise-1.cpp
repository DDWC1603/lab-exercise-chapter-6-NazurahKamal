//include your name and matric number here
//display the string below using the string function state below.

#include <iostream>
#include<cstring>
using namespace std;

int main()
{
	char engkau1[10]="a";
	char engkau2[10]="hello";
	char engkau3[10];
	int len;
	
	//stringcopy(a,"hello");
	strcpy(engkau3, engkau1);
	cout<<"strcpy(engkau1, engkau2, engkau3): "<<engkau3 <<endl ;
	
	strcat(engkau1, engkau2);
	cout<<"strcat(engkau1, engkau2): " <<engkau1 <<endl;
	
	len=strlen(engkau1);
	cout<<"strlen(engkau1) : " <<len <<endl;
	
	return 0;
}

