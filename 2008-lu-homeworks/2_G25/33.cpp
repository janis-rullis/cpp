#include <iostream>
using namespace std;
int main()
{
    struct elem
    {
           int dati;
           elem *next;
    };
    elem *p,*z, *q, *r;
    int a, *b, sk=1;
    p=new elem;
    p->next='\0';
    cin>>a;
    p->dati=a;
    q=p;
    cin>>a;
    while(a!=666)
    {
                  p->next=new elem;
                  p=p->next;
                  p->next='\0';
                  p->dati=a;                                    
                  cin>>a;    
    }
     
     z=p;
     r=new elem;
     r->next='\0';
     r->dati=111;
     z->next=r;
     p=q;
    while(p)
    {
                  cout<<p->dati<<endl;
                  p=p->next;
    }
    system("pause");
    return 0;
}
