#include <iostream>
using namespace std;
int main()
{
    struct elem
    {
           int dati;
           elem *next;
    };
    elem *p, *q, *z, *c;
    int a, *b;
    p=new elem;
    p->next='\0';    
    cin>>a;   //parbaude    
    p->dati=a;
    q=p;
    while(a!=666)
    {
                  p=p->next;
                  p=new elem;
                  p->next='\0';
                  p->dati=a;
                  cin>>a;    
    }
    z=p;
  //  cout<<z->dati<<endl;
    c=new elem;
    c->next='\0';
    c->dati=21;
    z->next=c;
    p=q;
    while(p!='\0')
    {
                  cout<<p->dati;
                  p=p->next;
    }
    p=z;
                 
 
      
    system("pause");
    return 0;
}
