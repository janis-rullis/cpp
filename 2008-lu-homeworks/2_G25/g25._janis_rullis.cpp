/* === G25 =======================================
Izveidot programmu valod� C++, kas �auj izveidot vienvirziena saist�to sarakstu 
(izmantojot dinamisk�s datu strukt�ras), kur� glab�jas veseli skait�i. 
J�b�t paredz�tai iesp�jai sarakstu papildin�t ar jaunu elementu (pielikt elementu saraksta gal�), 
izdruk�t sarakstu, izn�cin�t sarakstu. Bez tam j�uzraksta funkcija, kura aprakst�ta zem�k. 
Izn�cinot saraksta elementus, korekti j�atbr�vo izdal�t� atmi�a. Galvenaj� programm�:
a) j�b�t iesp�jai ievad�t saraksta elementus (izveidot patva��gu sarakstu),
b) j�pielieto uzrakst�t� funkcija sarakstam,
c) j�izdruk� saraksts p�c funkcijas darb�bas.
d) beig�s j�izn�cina saraksts (lietojot delete).
G25. Uzrakst�t funkciju, kas izveido saraksta kopiju (saglab�jot veco sarakstu).

Autors - J�nis Rullis
Radits - 20.04.09 

katramn objektam veidot savu klasi-
kopesanai
atblokesanai ut

*/


#include <iostream>
using namespace std;
struct elem
{
 int dati;
 elem *next;
};
class kop
{           
  elem *f2,*l2,*e,*r;
  public:   
  void kopija()                       //nonullee kopijas pointerus
  {
    f2=l2=e=r=NULL;                           
  }
  void kopijaD(elem* f,elem* l,elem* w)
  {
    cout<<"---------\n\nkopijas izveide\n==========";
    if(f==NULL) cout<<"\ntukss"<<endl;
    else
    {
      if(r==NULL)                   //sak no nulles
      {        
        w=f;
        while(w!=NULL)
        {
           e=new elem;
           e->next=NULL;
           e->dati=w->dati;
           if(f2==NULL)
           {
             f2=l2=e;
             w=w->next;
           }
           else 
           {
             l2->next=e;
             l2=e;
             w=w->next;
           }
        }                           //while
      }                             //if
      else                          //papildina
      {
      if(r->next!=NULL)             //parbauada vai ir pievienoti jauni
      {
         cout<<"---------\n\npapildina kopiju"<<endl<<"=========="<<endl;
         cout<<"papildinatie simboli: ";
         w=r->next;
         while(w!=NULL)
         {
            e=new elem;
            e->next=NULL;
            e->dati=w->dati;
            cout<<e->dati<<", ";
            l2->next=e;
            l2=e;
            w=w->next;
         }
      }
      else cout<<"---------\n\nkopijas izveide\n==========";
    }                                  //sakuma else            
    r=l;
    cout<<endl;
    print_k();                       
    }
  };                                 //metodes izveitot kopiju beugas 
  void print_k()
  {            
      if(f2==NULL) cout<<"tukss"<<endl;
      e=f2;
      while(e!=NULL)
      {
         cout<<e->dati;
         e=e->next;
      }
      cout<<endl;
  }
  elem del_k(elem* &f,elem* &l,elem* &w)
  {
     cout<<"---------\nDzesana"<<endl<<"=========="<<endl;
     if(f==NULL) cout<<"---------\n\nnevar izdzest sarakstu, jo tas nav izveidots"<<endl;
     else
     {
        cout<<"---------\n\nSaraksts izdzests"<<endl;
        w=f->next;
        while(w!=NULL)
        {
           delete f;
           f=w;
           w=w->next;
        }
        delete f;
        l=f=NULL;
     }                   
     
     if(f2==NULL) cout<<"nevar izdzest kopiju, jo ta  nav izveidota"<<endl;
     else
     {
        cout<<"Saraksta kopija izdzests"<<endl;
        e=f2->next;
        while(e!=NULL)
        {
           delete f2;
           f2=e;
           e=e->next;
        }
        delete f2;  
        l2=f2=r=NULL;
     }
  };                                 //metodes del_k beigas
  void atblok(void)
  {
     cin.clear();
     cin.ignore(256,'\n');
     cout<<"nepareizs skaitlis!"<<endl;    
  };
};                                  //klases kopija beigas
int main()
{
   kop k;
   k.kopija();      
   elem *first=NULL,*last=NULL, *p=NULL;
   int a=1;
   cout<<"G25"<<endl;
   do{
         if(a==1)
         {
            if(first!=NULL) cout<<"\n---------\nvispirms izdzesiet sarakstu"<<endl<<"=========="<<endl;
            else
            {
               cout<<"\n---------\nIevadiet veselus sk. lai beigtu ievadi, ievdadiet 0"<<endl<<"=========="<<endl;
               cin>>a;
               while(!cin.good())
               {                 
                  k.atblok();        
                  cin>>a;
               }             
               while(a!=0)       //saraksta izveidosana
               {
                  p=new elem;
                  p->next=NULL;
                  p->dati=a;
                  if(last==NULL) first=last=p;
                  else  last=last->next=p;
                  cin>>a;
                  while(!cin.good())
                  {                 
                     k.atblok();        
                     cin>>a;
                  }   
               }
               cout<<"---------\n\nIzvele\n==========\n1 = ievadit jaunu sarakstu\n2 = izdruka\n3 = papildinat\n4 = kopet\n5 = izdrukat kopiju\n6 = dzest\n7 = iziet"<<endl;
            }                    //else
         }                       //if 1
         cout<<"---------\n\nIzvele - ";        
         cin>>a;
         while(!cin.good()||(a<1)||(a>7))
         {                 
             k.atblok();        
             cin>>a;
         } 
         if(a==2)               //izdruka
         {
            cout<<"---------\n\nizdruka"<<endl<<"=========="<<endl;;
            if(first==NULL) cout<<"tukss"<<endl;
            else
            {
               p=first;
               while(p!=NULL)
              {
                 cout<<p->dati;
                 p=p->next;
              }         
            }
            cout<<endl;
         }                     //if 2
         if(a==3)              //pievienosana
         {
            cout<<"---------\n\npievienosana"<<endl<<"=========="<<endl;
            if(first==NULL) cout<<"tukss"<<endl;
            else 
            {             
              cin>>a;
              while(!cin.good())
              {                 
                 k.atblok();        
                 cin>>a;
              } 
              while(a!=0)
              {
                 p=new elem;
                 p->next=NULL;
                 p->dati=a;
                 last->next=p;
                 last=p;
                 cin>>a;
                 while(!cin.good())
                 {                 
                    k.atblok();        
                    cin>>a;
                 } 
               }              //while a!-0
            }                //else
         }                   //if 3
         if(a==4)           //kopijas izveide
            k.kopijaD(first,last,p);
         if(a==5)
         {
            cout<<"---------\n\nkopijas izdruka"<<endl<<"=========="<<endl;
            k.print_k();  
         }   
         if(a==6)
         k.del_k(first,last,p);
         if(a==7)           
         {
            k.del_k(first,last,p);
            a=8;
         }
   }while(a!=8);
   cout<<endl;
   system("pause");
   return 0;
}
