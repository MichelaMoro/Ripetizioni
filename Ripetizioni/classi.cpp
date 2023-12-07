#include <iostream>
#include <string>
using namespace std; 

class Studente
{
private:
    /* data */
public:
string nome; 
string cognome; 
float costo; 
int telefono; 
int priorita; 
int ore_sospese; 
int pagamento_dovuto;

    Studente(string nome, string cognome, float costo, int telefono, int priorita, int ore_sospese,int pagamento_dovuto)
    {
this->nome=nome;
this->cognome=cognome; 
this->costo=costo; 
this->telefono=telefono; 
this->priorita=priorita;
this->ore_sospese=ore_sospese; 
this->pagamento_dovuto=pagamento_dovuto; 

    };

    Studente(string nome, string cognome, float costo, int telefono, int ore_sospese,int pagamento_dovuto)
    {
this->nome=nome;
this->cognome=cognome; 
this->costo=costo; 
this->telefono=telefono; 
this->ore_sospese=ore_sospese; 
this->pagamento_dovuto=pagamento_dovuto; 

    }; /*overloading del costruttore, ora non ha priorità, LA FIRMA CAMBIA*/
    ~Studente();
    int pagamenti_sospesi(int s)
    {
   this->ore_sospese=this->ore_sospese+1; /*fa riferimento all'attributo e non a un avariabile che può avere lo stesso nome*/
    return ore_sospese;
    }
    int calcolo_pagamento(int ore, int pagamento ) /*possibile overload*/
    {
      this->pagamento_dovuto=this->pagamento_dovuto+(ore*pagamento);
      return pagamento_dovuto;
    }

    
};


Studente::~Studente()
{
}
