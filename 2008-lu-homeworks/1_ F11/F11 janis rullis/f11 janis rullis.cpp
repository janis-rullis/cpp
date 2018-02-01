/* Jânis Rullis jr07023
*******************************************************
Izveidot programmu valodâ C++, kas apstrâdâ teksta failu secîgâ reþîmâ.
Dati no faila jânolasa pa vienam simbolam (nedrîkst nolasît uzreiz visu
failu vai veselu rindiòu). Citas prasîbas sk. Laboratorijas darbu 
noteikumos.
******************************************************
 F1. Doti divi teksta faili. Uzrakstît programmu, kura izveido 
 treðo failu sekojoði: otrais fails ir iesprausts aiz pirmâ faila 
 n-tâs rindiòas.
******************************************************
Autors: Janis Rullis
Radits:  v.1.0.; 2009.03.14 10:37 */
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   int x;
   do{
   char a;                             //simbols
   int sk=1,r;                         
   fstream vi;                          //1.txt ielases objekts
   fstream vo;                          //3.txt ierakst. obj.
   fstream din;                         //2.txt ielas.obj
   vi.open("1.txt", ios::in);   
   vo.open("3.txt",ios::out);
   din.open("2.txt",ios::in);
   cout<<"Pirmais fails\n"<<"-----"<<endl;
   vi.get(a);  
   cout<<sk<<" ";
   while(vi)                        //lasa 1.txt rindas
   {       
           cout<<a;                                               
           if(a=='\n')       
           {
            sk++; 
            cout<<sk<<" ";           // druka rindu nr.
           }
           vi.get(a);           
   }
   cout<<endl<<endl;
   cout<<"Otrais fails\n"<<"-----"<<endl;
   din.get(a);
   while(din)                        //lasa 2.txt rindas
   {         
           cout<<a;    
           din.get(a);
   }     
   din.clear();                               // atbloke
   din.close();                                   
   vi.clear();                               // atbloke
   vi.close(); 
   cout<<"\n\nAiz kuras pirma faila rindas ielikt 2.failu?"<<endl;
   cin>>r;                                   //ievadam rindu
   while((!cin.good())||(r<1)||(r>sk))
   {
       cin.clear();
       cin.ignore(256,'\n');
       cout<<"nepareizs skaitlis!"<<endl;
       cin>>r;
   }
   sk=0;
   cout<<endl;
   cout<<"Tresais fails\n"<<"-----\n";
   vi.open("1.txt", ios::in);
   vi.get(a);  
   while(vi&&(sk<r))                      //ielasa 1.txt->4.txt lidz r rindai
   {           
           vo.put(a);
           cout<<a;
           vi.get(a);
           if(a=='\n')    sk++;
   } 
   cout<<endl;
   vo.put('\n');
   din.open("2.txt",ios::in);
   din.get(a);
   while(din)                        //lasa 2.txt
   {           
           vo.put(a);
           cout<<a;
           din.get(a);           
   }
   cout<<endl;
   vo.put('\n');
   // izmainas kur aiz otra faila ieliek pirma faila atlikusos simb.
   vi.get(a);
   while(vi)
   {
            cout<<a;
            vo.put(a);
            vi.get(a);
   };
   cout<<endl;         
   din.close();
   vi.close();
   vo.close();
   cout<<"\nLai izietu no programmas, ievadiet 0"<<endl;
   cin>>x;
 }while(x!=0);
   system("Pause");
   return 0;
}
