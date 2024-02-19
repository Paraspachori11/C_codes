#include<iostream>
using namespace std;
void fibonacci(int m1,int m2,int m3,int term)
{
	if(term>7)
	{
		return;
	}
	cout<<m3;
	m1=m2;
	m2=m3;
	m3=m1+m2;
	fibonacci(m1,m2,m3,term=term+1);
}
int main()
{
	int m1=0,m2=1,m3,term=2;
	m3=m1+m2;
	cout<<m1<<m2;
    fibonacci(m1,m2,m3,term);
}
