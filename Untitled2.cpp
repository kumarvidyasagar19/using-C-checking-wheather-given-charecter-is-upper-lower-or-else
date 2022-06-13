#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	if(ch>='A'&&ch<='Z'){   //'A' in semi cosider as charecter but "A" consider as double and double and int not will co,pair
		cout<<"1";
	}
		else if(ch>='a'&&ch<='z'){
		cout<<"0";
	}
		
		else{
			cout<<"-1";
		}	
		
	
}
