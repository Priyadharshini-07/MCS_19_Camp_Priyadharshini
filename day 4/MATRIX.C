#include<stdio.h>
int main()
{int a[3][3],b[3][3],c[3][3],i,j,m,n;
clrscr();
printf("\nEnter rows and columns for the matrix:");
scanf("%d%d",&m,&n);
printf("Enter the elements for matrix1:");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{scanf("%d",&a[i][j]);
}}
printf("Enter the elements for matrix2:");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{scanf("%d",&b[i][j]);
}}
printf("\nElements of matrix1:\n");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{printf("%d\t",a[i][j]);
}printf("\n");
}
printf("\nElements of matrix2:\n");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{printf("%d\t",b[i][j]);
}printf("\n");
}
printf("\nAddition of two matrices:\n");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{c[i][j]=a[i][j]+b[i][j];
printf("%d\t",c[i][j]);
}printf("\n");
}
return 0;
}