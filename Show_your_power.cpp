#include <iostream>
using namespace std;
int max();
int max(int a,int b)
{
	
	cout<<"Enter the value of first no. = ";
	cin>>a;
	cout<<"Enter the value of second no. = ";
	cin>>b;
	cout<<"Bigger No. is = ";
	if(a>b)
		cout<<a<<endl;
	else
		cout<<b<<endl;

}
int main()
{
	
	cin>>max();
}
