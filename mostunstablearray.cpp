#include <bits/stdc++.h>
using namespace std;
 
int main() {
     int t,x,y,n,i,k,l;
     cin>>t;
     for(i=0;i<t;i++)
     {
          cin>>x>>y;
          if(x==2){
               cout<<y;
          }
          else if(x<2){
               cout<<"0";
          }
          else{
               cout<<2*y;
          }
          cout<<endl;
     }
     return 0;
}
