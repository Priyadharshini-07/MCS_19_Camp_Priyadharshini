#include<iostream>
using namespace std;
int main()
{ int i,j,k,r1,r2,c1,c2,a[10][10],b[10][10],c[10][10];
do{
cout<<"'\nEnter rows and columns for matrix1:";
cin>>r1>>c1;

cout<<"\nEnter rows and columns for matrix2:";
cin>>r2>>c2;}while(c1!=r2);
cout<<"\nEnter the elements for matrix1:";
for(i=0;i<r1;i++)
{for(j=0;j<c1;j++)
{cin>>a[i][j];}}
cout<<"\nEnter the elements for matrix2:";
for(i=0;i<r2;i++)
{for(j=0;j<c2;j++)
{cin>>b[i][j];}}
for(i=0;i<r1;i++)
{for(j=0;j<c2;j++)
{c[i][j]=0;}}
for(i=0;i<r2;i++)
{for(j=0;j<c2;j++)
{for(k=0;k<r2;k++)
{c[i][j]+=a[i][k]*b[k][j];
}}}
cout<<"\nMultiplication of 2 matrices are:\n";
for(i=0;i<r1;i++)
{for(j=0;j<c2;j++)
{cout<<c[i][j]<<"\t";}
cout<<"\n";}
return 0;
}
