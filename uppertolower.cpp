/* Change Case from upper to lower
A = 65, a = 97 
Range of upper case is 65-90 */
#include<iostream>
using namespace std;

int main()
{
	string str="HELLO MY NAME IS HIMANSHU SONI";

	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==32)
		{
			str[i]=str[i];
		}
		else
		{
			str[i]=str[i]+32;
		}
	}

	cout<<str<<endl;

	return 0;
}