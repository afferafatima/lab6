#include<iostream>
#include<cmath>
using namespace std;
float days(string year,int weekends,int holidays);
main()
{
    int weekends;
    int holidays;
    string year;
    cout<<"Enter year(leap or normal) : ";
    cin>>year;
    cout<<"Enter holidaysdays(except weekend) : ";
    cin>>holidays;
    cout<<"Enter weekends in which he travels to hometwon :";
    cin>>weekends;
    float answer=days(year,weekends,holidays);
    answer=floor(answer);
    cout<<"Playing days : "<<answer<<endl;

}
float days(string year,int weekends,int holidays)
{
    float sofiaweekends=48-weekends;
    float tdays=sofiaweekends*(0.75);
    float playingdays=tdays+(0.6667)*holidays+weekends;
    float output;
    if(year=="leap");
    {
        output=playingdays+(0.15)*playingdays;
    }
    if(year=="normal")
    {
        output=playingdays;
    }
    return output;
}