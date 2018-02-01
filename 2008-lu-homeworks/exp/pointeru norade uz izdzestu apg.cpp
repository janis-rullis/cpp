/*
Pieradijums tam ka ja divi pointeri norada uz vienu atm apg
tad izdzesot viena pointera noradita atm apg saturs tad tiek izdzests ari otra
un pec dzesanas otrs norada uz atm apg bez satura.
*/


#include <iostream>
using namespace std;
int main()
{
    struct elem{
           int dati;
           elem *next;
           };
           elem *p,*q,*r,*s,*t,*u; 
           int *a,*b,*c;
           p=new elem;
           p->dati=1;
           p->next=NULL;
           cout<<p->dati<<endl;
           q=p;
           a=(int*)&*q;  
           cout<<"a = "<<*a<<endl;       
           r=new elem;
           p->next=r;
           r->dati=2;
           cout<<r->dati<<endl;
           r->next=NULL;
           s=r;
           b=(int*)&*s;  
           cout<<"b = "<<*b<<endl;
           t=new elem;
           r->next=t;
           t->dati=3;
           cout<<t->dati<<endl;
           t->next=NULL;
           u=t;
           c=(int*)&*u;  
           cout<<"c = "<<*c<<endl;
           delete p;
           delete r;
           delete t;
           cout<<"\na = "<<*a<<endl;  
           cout<<"b = "<<*b<<endl;  
           cout<<"c = "<<*c<<endl;  
           
           system("pause");
           return 0;
     }
