#include <bits/stdc++.h>
using namespace std;

/*
 * Héctor Hernández Arieta
 * 21 octubre 2021
 * Operaciones básicas con árboles binarios
 * Avance 2
 */


struct nodo{
    int dato;
    nodo *hijoIzq;
    nodo *hijoDer;
};
nodo *raiz= nullptr;
int contadorHojas=0;


void insertar(nodo *r, nodo *q){
    if (raiz== nullptr){raiz=q;}
    else if (q->dato < r->dato){
        if(r->hijoIzq== nullptr) r->hijoIzq=q;
        else insertar (r->hijoIzq, q);
    }
    else if(q->dato > r->dato){
        if(r->hijoDer== nullptr) r->hijoDer=q;
        else insertar (r->hijoDer, q);
    }
}
void construyearbol(){
    nodo *q;
    int n;

    do{
        cin>>n;
        if(n>0){
            q= new nodo;
            q->dato=n;
            q->hijoIzq= nullptr;
            q->hijoDer= nullptr;
            insertar(raiz, q);
        }
    }while(n>0);

}

//izquierda-raiz-derecha
void inorden(nodo *p){
    if (p== nullptr) return;

    inorden(p->hijoIzq);
    cout<<p->dato<< "  ";
    inorden(p->hijoDer);
}

//raiz-izquierda-derecha
void preorden(nodo *p){
    if (p== nullptr) return;
    cout<<p->dato<< "  ";
    preorden(p->hijoIzq);
    preorden(p->hijoDer);
}

//izquierda-derecha-raiz
void posorden(nodo *p){
    if (p== nullptr) return;
    posorden(p->hijoIzq);
    posorden(p->hijoDer);
    cout<<p->dato<< "  ";
}

int alturaArbol(nodo *p){
    if(p== nullptr) return 0;
    return 1+ max(alturaArbol(p->hijoIzq), alturaArbol(p->hijoDer));
}

//basado en método posorden
void contarHojas(nodo *p){
    if(p== nullptr)return;
    contarHojas(p->hijoIzq);
    contarHojas(p->hijoDer);
    if(p->hijoIzq == nullptr && p->hijoDer == nullptr){
        contadorHojas++;
    }
}

void recorrerNivel(nodo *p){
    queue<nodo *> cola;

    if(p!= nullptr){
        cola.push(p);
        while (!cola.empty()){
            p=cola.front();
            cola.pop();
            cout << p->dato << " ";
            if(p->hijoIzq != nullptr) cola.push(p->hijoIzq);
            if(p->hijoDer != nullptr) cola.push(p->hijoDer);
        }
    }
}

void menu(){
    cout<<"Arboles binarios\n";
    cout<<"1. Recorrido preorden \n";
    cout<<"2. Recorrido inorden \n";
    cout<<"3. Recorrido posorden \n";
    cout<<"4. Altura del arbol \n";
    cout<<"5. Numero de Hojas \n";
    cout<<"6. Recorrido por nivel \n";
    cout<<"7. salir \n";
}
int main()
{
    construyearbol();
    menu();
    int opcion, altura, hoja;
    do{
        cout<<"\nOpción";
        cin >>opcion;
        switch(opcion){
            case 1:preorden(raiz);break;
            case 2:inorden(raiz);break;
            case 3:posorden(raiz);break;
            case 4:
                altura = alturaArbol(raiz);
                alturaArbol(raiz);
                cout << "Altura del árbol: " << altura << endl;
                break;
            case 5:
                contarHojas(raiz);
                cout << contadorHojas << " ";
                break;
            case 6:
                recorrerNivel(raiz);
                break;
            default: break;
        }
    }while(opcion!=7);
    return 0;
}