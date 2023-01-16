#include<iostream>
using namespace std;
string checkTitle(char gender,int age);
main()
{
char gender;
int age;
cout<<" Enter Your Age : ";
cin>>age;
cout<<" Enter Your Gender : ";
cin>>gender;
string title=checkTitle(gender,age);
cout<<"your title is :"<<title;
}
string checkTitle(char gender,int age)
{ string output;
  if(gender=='m'&& age>=16)
  {
    output="Mr.";
  }
  else if(gender=='m'&& age<16)
  {
    output="Master";
  }
  
   else if(gender=='f'&& age>=16)
  {
    output="Ms.";
  }
   else  if(gender=='f'&& age<16)
  {
    output="Miss";
  }
  return output;
}