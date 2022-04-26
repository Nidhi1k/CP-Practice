#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	string arr[n];
    int count=0;
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    if(arr[i]=="Tetrahedron")
	    count+=4;
	    else if(arr[i]=="Cube")
	    count+=6;
	    else if(arr[i]=="Octahedron")
	    count+=8;
	    else if(arr[i]=="Dodecahedron")
	    count+=12;
	    else if(arr[i]=="Icosahedron")
	    count+=20;
	    
	}
	 cout<<count<<endl;
	return 0;
}
