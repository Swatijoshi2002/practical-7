#include<iostream>
using namespace std;
int main()
{
   int n;
cin>>n;
int a[n][n];
 for(int i=0;i<n;i++)
     {
     for(int j=0;j<n;j++)
     {
     cin>>a[i][j];
     }
     }
    int i=0,k=n-1;
    while(i<k)
    {
     for(int j=0;j<n;j++)
     {
        swap(a[i][j],a[k][j]);
        }
        k--;
        i++;
       }
       int c=0,c1=n-1;
       while(c<c1)
       {
          for(int j=0;j<n;j++)
          {
          swap(a[j][c],a[j][c1]);
          }
          
 }
  for(int z=0;z<n;i++)
     {
     for(int j=0;j<n;j++)
     {
     cout<<a[z][j];
     
     }
     cout<<endl;
     }
     }
     
