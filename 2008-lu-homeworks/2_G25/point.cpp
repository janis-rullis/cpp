#include <iostream>
using namespace std;
int main()
{
    struct elem
    {
           int dati;
           elem *next;
    };
    elem *p, *q;
    int *r, *s;
    p=new elem;
    p->next='\0';
    p->dati=1;
    q=p;
    r=(int*)&*q;
    cout<<"r = "<<*r<<endl;
    p->next=new elem;
    p->next->dati=2;
    p->next->next='\0';
    s=(int*)&p->next->dati;
    cout<<"s = "<<*s<<endl;
    p=q;
    q=p->next;
    delete p;
    p='\0';
    delete q;
    cout<<"r = "<<*r<<endl;
    cout<<"s = "<<*s<<endl;
    q=p;
    r=(int*)&*q;
  //  if(q=='\0')    cout<<"q,p = "<<*r<<endl;   <--- nokauj progu jo izdruka pointera adresi uz melno caurumu
  //                            TAS NOZIME KA VISI LAUKI IR IZDZESTI!!!
    
    system("pause");
    return 0;
}
    
