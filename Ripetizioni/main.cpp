#include <iostream>
#include <string>
#include "classi.cpp"
using namespace std; 
int main()
{
    int p =5; 
Studente s("Mario","Rossi",45.5,45,p,5,5);
Studente m("no priorità","Rossi",455,45,5,5);
cout<< "Lo studente "<<s.nome<<" ha priorità "<< s.priorita;
return 0;
}