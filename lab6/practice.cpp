#include<iostream>
using namespace std;
void output(float budget,string category,int people);
main()
{
float budget;
string category;
int people;
cout<<" Enter Budget : ";
cin>>budget;
cout<<"Enter Category(VIP or Normal) : ";
cin>>category;
cout <<"Enter number of people in group : ";
cin>>people;
output(budget,category,people);

}
void output(float budget,string category,int people)
{
 float money;
 float amount;
 if(category=="VIP")
 {
    if(people<=4)
    {
       money=budget-(budget*0.75); 
       if(money>=(499.99*people))
        {
         amount=money-(499.99*people);
        cout<<"YES! you have " << amount << " QR left"<<endl; 
        }
        else if(money<499.99)
        {
        amount=(499.99*people)-money;
        cout<<"NOT enough money! you need " <<amount<< " QR "<<endl; 
        }

    }
    if(people>=5 && people <=9 )
    {
       money=budget-(budget*0.60); 
       if(money>=(499.99*people))
        {
         amount=money-(499.99*people);
        cout<<"YES! you have " << amount << " QR left"<<endl; 
        }
        else if(money<(499.99*people))
        {
        amount=(499.99*people)-money;
        cout<<"NOT enough money! you need " <<amount<< " QR "<<endl; 
        }

    }
    if(people>=10 && people <=24 )
    {
       money=budget-(budget*0.50); 
       if(money>=(499.99*people))
        {
         amount=money-(499.99*people);
        cout<<"YES! you have " << amount << " QR left"<<endl; 
        }
        else if(money<(499.99*people))
        {
        amount=(499.99*people)-money;
        cout<<"NOT enough money! you need " <<amount<< " QR "<<endl; 
        }

    }
     if(people>=25 && people <=49 )
    {
       money=budget-(budget*0.40); 
       if(money>=(499.99*people))
        {
         amount=money-(499.99*people);
        cout<<"YES! you have " << amount << " QR left"<<endl; 
        }
        else if(money<(499.99*people))
        {
        amount=(499.99*people)-money;
        cout<<"NOT enough money! you need " <<amount<< " QR "<<endl; 
        }

    }
    if(people>=50 )
    {
       money=budget-(budget*0.25); 
       if(money>=(499.99*people))
        {
         amount=money-(499.99*people);
        cout<<"YES! you have " << amount << " QR left"<<endl; 
        }
        else if(money<(499.99*people))
        {
        amount=(499.99*people)-money;
        cout<<"NOT enough money! you need " <<amount<< " QR "<<endl; 
        }

    }

    }
     if(category=="Normal")
    {
    if(people<=4)
    {
       money=budget-(budget*0.75); 
       if(money>=(249.99*people))
        {
         amount=money-(249.99*people);
        cout<<"YES! you have " << amount << " QR left"<<endl; 
        }
        else if(money<(249.99*people))
        {
        amount=(249.99*people)-money;
        cout<<"NOT enough money! you need " <<amount<< " QR "<<endl; 
        }

    }
    if(people>=5 && people <=9 )
    {
       money=budget-(budget*0.60); 
       if(money>=(249.99*people))
        {
         amount=money-(249.99*people);
        cout<<"YES! you have " << amount << " QR left"<<endl; 
        }
        else if(money<(249.99*people))
        {
        amount=(249.99*people-money);
        cout<<"NOT enough money! you need " <<amount<< " QR "<<endl; 
        }

    }
    if(people>=10 && people <=24 )
    {
       money=budget-(budget*0.50); 
       if(money>=(249.99*people))
        {
         amount=money-(249.99*people);
        cout<<"YES! you have " << amount << " QR left"<<endl; 
        }
        else if(money<(249.99*people))
        {
        amount=(249.99*people-money);
        cout<<"NOT enough money! you need " <<amount<< " QR "<<endl; 
        }

    }
     if(people>=25 && people <=49 )
    {
       money=budget-(budget*0.40); 
       if(money>=(249.99*people))
        {
         amount=money-(249.99*people);
        cout<<"YES! you have " << amount << " QR left"<<endl; 
        }
        else if(money<(249.99*people))
        {
        amount=(249.99*people-money);
        cout<<"NOT enough money! you need " <<amount<< " QR "<<endl; 
        }

    }
    if(people>=50 )
    {
       money=budget-(budget*0.25); 
       if(money>=(249.99*people))
        {
         amount=money-(249.99*people);
        cout<<"YES! you have " << amount << " QR left"<<endl; 
        }
        else if(money<(249.99*people))
        {
        amount=(249.99*people-money);
        cout<<"NOT enough money! you need " <<amount<< " QR "<<endl; 
        }

    }

 }
}