#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  char a[n][n];
   for(int i=0;i<n;i++)
     {
     for(int j=0;j<n;j++)
     {
       if(j<=i)
       {
       a[i][j]='*';
       }
       }
       }
       for(int i=0;i<n;i++)
     {
     for(int j=0;j<n;j++)
     {
      if(j<=i)
       {
     cout<<a[i][j]<<" ";
    }
    }
     cout<<endl;  
    }     
    }
       
