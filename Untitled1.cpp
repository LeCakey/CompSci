#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a=1;
	int b=2,temp=0,i=0,c=0;
	string something[3] ={"Go","fuck","yourself"};
	cout<< ("type a dammn numbeer \n" );
	cin>>a;
//	cout<<("\n");
	cout<< ("type another number your piece of shit \n ");
	cin>>b;
	//cout<<("\n");
	cout<< ("type another number, which is the desired length of your array")<<("\n");
	cin>>c;
	cout<<("the sum of the 2 numbers you've typed is ")<<(a+b)<<(" \n");
	cout<<("\n");
	if(a<b) {
		cout<<("a is smaller than b");
	}
	else{
		 cout<<("a is larger than b");
		 temp=a;
		 a=b;
		 b=temp;
	}
	i=a;
	while (i<=b) 
	{
		if((i%2)==0)
		{
			cout<<("\n")<<(i);
	  }
		i++;
	}
	i=0;
	cout<<("\n");
	while (i<=2)
	{
		cout<<(something[i])<<(" ");
		i++;
	}
	cout<<("\n");
	i=0;
		string something2[c+5]={};
		while (i<=c-1)
		{
			cout<<(" type a number in this array")<<("\n");
			cin>>something2[i];
			i++;
		}
		
	return 0;
}
