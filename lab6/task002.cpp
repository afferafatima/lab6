#include<iostream>
using namespace std;
int output(string day,string month,float amount);
main()
{
string day,month;
float amount;
cout<<"Enter day :";
cin>>day;
cout<<"Enter month :";
cin>>month;
cout<<"Purchase amount:";
cin>>amount;
int result=output(day,month,amount);
cout<<result;

}
int output(string day,string month,float amount)
{
 float netamount;
 if(day=="sunday" && month=="October")
 {
    netamount=amount-(amount*0.1);
 }
 else
 {
 netamount=amount;
 }
 return netamount;
}