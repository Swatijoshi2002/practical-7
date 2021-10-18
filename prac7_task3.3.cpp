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
  int start=0;
  int end=n-1;
  //swapping rows;
  while(start<=end)
  {
   for(int i=0;i<n;i++)
   {
   swap(a[start][i],a[end][i]);
   }
   start++;
   end--;
  }
  
  int s=0,e=n-1;
   while(s<=e)
  {
   for(int i=0;i<n;i++)
   {
   swap(a[i][s],a[i][e]);
   }
   s++;
   e--;
  }
 cout<<"matrix after reversing"<<endl;
 for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
 cout<<a[i][j]<<" ";
 }
 cout<<endl;
 }
 return 0;
 }
