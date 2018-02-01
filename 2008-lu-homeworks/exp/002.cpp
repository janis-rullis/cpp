#include <iostream>
using namespace std;
int main()
{
   //int a=5, b=2;
   //int *p, *q;
   struct elem{
          int dati;
          
          elem *next;
          };
          int *b;
          elem *p=new elem;
          p->dati=5;
          cout<<&*p<<endl;
          cout<<&p->dati<<endl;
          b=(int*)&*p;
          cout<<*b;
   
   
    system("pause");
    return 0;
}
