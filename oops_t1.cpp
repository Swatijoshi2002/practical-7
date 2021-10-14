#include<iostream>
using namespace std;
int main()
{
int year,date,month;
cout<<"enter date onth and year"<<endl;
cin>>date>>month>>year;
cout<<"enter choice 1.date 2.month  3.year  0.exit "<<endl;
int n;
cin>>n;
switch(n)
{
   case 1 :cout<<date;
   break;
    case 2:cout<<month;
   break;
    case 3: cout<<year;
   break;
   default  : return 0;
   }
   return 0;
  }
   
