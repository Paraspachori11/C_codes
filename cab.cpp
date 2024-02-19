#include<iostream>
using namespace std;
int main()
{
	int t,x,y;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		if(x<y){
			cout<<"FIRST";
		}
		else if(x==y){
			cout<<"ANY";
		}
		else{
			cout<<"SECOND";
		}
    }
}
