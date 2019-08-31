#include <iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *sig;
}*inicioP, *inicioC, *fin;

class Pila{
    public:
        Pila(){
            inicioP=nullptr;
        }
        Nodo* crearNodo(int valor){
            Nodo *n = new Nodo;
            n->dato = valor;
            n->sig = nullptr;
            return n;
        }
        void push(int valor){
            Nodo *n = crearNodo(valor);
            n->sig = inicioP;
            inicioP = n;
        }
        void pop(){
            Nodo *temp = inicioP;
            inicioP = inicioP->sig;
            free(temp);
        }
        void mostrarPila(){
            Nodo *temp = inicioP;
            if(!inicioP)
                cout << "Pila vacia" << endl;
            else
                while(temp){
                    cout << temp->dato << ",";
                    temp = temp->sig;
                }
        }

};

class Cola{
    public:
        Cola(){
            inicioC = nullptr;
        }
        
        Nodo* crearNodo(int valor){
            Nodo *n = new Nodo;
            n->dato = valor;
            n->sig = nullptr;
            return n;
        }
        void push(int valor){
            Nodo *n = crearNodo(valor);
            if(!inicioC){
                inicioC = n;
                fin = n;
            }
            else{
                fin->sig = n;
                fin = n;
            }
        }
        int pop(){
            Nodo *temp = inicioC;
            int aux;
            inicioC = inicioC->sig;
            aux = temp->dato;
            free(temp);
            return aux;
        }
        void mostrarCola(){
            Nodo *temp = inicioC;
            if(!inicioC)
                cout << "Cola vacia" << endl;
            else
                while(temp){
                    cout << temp->dato<<",";
                    temp = temp->sig;
                }
        }
        void invertirCola(){
            Pila p;
            int aux = 0;
            
            if(!inicioC){
                cout << "Apunto a nullptr"<< endl;
            }
            else{
                cout << "No estoy vacia"<< endl;
            }
            while(inicioC){
                p.push(pop());
                aux++;
            }
            mostrarCola();
            cout << endl;
            p.mostrarPila();
            
            cout << "Aux: " << aux << endl;

        }
    
};





int main()
{
    //Pila p;
    //p.push(1);
    //p.push(2);
    //p.push(3);
    //p.mostrarPila();
    //cout << endl;
    Cola c;
    c.push(1);
    c.push(2);
    c.push(3);
    c.mostrarCola();
    cout << endl;
    c.mostrarCola();
    cout << endl;
    c.invertirCola();
    
    cout << endl;
    return 0;
}
