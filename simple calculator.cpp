#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n1,n2;
cout<<"Enter first number"<<endl;
cin>>n1;
cout<<"Enter Second number"<<endl;
cin>>n2;
int n;
	 long long  int sum=0,diff=0,product=1,div=1,rem=0;
	//Enter the operator you want to choose{+,-,*,/,%}.
	cout<<"Enter operator number: 1. Sum(+) 2. Subtract(-) 3. Multiply(*) 4. Division(/) 5. Remainder(%)"<<endl;
	cin>>n;
	switch(n)
	{
		case 1: 	
		    sum=n1+n2;
			cout<<sum<<endl;
		break;
		case 2: 	
		    diff=n1-n2;
			cout<<diff<<endl;
		
		break;
		case 3: 	
		    product=n1*n2;
			cout<<product<<endl;
		
		break;
		case 4: 	
		    div=n1/n2;
			cout<<div<<endl;
		break;
		default:
			rem=n1%n1;
			cout<<rem<<endl;
	}
	return 0;
}

