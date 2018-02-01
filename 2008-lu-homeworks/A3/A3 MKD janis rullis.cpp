/* A3.
******************************************************
Atrast divu naturâlu skaitïu m un n mazâko kopîgo dalâmo.
******************************************************
Autors: Janis Rullis
Radits:  v.1.0.; 2008.09.18 10:37
Janis Rullis - pielikti komentâri, izveidots uzmetums
Mainits: v.1.2.; 2008.05.20 22:00
Janis Rullis -
 1) izmantoju LKD un MKD ipasibas
MKD-mazakais sk. kas dalas ar abiem dotajiem sk

LKD-lielakais kopigais sk kas dala dotos sk

*/

#include <iostream>
using namespace std;
int main()
{
    int n,m,atl,s1,s2,mkd,exit;
    do{
        cout<<"A3.\n";
        cout<<"Atrast divu naturalu skaitlu m un n mazako kopigo dalamo.\n";
        cout << "-----------------------"<<endl; 
        cout << "\n---- Ievadiet pirmo naturalo skaitli ----"<<endl;       
        cin>>n;
        while (!cin.good()||n<0)                                 //parbauda ievaditaa mainiga atbilstibu
           {
            cin.clear ();
            cin.ignore (256, '\n');
            cout << "\n---- Ievadiet naturalu skaitli ----"<<endl;
            cin >> n;
           };
        cout << "\n---- Ievadiet otro naturalo skaitli ----"<<endl;         
        cin>>m;
        while (!cin.good()||m<0)
            {
             cin.clear ();
             cin.ignore (256, '\n');
             cout << "\n---- Ievadiet naturalu skaitli ----"<<endl;
             cin >> m;
            };     
        s1=n;       //sagalaba sakotnejas vertibas
        s2=m;
        if(n==0 || m==0) 
        {
                cout << "-----------------------"<<endl;
                cout<<"Nedrikst dalit ar nulli"<<endl;
        }
        else
        {
                if(n>m)
                {
                       do{
                            atl=n%m;
                            n=m;
                            m=atl;
                         }while(atl!=0);  //lkd ir pedejais nenulles atl. vertibas glabajas n;
                         cout << "-----------------------"<<endl; 
                         mkd=(s1*s2)/n;  //MKD iegust sareizinot sakotnejas vert ar LKD
                         cout<<"MKD="<<mkd<<endl;
                 }
                 else
                 {
                     do{
                            atl=m%n;
                            m=n;
                            n=atl;
                         }while(atl!=0);  //lkd ir pedejais nenulles atl. vertibas glabajas m;
                         mkd=(s1*s2)/m;
                         cout << "-----------------------"<<endl; 
                         cout<<"MKD="<<mkd<<endl;     
                 };
          };
         cout<<"\nLai izietu no programmas, ievadiet 0"<<endl;
         cin>>exit;
          cout << "...................................................."<<endl;
          cout<<endl;
         
                     
      }while(exit != 0);
system ("pause");
return 0;

}
        
