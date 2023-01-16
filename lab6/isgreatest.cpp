#include<iostream>
using namespace std;
int output(int n1,int n2,int n3);
main()
{
int n1,n2,n3;
cout<<"Enter value 1 :";
cin>>n1;
cout<<"Enter value 2 :";
cin>>n2;
cout<<"Enter value 3 :";
cin>>n3;
int result=output(n1,n2,n3);
cout<<result<<" is the greater number";
}

int output(int n1,int n2,int n3)
{
    int greatest;
if(n1>n2 && n1>n3)
    {
        greatest=n1;
    }
else if(n2>n3 && n2>n1)
    {
        greatest=n2;
     }
else if(n3>n1 && n3>n2)
    {
        greatest=n3;
    }
 else
    {
        greatest=0;
    } 
        return greatest;
}