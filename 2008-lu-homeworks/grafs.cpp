#include <iostream>
using namespace std;

struct edge;    //deklaracija
struct vertex   //virsotnu strukt
{
   vertex *nextVert;
   char info;
   edge *nextEdge;
};
struct edge     //skautnu realizac
{
   edge *nextEdge;
   vertex *endPoint;
}
;

int main()
{
    vertex *head;   //grafa sakuma norade
    vertex *p, *r;
    edge *e;
    
    head=new vertex;
    p=head;
    p->info='A';
    p->nextVert=new vertex;
    r=p->nextVert;
    r->info='B';
    p->nextEdge=new edge;
    p->nextEdge->endPoint=r;
    p->nextEdge->nextEdge=NULL;
    r->nextVert=new vertex;
    p=r->nextVert;
    p->info='C';
    p->nextVert=NULL;
    r->nextEdge=new edge;
    r->nextEdge->endPoint=p;
    r->nextEdge->nextEdge=NULL;
    p->nextEdge=new edge;
    p->nextEdge->endPoint=r;
    e=p->nextEdge;
    e->nextEdge=new edge;
    e=e->nextEdge;
    e->endPoint=head;
    e->nextEdge=NULL;
    
    p=r=head;        /*nostada uz sakumu
    p iet pa skautnem, e pa virsotnem 
    e=p->nextEdge;    
    cout<<head->info<<";"<<endl;
    cout<<e->endPoint->info<<";"<<endl;    */
        
    while(p!=NULL)
    {
       cout<<p->info;
       e=p->nextEdge;
       while(e!=NULL)
       {
                     if(e->endPoint!=NULL)
                     {
                        cout<<"->"<<e->endPoint->info;
                     }
                     e=e->nextEdge;
       }
       p=p->nextVert;
       cout<<endl;
    }
    
    
    system("pause");
    return 0;
}

