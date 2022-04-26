#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	 int arr[n];
	bool l = true;
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    if(arr[i]==1)
	    {
	        cout<<"HARD";
	        l=false;
	        break;
	    }
	    
	}
	if(l==true)
	{
	    cout<<"EASY";
	}
	return 0;
}
