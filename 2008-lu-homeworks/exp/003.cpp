#include <iostream>
using namespace std;
int main()
{
    struct elem
    {
          int dati;          
          elem *next;
    };
    cout<<"ievadiet veselus skaitlus. Lai beigtu ievadi, ievadiet punktu"<<endl;
    elem *p=NULL, *s=NULL;
    int a, sk=1;
    p=new elem;    
    cout<<sk<<". |";
    cin>>a;
    p->dati=a;
    cout<<"|";
    while(a!='.')
    {
                 p->next=new elem;
                 p=p->next;
                 p->dati=a;
                 sk++;
                 p->next->next=NULL;
                 cout<<sk<<". |";
                 cin>>a;
                 cout<<"|"<<endl<<"vai a = p->dati";
                 cout<<p->dati<<endl;
    }
    system("pause");
    return 0;
}
