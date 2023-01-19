#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODO{
	char nombre[40];
	int filled;
	char nacionalidad[40];
	char medalla[40];
	struct NODO *padre, *izq, *der;
}Nodo;

typedef struct{
	struct NODO *raiz;
}Arbol;

Nodo* crearRaiz();
Nodo* crearNodo(Nodo*);
void initArbol(Arbol*);
void mostrarNodo(Nodo*);
void mostrarArbolDesdeNodo(Nodo*);
void buscarEnArbor(Nodo*,char*);
void insertarEnArbor(Nodo*,char*,char*,char*);
int mostrarPorPais(Nodo* ,char* );



void main(){
	int ex=0,opcion,flag=1,puntos=0;

	Nodo *bronce,*plata,*oro;
	bronce = crearRaiz();
	plata = crearRaiz();
	oro = crearRaiz();

	insertarEnArbor(bronce,"Alfredo","Chileno","Bronce");
	insertarEnArbor(oro,"Anna","Italiano","Oro");
	insertarEnArbor(plata,"Antonio","Chileno","Plata");
	insertarEnArbor(bronce,"Areli","Irlandes","Bronce");
	insertarEnArbor(oro,"Castor","Peruano","Oro");
	insertarEnArbor(plata,"Cesar","Rusa","Plata");
	insertarEnArbor(plata,"Cristopher","Peruano","Plata");
	insertarEnArbor(plata,"Davey","Rusa","Plata");
	insertarEnArbor(oro,"David","Mexicana","Oro");
	insertarEnArbor(bronce,"Diego","Mexicana","Bronce");
	insertarEnArbor(plata,"Dilan","Mexicana","Plata");
	insertarEnArbor(plata,"Dimitri","Italiano","Plata");
	insertarEnArbor(bronce,"Doni","Peruano","Bronce");
	insertarEnArbor(bronce,"Edgar","Peruano","Bronce");
	insertarEnArbor(bronce,"Emily","Frances","Bronce");
	insertarEnArbor(bronce,"Enrique","Frances","Bronce");
	insertarEnArbor(bronce,"Fernando","Peruano","Bronce");
	insertarEnArbor(plata,"Gilberto","Irlandes","Plata");
	insertarEnArbor(bronce,"Giovany","Rusa","Bronce");
	insertarEnArbor(bronce,"Gris","Chileno","Bronce");
	insertarEnArbor(oro,"Helena","Irlandes","Oro");
	insertarEnArbor(bronce,"Henry","Irlandes","Bronce");
	insertarEnArbor(bronce,"Ivan","Frances","Bronce");
	insertarEnArbor(plata,"Jena","Chileno","Plata");
	insertarEnArbor(oro,"Jeniffer","Peruano","Oro");
	insertarEnArbor(bronce,"Jonas","Italiano","Bronce");
	insertarEnArbor(bronce,"Luigi","Italiano","Bronce");
	insertarEnArbor(bronce,"Luis","Rusa","Bronce");
	insertarEnArbor(bronce,"Luz","Mexicana","Bronce");
	insertarEnArbor(bronce,"Margaret","Mexicana","Bronce");
	insertarEnArbor(oro,"Margarita","Frances","Oro");
	insertarEnArbor(plata,"Maria","Irlandes","Plata");
	insertarEnArbor(bronce,"Maria","Rusa","Bronce");
	insertarEnArbor(oro,"Mariano","Rusa","Oro");
	insertarEnArbor(bronce,"Mario","Frances","Bronce");
	insertarEnArbor(oro,"Marta","Mexicana","Oro");
	insertarEnArbor(oro,"Nadia","Rusa","Oro");
	insertarEnArbor(plata,"Nora","Mexicana","Plata");
	insertarEnArbor(oro,"Pedro","Frances","Oro");
	insertarEnArbor(bronce,"Peter","Irlandes","Bronce");
	insertarEnArbor(bronce,"Rene","Italiano","Bronce");
	insertarEnArbor(bronce,"Ricardo","Chileno","Bronce");
	insertarEnArbor(bronce,"Roberto","Mexicana","Bronce");
	insertarEnArbor(plata,"Robin","Peruano","Plata");
	insertarEnArbor(plata,"Rosa","Frances","Plata");
	insertarEnArbor(plata,"Ruben","Italiano","Plata");
	insertarEnArbor(oro,"Sandra","Chileno","Oro");
	insertarEnArbor(oro,"Saul","Italiano","Oro");
	insertarEnArbor(oro,"Teresa","Irlandes","Oro");
	insertarEnArbor(oro,"Vladimir","Chileno","Oro");


	




    printf("Bienvenido al simulador de estructura de nombres \"Arbol Binario\".\n¿Que deseas realizar?\n");   
    do{
		puntos=0;
		printf("1.-Mostrar Bronce\n");
    	printf("2.-Mostrar Plata\n");
		printf("3.-Mostrar Oro\n");
		printf("4.-Mostrar Atletas de Mexico\n");
		printf("5.-Mostrar Atletas de Francia\n");
		printf("6.-Mostrar Atletas de Rusia\n");
		printf("7.-Mostrar Atletas de Italia\n");
		printf("8.-Mostrar Atletas de Chile\n");
		printf("9.-Mostrar Atletas de Peru\n");
		printf("10.-Mostrar Atletas de Irlanda\n");
		printf("11.-Salir\n");
		scanf("%d",&opcion);
    		switch(opcion){
			case 1:
            	printf("BRONCE\n\n");
				mostrarArbolDesdeNodo(bronce);
        	break;
			case 2:
            	printf("PLATA\n\n");
				mostrarArbolDesdeNodo(plata);
        	break;
			case 3:
            	printf("ORO\n\n");
				mostrarArbolDesdeNodo(oro);
        	break;	
			case 4:
            	printf("Mexico\n\n");
				puntos = mostrarPorPais(oro,"Mexicana")+puntos;
				puntos = mostrarPorPais(plata,"Mexicana")+puntos;
				puntos = mostrarPorPais(bronce,"Mexicana")+puntos;
				printf("Puntos de Mexico: %d\n",puntos);
        	break;		
			case 5:
            	printf("Francia\n\n");
				puntos = mostrarPorPais(oro,"Frances")+puntos;
				puntos = mostrarPorPais(plata,"Frances")+puntos;
				puntos = mostrarPorPais(bronce,"Frances")+puntos;
				printf("Puntos de Francia: %d\n",puntos);
        	break;
			case 6:
            	printf("Rusia\n\n");
				puntos = mostrarPorPais(oro,"Rusa")+puntos;
				puntos = mostrarPorPais(plata,"Rusa")+puntos;
				puntos = mostrarPorPais(bronce,"Rusa")+puntos;
				printf("Puntos de Rusia: %d\n",puntos);
        	break;
			case 7:
            	printf("Italia\n\n");
				puntos = mostrarPorPais(oro,"Italiano")+puntos;
				puntos = mostrarPorPais(plata,"Italiano")+puntos;
				puntos = mostrarPorPais(bronce,"Italiano")+puntos;
				printf("Puntos de Italia: %d\n",puntos);
        	break;	
			case 8:
            	printf("Chile\n\n");
				puntos = mostrarPorPais(oro,"Chileno")+puntos;
				puntos = mostrarPorPais(plata,"Chileno")+puntos;
				puntos = mostrarPorPais(bronce,"Chileno")+puntos;
				printf("Puntos de Chile: %d\n",puntos);
        	break;	
			case 9:
            	printf("Peru\n\n");
				puntos = mostrarPorPais(oro,"Peruano")+puntos;
				puntos = mostrarPorPais(plata,"Peruano")+puntos;
				puntos = mostrarPorPais(bronce,"Peruano")+puntos;
				printf("Puntos de Peru: %d\n",puntos);
        	break;	
			case 10:
            	printf("Irlanda\n\n");
				puntos = mostrarPorPais(oro,"Irlandes")+puntos;
				puntos = mostrarPorPais(plata,"Irlandes")+puntos;
				puntos = mostrarPorPais(bronce,"Irlandes")+puntos;
				printf("Puntos de Irlanda: %d\n",puntos);
        	break;				
        	default:
        	    ex=1;
        	break;
    		}
	}
	while (ex==0);
}

