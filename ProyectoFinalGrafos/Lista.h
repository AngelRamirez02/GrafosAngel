#include<iostream> 
using namespace std; 

class nodoa {
public:
int ady;
int peso; 
nodoa *siguiente;

//constructor
nodoa(int v, int p, nodoa *sig = NULL) {
	ady = v;
	peso =p;
	siguiente =sig;
	}
	class listaa;
};

typedef nodoa *pnodoa;

class listaa{
	public: 
	pnodoa primero;
	//constructor
	listaa(){primero = NULL;}
	//metodos
	void Insertar(int v);
	//void Borrara(int v);
	bool ListaVacia();
	void Mostrara();
	//pnodo Buscara(int v);
	//void BorrarListaa();
};

