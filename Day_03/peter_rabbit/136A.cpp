#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	  int n;
	  cin>>n;
	  int ar1[n],ar2[n];
	  int sum=0,maxsum=0;
	  for(int i=0;i<n;i++)
	  {
	      cin>>ar1[i]>>ar2[i];
	      sum=sum-ar1[i]+ar2[i];
	      maxsum=max(sum,maxsum);
	  }
	  cout<<maxsum;
	return 0;
}
