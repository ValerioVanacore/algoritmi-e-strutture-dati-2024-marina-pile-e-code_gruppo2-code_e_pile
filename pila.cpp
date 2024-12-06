#include<iostream>
#include"ListaPuntatori.cpp"

template <typename T> 
class Pila {
    private:
    ListaPuntatori<T>elementi;

    public:

 void push (T elem){
elementi.inslista(elem, 1);  //Inserisco l'elemento all'inizio della pila
    }

//Cancella l'elemento all'inizio della pila
T pop(){ 
T elem = elementi.leggilista(1);
elementi.canclista(1);

return elem; //Restituisce l'elemento, lo visualizza 
}

//Restituisce l’elemento all'inizio della pila senza rimuoverlo
T top(){
return elementi.leggilista(1);
}

//Confronta la pila, se è vuota restituisce "true" altrimenti "false"
bool isEmpty(){
    if (elementi.listavuota() == true){
return true;
    } else {
    return false;
}

//Restituisce il numero degli elementi nella pila
int size(){
    return elementi.lunghezza();
}
};
