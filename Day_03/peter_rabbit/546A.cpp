#include <iostream>
using namespace std;

int main() {
	// your code goes here
	//k, n, w (1  ≤  k, w  ≤  1000, 0 ≤ n ≤ 109), 
// 	the cost of the first banana, initial number of dollars 
// 	the soldier has and number of bananas he wants.
 int k,n,w;
 cin>>k>>n>>w;
 int  sum =0;
 for(int i=1;i<=w;i++)
 {
     sum+=i;
 }
	sum*=k;
	int s =sum-n;
	if(s<0)
	{
	    cout<<0;
	}
	else
	{
	     cout<<s;
	}
	return 0;
}
