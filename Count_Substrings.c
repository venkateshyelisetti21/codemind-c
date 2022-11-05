#include <iostream>
using namespace std;

int main() {
	
	 int t ;
	 cin>>t;
	 
	 while(t--){
	   long long int n ;
	    cin>>n;
	    
	    string s ;
	    cin>>s;
	    
	    long long int cnt = 0 ;
	    
	    for(int i = 0 ; i < n ; i++)
	      {
	         if(s[i] == '1')
	           cnt++ ;
	      }
	     
	    long long int result = (cnt*(cnt+1))/2 ;
	     
	     cout<<result<<endl;
	    
	 }
	
	return 0;
}