#include <iostream>
using namespace std;

int main() {
	 int long long  n;
	 cin>>n;
    // cout<<n<<endl;
	 int long long count_unlucky =0,count=0;
	 
	 while(n)
	 {
	     int temp = n%10;
	     count++;
	     if(temp!=4&&temp!=7)
	     { 
	        
	         count_unlucky++;
	     }
	     n=n/10;
	 }
	 int count_lucky=count-count_unlucky;
//	 cout<<count_lucky<<" "<<count<<" "<<count_unlucky<<endl;
	  
      if(count_lucky!=4&&count_lucky!=7)
	 {
	   
	    
	       cout<<"NO";
	 }
	   
	  else
	  {
	           cout<<"YES";
	   }
	   
	 
	 
 	
	return 0;
}
