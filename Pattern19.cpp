#include<iostream>
using namespace std;
int main()
{
	for(int i=0;i<=4;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<"_";
		}
		for(int k=9;k>=2*i-1;k--)
		{
			cout<<"$";
			}
			cout<<"\n";		}
	}
	

