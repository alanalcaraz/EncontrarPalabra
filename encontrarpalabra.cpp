#include <iostream>
#include <string>

using namespace std;

int encontrarPalabra(char palabra[], char nombre[], int posicion, int contador, int c);

int main() 
{
    char nombre[50];
    char palabra[30];
    int contador=0;
    int c=0;
    int posicion=0;
    cout<<"Introducir texto: ";
    cin.getline(nombre, 50, '\n');
    cout<<"Ingrese la palabra a buscar: ";
    cin.getline(palabra, 30, '\n');
    encontrarPalabra (palabra, nombre, posicion, contador, c);
}

int encontrarPalabra(char palabra[], char nombre[], int posicion, int contador, int c)
{
	for (int i=0; nombre[i]!='\0'; i++){
        if (palabra[0]==nombre[i]){
            posicion = i;
            for (contador=0; palabra[contador]!='\0'; contador++,i++) {
                if (palabra[contador]==nombre[i])
                c=-1;
                else
                    c=0;
            }
        if (c!=0)
           break;
        }
    }
    if (c!=0)
        cout<<"La palabra fue encontrada en la posicion "<<posicion+1;
    else
        cout<<"La palabra no fue encontrada";
}
