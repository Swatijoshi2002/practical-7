#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int c=n-1;
 for(int i=0;i<n;i++)
     {
     for(int j=0;j<n;j++)
     {
     if(j>=c && c>=0)
     {
     cout<<"*";
     }
     else cout<<" ";
     }
     cout<<endl;
     c--;
     }
     }
        
