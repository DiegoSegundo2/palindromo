#include <stdio.h>
#include <stdlib.h> 
#include<string.h>

typedef struct pila{
	char dato;
	struct pila * siguiente;
}PILA;

PILA *tope = NULL;

PILA * obtenerNodo(){
	PILA *temp;
	temp=(PILA *)malloc(sizeof(PILA));
	temp->siguiente=NULL;
	return temp;
}

int esVacia(){
	if(tope==NULL) return 1;
	else return 0;
}

void push(char x){
	PILA *temp;
	temp=obtenerNodo();
	if(esVacia()){
		temp->siguiente=NULL;
		temp->dato=x;
		tope=temp;
	}else{
		temp->siguiente=tope;
		temp->dato=x;
		tope=temp;
	}
}

char pop(){
	PILA *temp;
	temp=obtenerNodo();
	char dato;
	tope=temp->siguiente;
	dato=temp->dato;
	return dato;
}

void palindromo(PILA *nodo, char *cadena){
	PILA *aux;
	aux=nodo;
	for(int i=0; i<sizeof(cadena); i++){
		if(cadena[i]==32)
		cadena.erase(i,1);
	}
	
	for(int i=0; i<sizeof(cadena); i++){
		push(cadena[i]);
	}
	
	for(int i=0; i<sizeof(cadena); i++){
		if(cadena[i]==aux->dato){
			pop();
		}ele{
			break;
		}
	}
	
	if(nodo==NULL) printf("\nLa frase es palindroma.");
	else printf("\nLa frase no es palindroma");
}

int main(){
	PILA *temp;
	temp=NULL;
	char *cadena;
	cadena=(char *)malloc(sizeof(char));
	
	printf("\nPALINDROMO");
	printf("\nIntroduce una frase: ");
	gets(cadena);
	
	palindromo(&temp, cadena);
	
	system("pause");
		
}










