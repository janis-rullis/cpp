/*********************************************************
 Saist?tais saraksts (linked list)
*********************************************************/
#include <iostream>
using namespace std;

struct elem
{
	int num;
	elem *next;
};

int main()
{
  elem *first=NULL, *p, *last;
  int k;
  cout << "Ievadi:\n";
  cin >> k;
  while (k>0)
  {
    p = new elem;
    p -> num = k;
    p -> next = NULL;
    if (first == NULL) first = last = p;
    else last = last -> next = p;
    cout << "Ievadi (0, lai beigtu):\n";
    cin >> k;
  };
  for (p=first; first!=NULL; p=first)
  {
    first = first -> next;
    cout << ":" << p->num << endl;
    delete p;
  };
  system ("PAUSE");
}
