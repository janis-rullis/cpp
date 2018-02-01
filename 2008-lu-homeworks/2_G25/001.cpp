#include <iostream>
using namespace std;
struct elem
{
 int dati;
 elem *next;
};
int main()
{
 int a;
 do{
    elem *first=NULL, *first2=NULL, *last=NULL, *p=NULL, *q=NULL;
    
    cout<<"Lai beigtu ievadi, jaievada - 0!!!"<<endl;
    cout<<"Lai beigtu izveli, jaievada - 100!!!"<<endl;
    cin>>a;
    while(a!=0)       //saraksta izveidosana
    {
       p=new elem;
       p->next=NULL;
       p->dati=a;
       if(last==NULL) first=last=p;
       else
         last=last->next=p;
        cin>>a;
     }
    cout<<"1=izdruka, 2=papildinat, 3=kopet, 4=izdrukat kopiju 5=dzest"<<endl;
    cin>>a;    
    while(a!=100)
    {  
     cin>>a;       
        //cout<<"iziet=0"<<endl;
        //cin>>a;
        if(a==1)          //izdruka
        {
          cout<<"1=izdruka"<<endl;
          p=first;
          while(p!=NULL)
          {
            cout<<p->dati;
            p=p->next;
          }
          cout<<endl;
        }
        if(a==2)     //pievienosana
        {
          if(first==NULL) cout<<"tukss"<<endl;
          else 
          {
               cout<<"pievienosana"<<endl;
               cin>>a;
               while(a!=0)
               {
                 p=new elem;
                 p->next=NULL;
                 p->dati=a;
                 last->next=p;
                 last=last->next;
                 cin>>a;
               }
           }
         }
         if(a==3)        //kopijas izveide
         {
           if(first==NULL) cout<<"tukss"<<endl;
           else
           {
              cout<<"kopijas izveide"<<endl;
              p=first;
              while(p!=NULL)
              {
                q=new elem;
                q->next=NULL;
                q->dati=p->dati;
                if(first2==NULL) {first2=q;}
                q=q->next;
                p=p->next;
              }
           }
         }
         if(a==4)
         {
           cout<<"kopijas izdruka"<<endl;
           if(first2==NULL) cout<<"tukss"<<endl;
           q=first2;
           while(q!=NULL)
           {
             cout<<"q = "<<q->dati<<endl;
             q=q->next;
           }
         }
         if(a==5)
         {
             cout<<"izdes p"<<endl;
             p=first->next;
             while(p!=NULL)
             {
               delete first;
               first=p;
               p=p->next;
             }
             cout<<"izdes q"<<endl;
             q=first2->next;
             while(q!=NULL)
             {
               delete first2;
               first2=q;
               q=q->next;
             }
         }   //if
       }      //while
    }while(a!=0);       //do while
system("pause");
return 0;
}

