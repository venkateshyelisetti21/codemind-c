#include <iostream>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,a;
	    cin>>n>>a;
	    if(a % 2 != 0)
	    {
	        if(n%2 != 0)
	        {
	            cout<<"Odd"<<endl;
	        }
	        else
	        {
	            cout<<"Even"<<endl;
	        }
	    }
	    else
	    {
	        if(n == 1)
	        {
	            cout<<"Even"<<endl;
	        }
	        else
	        {
	            cout<<"Impossible"<<endl;
	        }
	    }
	}
	return 0;
}
