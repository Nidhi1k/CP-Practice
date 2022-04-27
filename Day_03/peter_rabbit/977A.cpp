#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	 int long long n,k;
	 cin>>n>>k;
	 for(int i=1;i<=k;i++)
	 {
	     int long long temp=n%10;
	     if(temp==0)
	     {
	         n=n/10;
	     }
	     else
	     {
	         n=n-1;
	     }
	 }
	 cout<<n;
	return 0;
}
