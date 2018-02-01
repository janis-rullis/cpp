#include <iostream>
using namespace std;
int main()
{
    struct elem
    {
           int dati;
           elem *next;
    };
    elem *p='\0';
    cout<<&*p<<endl;
    p=new elem;
    p->dati=9;
    p->next='\0';
    cout<<&*p<<endl;
    cout<<p->dati<<endl;
    system("pause");
    return 0;
}
