#include<iostream>
using namespace std;
float lowestprice(int km,string time);
string travelmode(int km,string time);
main()
{
int km;
string time;
cout<<"Enter total Kilimeters : ";
cin>>km;
cout<<"Enter time(day or night) : ";
cin>> time;
float output=lowestprice(km,time);
string output1=travelmode(km,time);
cout<<"Lowest price is  "<<output<<" EUR using "<<output1;
}
float lowestprice(int km,string time)
{
    float price;
 if(km<=19 && time=="day")
 {
  price=0.70+(0.79*km);
 }
 else if(km<=19 && time=="night")
 {
  price=0.70+(0.90*km);
 }
  else if(km>=20 && km<100)
 {
  price=(0.09*km);
 }
  else if(km>=100)
 {
  price=(0.06*km);
 }
 return price;

}
string travelmode(int km,string time)
{ string mode;
 if(km<=19 && time=="day")
 {
  mode="Taxi";
 }
 else if(km<=19 && time=="night")
 {
  mode="Taxi";
 }
 else if(km>=20 && km<100)
 {
  mode="Train";
 }
  else if(km>=100)
 {
  mode="Bus";
 }
 return mode;
}