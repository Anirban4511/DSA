#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
   if(b==0)
   {
    return a;
   }
   return gcd(b,a%b);
}
int main()
{
    int a,b,result;
    cin>>a>>b;
    result=gcd(a,b);
    cout<<result;
}