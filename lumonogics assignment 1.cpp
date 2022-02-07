#include<iostream>
using namespace std;
int main()
{
	int arr[11]={3,2,5,4,1,1,1,1,1,3,2};
	int n=11,total,sum=0;
	for(int i=0;i<n;i++)
	{
		total=total+arr[i];
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
		if((sum-arr[i])==(total-sum))
		{
			cout<<"index is "<<i+1;	
		}
	}
}

