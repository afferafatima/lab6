#include<iostream>
using namespace std;
char grade(int marks);
main()
{
int marks;
cout<<"Enter Marks :";
cin>>marks;
char result=grade(marks);
cout<<"Your grade is : "<<result;
}
char grade(int marks)
{ 
char output;
    if(marks<50)
        {
        output='F';
        }
    else if(marks>=50 && marks<=60 )
        {
        output='E';
        }
    else if(marks>=61 && marks<=70)
        {
        output='D';
        }
    else if(marks>=71 && marks<=80)
        {
        output='C';
        }
    else if(marks>=81 && marks<=85)
        {
        output='B';
    }
    else if(marks>85)
    {
        output='A';
    }
    return output;

}