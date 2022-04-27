#include <iostream>
#include<algorithm>
using namespace std;

int main() {
       int ar[3];
       for(int i=0;i<3;i++)
       {
           cin>>ar[i];
       }
       sort(ar,ar+3);
       cout<<(ar[1]-ar[0])+(ar[2]-ar[1]);
	return 0;
}
