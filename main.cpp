#include <iostream>

using namespace std;

int main(){
    int v = 5;
    int* p = &v; // Inicializando un puntero apuntando la dirección de variable "v" 
    int** p2 = &p; // Puntero apuntando a otro puntero (almacena la dirección del puntero que almacena la dirección de "v")
    int* p3 = p; // p3 --> p; p --> v
    cout << v << endl; // 5
    cout << p << endl; // Dirección de memoria RAM
    cout << sizeof(p) << endl;
    cout << *p2 << endl; // Utilizamos * para ver a lo que apunta (contenido)
    cout << sizeof(p2) << endl;
    // p2 --> p --> v

    return 0;
}