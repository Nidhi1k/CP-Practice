#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
    int ar[3];
    
    //   sort(ar,ar+3);
    
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
     ar[0]=(k*l)/nl;
     ar[1]=(d*c);
     ar[2]=(p/np);
     
     sort(ar,ar+3);
     cout<<ar[0]/n;
	return 0;
}
