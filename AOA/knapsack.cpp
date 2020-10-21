#include<iostream>
using namespace std;

int max(int x,int y)
{
	if(x>y)
	return x;
	else
	return y;
}

int knapsack(int W,int w[],int value[],int n)
{
	int i,j,knap[n+1][W+1];
	for (i=0;i<=n;i++)
	{
		for (j=0;j<= W;j++)
		{
			if(i==0 || j==0)
			knap[i][j]=0;
			else if (w[i-1]<= j)
			knap[i][j]=max(value[i-1]+knap[i-1][j-w[i-1]],knap[i-1][j]);
			else
			knap[i][j]=knap[i-1][j];
		}
	}
	return knap[n][W];
}

int main()
{
	int n;
	cout<<"Enter number of items in Knapsack :";
	cin>>n;
	int W,value[n],w[n];
	for (int i =0;i<n;i++)
	{
		cout<<"Value of item :";
		cin>>value[i];
		cout<<"Weight of item :";
		cin>>w[i];
	}
	cout<<"Capacity of knapsack :";
	cin>>W;
	cout<<"Final Profit of Knapsack is :"<<knapsack(W,w,value,n);
	return 0;
	
}
