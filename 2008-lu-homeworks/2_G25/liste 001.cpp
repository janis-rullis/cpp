#include <iostream>
using namespace std;
int main()
{
    struct elem
    {
           int dati;
           elem *next;
    };
    elem *p,*z, *q, *r, *e, *f;
    int a, *b, *c, sk=1;
    p=new elem;
    p->next='\0';
    cin>>a;
    p->dati=a;
    q=p;
    b=(int*)&*q;
    cout<<"b = "<<*b<<endl;
    cin>>a;
    while(a!=666)   //izveido
    {
                  p->next=new elem;
                  p=p->next;
                  p->next='\0';
                  p->dati=a;                                    
                  cin>>a;    
    }
     z=p;         //piemet klat
     r=new elem;
     r->next='\0';
     r->dati=123;
     z->next=r;
     z=r;      //jaunas beigas
     c=(int*)&*z;
     cout<<"c = "<<*c<<endl;
     p=q;
    while(p)   //druka
    {
                  cout<<p->dati<<endl;
                  p=p->next;
    }
     p=q;     
    e=new elem;             //nokope sarakstu
    e->next='\0';
    e->dati=p->dati;
    f=e;
    p=p->next;
    while(p)
    {
           
           e->next=new elem;
           e=e->next;
           e->next='\0';
           e->dati=p->dati;
           p=p->next;
    }
    cout<<"2.saraksts---------------"<<endl;
    e=f;
    while(e)   //druka
    {
                  cout<<e->dati<<endl;
                  e=e->next;
    }
    p=q;
    while(p!='\0')                    //dzes. darbojas ok
    {
            p=q->next;
            delete q;
            q=p;
    }
    z='\0';
    cout<<"b = "<<*b<<endl;
    cout<<"c = "<<*c<<endl;
    system("pause");
    return 0;
}
