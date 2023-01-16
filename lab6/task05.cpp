#include <iostream>
using namespace std;
float totalIncome(string screening,int rows,int coloumns);
main()
{
string screening;
int rows,coloumns;
while(true)
{
cout<<"Enter Screening : ";
cin>>screening;
cout<<"Enter rows : ";
cin>>rows;
cout<<"Enter Coloumns : ";
cin>>coloumns;
float output=totalIncome(screening,rows,coloumns);
cout<<" Total Income  : "<<output<<endl;
}
}
float totalIncome(string screening,int rows,int coloumns)
{ float result;
if(screening=="Premiere")
 {
   result=rows*coloumns*12.00;
 }
 else if(screening=="Normal")
 {
   result=rows*coloumns*7.50;
 }
 else if(screening=="Discount")
 {
   result=rows*coloumns*5.00;
 }
 return result;
}