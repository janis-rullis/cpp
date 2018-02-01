#include <iostream>
using namespace std;
int main()
{
    struct elem
    {
           int dati;
           elem *next;
    };
    
    cout<<"ievadiet skaitlus. lai beigtu ievadi, ievadiet punktu"<<endl;
    elem *p;
    int sk=1,a;
    p=new elem;
    a=p->dati;
    p->next=NULL;
    while(sk<4)
    {
               cout<<sk<<".|";
                cin>>a;
                if(a=='\n')     cout<<"|";         
                p->next=new elem;
                p=p->next;
                p->next=NULL;
                sk++;
    }
    delete p;
system("pause");
return 0;
}
           
