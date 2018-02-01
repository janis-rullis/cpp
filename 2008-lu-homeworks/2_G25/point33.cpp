#include <iostream>
using namespace std;
int main()
{
    struct elem
    {
           int dati;
           elem *next;
    };
    elem *p,*z, *c;
    int a, *b;
    cin>>a;
    while(a!=001)
    {
                  p=new elem;
                  p->next='\0';
                  p->dati=a;
                  cin>>a;
    
    }
    
    c=(elem*)&p->dati;
    cout<<c<<endl;
    z=new elem;
    z->next='\0';
    z->dati=99;
    c->next=z;
    cout<<c->next->dati<<endl;
 
      
    system("pause");
    return 0;
}
