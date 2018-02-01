#include <iostream>
using namespace std;
int main()
{
    struct elem
    {
           int dati;
           elem *next;
    };
    
    elem *p;    
    p=new elem;    
    p->dati=5;
    
    cout<<"---pointeru adresacija"<<endl<<endl;
    
    cout<<"p->dati  =  "<<&p->dati<<endl;
    cout<<"adrese uz ko norada pointers p  =  "<<&*p<<endl;
    cout<<"P pointera adrese  =  "<<&p<<endl<<endl;
    cout<<"secinajums"<<endl;
    cout<<endl;
    cout<<"pointeram ir sava adrese bet tas norada uz el.adresi"<<endl;
    cout<<endl;
    system("pause");
    return 0;
}
