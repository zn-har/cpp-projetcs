#include <iostream>
using namespace std;
int main()
{
		int f=1,i;
		cout<<"enter the limit:";
		cin>>i;
		while(i>1)
		{
		 f=f*i;
		 i=i-1;
		} 	
		cout<<"factorial is"<<f;
}
