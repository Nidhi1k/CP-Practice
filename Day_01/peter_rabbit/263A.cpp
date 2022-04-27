#include <bits/stdc++.h>
using namespace std;

int main()
{  int x,y;
   int arr[6][6];
   for(int i=1;i<6;i++)
   {
       for(int j=1;j<6;j++)
       {   
           cin>>arr[i][j];
           if(arr[i][j]==1)
           {
                 x = i;
                 y = j;
           }
       }
   }
   cout<<abs(3-x)+abs(3-y)<<endl;
   
 
    return 0;
}