Nodo* crearNodo(Nodo *Padre){
	Nodo *a;
	a=malloc(sizeof(Nodo));
	a->filled=0;
	a->padre=Padre;
	a->izq=NULL;
	a->der=NULL;
	return a;
}

Nodo* crearRaiz(){
	Nodo *a;
	a=malloc(sizeof(Nodo));
	a->filled=0;
	a->padre=NULL;
	a->izq=NULL;
	a->der=NULL;
	return a;
}

void initArbol(Arbol *arbol){
	arbol->raiz = NULL;
}

void mostrarNodo(Nodo *v){
	printf("Nodo %s Nacionalidad %s Medalla %s\n",v->nombre,v->nacionalidad,v->medalla );
	printf("-------------------------------------------------------------------------\n\n");
	if (v->padre!=NULL)
	{
		printf("Padre: %s Nacionalidad %s Medalla %s\n\n",v->padre->nombre,v->padre->nacionalidad );
	}
	else{
		printf("No hay padre\n");
	}
	if (v->der->filled==1)
	{
		printf("Derecha: %s Nacionalidad %s Medalla %s\n\n",v->der->nombre,v->der->nacionalidad );
	}
	else{
		printf("No hay derecha\n");
	}
	if (v->izq->filled==1)
	{
		printf("Izquierda: %s Nacionalidad %s Medalla %s\n\n",v->izq->nombre,v->izq->nacionalidad );
	}
	else{
		printf("No hay izquierda\n");
	}

	printf("-------------------------------------------------------------------------\n\n");
}

