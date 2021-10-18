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
cout<<"matrix before reversing"<<endl;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
 cout<<a[i][j]<<" ";
 }
 cout<<endl;
 }
 
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
   a[i][j]=10-a[i][j];
 }
 cout<<endl;
 }
 
 
 cout<<"matrix before reversing by a[i][j]=10-a[i][j]"<<endl;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
 cout<<a[i][j]<<" ";
 }
 cout<<endl;
 }
 }
 
