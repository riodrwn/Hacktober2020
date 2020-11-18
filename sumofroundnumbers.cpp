#include<bits/stdc++.h>
using namespace std;
 
int main(){
     long long t,i,n,a,d,m;
     cin>>t;
     for(i=0;i<t;i++)
     {
          cin>>n;
          d=n;
          m=0;
          while(n!=0)
          {
               if(n%10!=0)
               {
                    m++;
               }
               n/=10;
          }
          cout<<m<<endl;
          a=1;
          while(d!=0)
          {
               if(d%10!=0)
               {
                    cout<<d%10*a<<" ";
               }
               a*=10;
               d/=10;
          }
          cout<<endl;
     }
     return 0;
}
