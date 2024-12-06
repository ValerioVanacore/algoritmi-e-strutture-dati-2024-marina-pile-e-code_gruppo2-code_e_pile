#include<iostream>
#include"ListaPuntatori.cpp"

template <typename T> 
class Coda {
    
private:


ListaPuntatori<T> elementi;
int ultimo = elementi.lunghezza();

public:
//aggiunge un elemento alla fine della coda
void eneque(T elem){
    elementi.inslista(elem, ultimo);
}

//rimuove, cancella e restituisce l'elemento all'inizio della coda
T dequeue(){
    T elem = elementi.leggilista(1);
    elementi.canclista(1);

    return elem;
}

//restituisce un elemento in testa alla coda senza rimuoverlo 
T front(){
return elementi.leggilista(1);
}

//restituisce "true" se la coda è vuota, altrimenti "false"
bool isEmpty(){
    if(elementi.listavuota() == true)
    return true;
} else {
    return false;
}
//restituisce il numero di elementi della coda
int size(){
    return elementi.lunghezza();
}

};
