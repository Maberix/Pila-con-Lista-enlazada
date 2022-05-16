#include <iostream>

using namespace std;

//Lista enlazada
class Nodo {
	//Atributos
	int dato; //char, float, string, objeto
	Nodo* enlace;//puntero..
public:
	//Constructor - inicializar los atributos
	Nodo(int dato)
	{
		this->dato = dato;
		enlace = NULL;//por que no apuntamos a ningun nodo
	}
	//getter and setter
	int getDato()
	{
		return dato;
	}
	void setDato(int dato)
	{
		this->dato = dato;
	}
	Nodo* getEnlace()
	{
		return this->enlace;
	}
	void setEnlace(Nodo* enlace)
	{
		this->enlace = enlace;
	}
	void imprimir()
	{
		cout << "/-------------------\\" << endl;
		cout << "|Dato: " << dato << endl;
		cout << "|-------------------" << endl;
		cout << "|Enlace: " << enlace << endl;
		cout << "\\------------------/" << endl;
	}
};

class Lista {
	Nodo* inicio;
public:
	Lista()
	{
		this->inicio = NULL;
	}
	void InsertarAlFinal(int dato)
	{
		Nodo* temp = new Nodo(dato);
		if (EstaVacia())//lista vacia
		{
			inicio = temp;
		}
		else
		{
			Nodo* recorrido = this->inicio;
			while (recorrido->getEnlace() != NULL)
			{
				recorrido = recorrido->getEnlace();
			}
			recorrido->setEnlace(temp);
		}
	}
	void InsertarAlInicio(int dato)
	{
		Nodo* temp = new Nodo(dato);
		if (EstaVacia())//lista vacia
		{
			inicio = temp;
		}
		else
		{
			Nodo* recorrido = this->inicio;
			this->inicio = temp;
			this->inicio->setEnlace(recorrido);
		}
	}
	void Imprimir()
	{
		int i = 1;
		Nodo* recorrido = inicio;
		cout << "Lista enlazada****************************" << endl;
		while (recorrido != NULL)
		{
			cout << "---> Nodo " << i++ << endl;
			recorrido->imprimir();
			recorrido = recorrido->getEnlace();
		}
		cout << "****************************" << endl << endl;
	}
	void ImprimirEnLinea()
	{
		Nodo* recorrido = inicio;
		cout << "Lista enlazada****************************" << endl;
		while (recorrido != NULL)
		{
			cout << recorrido->getDato() << "\t";
			recorrido = recorrido->getEnlace();
		}
		cout << "****************************" << endl << endl;
	}
	void Vaciar()
	{
		inicio = NULL;
	}
	bool EstaVacia()
	{
		if (inicio == NULL)
			return true;
		else
			return false;
	}
	//Implementar la eliminación de un nodo inicio
};
//PILA
class Pila
{
	//atributos
	int dato;

public:
	//constructor
	Pila()
	{

	}
	//métodos
	//Pila llena
	bool PilaLlena()
	{
		if (dato == dato)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	//Pila vacia
	bool PilaVacia()
	{
		if (dato == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	//Insertar elemento
	void Insertar(int elemento)//Push
	{
		if (PilaLlena())
		{
			cout << "La pila esta llena." << endl;
		}
		else
		{
			Nodo* recorrido = this->dato;
			recorrido->imprimir(); = elemento;
			dato = dato + 1;
		}
	}
	/// Quitar elemento
	int Quitar() // Pop
	{
		if (PilaVacia())
		{
			cout << "No hay en elementos en la pila" << endl;
			return NULL;
		}
		else
		{
			Nodo* recorrido = this->dato;
			dato = dato - 1;
			return recorrido->imprimir();
		}
	}
	//Imprimir
	void Imprimir()
	{
		for (int i = dato - 1; i >= 0; i--)
		{
			cout << "|\t" << imprimir(); << "|" << endl;
			cout << "-----------" << endl;
		}
	}
};

void Menu()
{
	cout << "1) Insertar elemento " << endl;
	cout << "2) Quitar elemento " << endl;
	cout << "3) Imprimir pila " << endl;
	cout << "0) Salir " << endl;
}

int main()
{
	int opcion = 0;
	int elemento = 0;
	Pila pila = Pila();
	do
	{
		Menu();
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			cout << "Ingrese el elemento" << endl;
			cin >> elemento;
			pila.Insertar(elemento);
			break;
		case 2:
			elemento = pila.Quitar();
			cout << "El elemento quitado es: " << pila.Quitar() << endl;
			break;
		case 3:
			pila.Imprimir();
			break;
		default:
			cout << "opción no valida" << endl;
			break;
		}
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	} while (opcion != 0);
}