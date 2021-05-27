#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[100];
int front=-1;
int size=100;
int rear=-1;
void add(int x)
{
	if(front==0&&rear==size-1||(rear==(front-1)%(size-1)))
	{
		cout<<"Queue Full"<<endl;
		return ;
	}
	else
	{
		if(front==-1)
		{
			front=0;rear=0;
			arr[rear]=x;
		}
		else
		{
			rear++;
			arr[rear%size]=x;
		}
	}
}
int dequeue()
{
	int temp;
	if(front==-1)
	{
		cout<<"Queue empty";
		return INT_MIN;
	}
	else
	{
		temp=arr[front];
		arr[front]=-1;
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else if(front==size-1)
		{
			front=0;
		}
		else
		front++;
		
		} return temp;
}
int main()
{
    cout<<"Enter the number of values to be added in list"
	add(321);
	add(32);
	add(4);
	cout<<dequeue()<<endl;
	cout<<dequeue()<<endl;
	return 0;
}