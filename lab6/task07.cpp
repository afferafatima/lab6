#include<iostream>
using namespace std;
float checkCost(string city,string product,int quantity);
main()
{
string city,product;
int quantity;
cout<<"Enter City : ";
cin>>city;
cout<<"Enter Product : ";
cin>>product;
cout<<"Enter Quantity : ";
cin>>quantity;
float result=checkCost(city,product,quantity);
cout<<"Cost :"<<result;

}
float checkCost(string city,string product,int quantity)
{ float output;
 if(city=="Sofia")
 { 
  if(product=="coffee")
  { 
   output=quantity*0.50;
  }
  else if(product=="water")
  { 
   output=quantity*0.80;
  }
  else if(product=="beer")
  { 
   output=quantity*1.20;
  }
  else if(product=="sweets")
  { 
   output=quantity*1.45;
  }
  else if(product=="peanuts")
  { 
   output=quantity*1.60;
  }
  return output;
 }
 else if(city=="Plovdiv")
 {
  if(product=="coffee")
  { 
   output=quantity*0.40;
  }
  else if(product=="water")
  { 
   output=quantity*0.70;
  }
  else if(product=="beer")
  { 
   output=quantity*1.15;
  }
  else if(product=="sweets")
  { 
   output=quantity*1.30;
  }
  else if(product=="peanuts")
  { 
   output=quantity*1.50;
  }
  return output;
 }
 else if(city=="Varna")
 {
 if(product=="coffee")
  { 
   output=quantity*0.45;
  }
  else if(product=="water")
  { 
   output=quantity*0.70;
  }
  else if(product=="beer")
  { 
   output=quantity*1.10;
  }
  else if(product=="sweets")
  { 
   output=quantity*1.35;
  }
  else if(product=="peanuts")
  { 
   output=quantity*1.55;
  }
  return output;
 }

return 0;



 }







