#include <iostream>
using namespace std;
struct elem
{
 int dati;
 elem *next;
};
int main()
{
    elem *p=NULL, *first=NULL, *last=NULL;
    int a;
    cin>>a;
    while(a!=0)       //saraksta izveidosana
    {
       p=new elem;
       p->next=NULL;
       p->dati=a;
       if(first==NULL) first=last=p;
       else
       {
         last->next=p;
         last=last->next;
        }
        cin>>a;
     }
     system ("pause");
     return 0;
}
