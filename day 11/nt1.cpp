#include<iostream>
using namespace std;
int gcd(int c,int m)
{int gcd,flag=0;
for(int i=0;i<=c&&i<=m;i++)
{if(c%i==0&&m%i==0)
{gcd=i;}
}
if(gcd==1)
flag=1;
return flag;
}
int main()
{ int a,b,c,m;
  cout<<"\nEnter four numbers(a,b,c,m):";
  cin>>a>>b>>c>>m;
  int d=gcd(c,m);
  if(d==1)
  {int e=a^b;
  int f=e/c;
  int g=f%m;
  cout<<"Value:"<<g;}
  else
  {cout<<"\nCondition not satisfied!!";}
  return 0;
}