void mostrarArbolDesdeNodo(Nodo *v){
	mostrarNodo(v);
	
	if (v->izq->filled!=0)
	{
		mostrarArbolDesdeNodo(v->izq);
	}
	if (v->der->filled!=0)
	{
		mostrarArbolDesdeNodo(v->der);
	}
}

int mostrarPorPais(Nodo *v,char *pais){
	int total=0,zt=0,dt=0;
	//printf("Nodo %s Nacionalidad %s Medalla %s\n",v->nombre,v->nacionalidad,v->medalla );
	if (strcmp(pais,v->nacionalidad)==0)
	{
		printf("Nodo %s Nacionalidad %s Medalla %s\n",v->nombre,v->nacionalidad,v->medalla );
		if (strcmp("Oro",v->medalla)==0)
		{
			total=total+10;
		}
		if (strcmp("Bronce",v->medalla)==0)
		{
			total=total+2;
		}
		if (strcmp("Plata",v->medalla)==0)
		{
			total=total+5;
		}
	}
	
	if (v->izq->filled!=0)
	{
		zt = mostrarPorPais(v->izq,pais);
	}
	if (v->der->filled!=0)
	{
		dt = mostrarPorPais(v->der,pais);
	}
	return (total+zt+dt);
}

void buscarEnArbor(Nodo *v,char* b){
	printf("Nodo %d \n",v->nombre);
	if (v->nombre!=b)
	{
		if (v->izq->filled!=0)
		{
			printf("Izquierda: ");
			buscarEnArbor(v->izq,b);
		}
		else{
			printf("No hay izquierda.\n");
		}
		if (v->der->filled!=0)
		{
			printf("Derecha: ");
			buscarEnArbor(v->der,b);
		}
		else{
		printf("No hay derecha.\n");
		}
	}
	else{
		printf("Se hallo el nombre.\n");
	}
}

void insertarEnArbor(Nodo *v,char* b,char* n,char* m){
	printf("Nodo %d \n",v->nombre);

	if (v->filled==0)
	{
		v->filled=1;
		strcpy(v->nombre,b);
		strcpy(v->nacionalidad,n);
		strcpy(v->medalla,m);
		v->izq = crearNodo(v);
		v->der = crearNodo(v);
	}
	else{
		if (strcmp(v->nombre,b)<0)
		{
			printf("Izquierda: ");
			insertarEnArbor(v->izq,b,n,m);
		}
		if (strcmp(v->nombre,b)>0)
		{
			printf("Derecha: ");
			insertarEnArbor(v->der,b,n,m);
		}
	}		
}
