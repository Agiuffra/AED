#include <iostream>

using namespace std;

// int main(){ clase 1 AED
    // int v = 5;
    // int* p = &v; // Inicializando un puntero apuntando la dirección de variable "v" 
    // int** p2 = &p; // Puntero apuntando a otro puntero (almacena la dirección del puntero que almacena la dirección de "v")
    // int* p3 = p; // p3 --> p; p --> v
    // cout << v << endl; // 5
    // cout << p << endl; // Dirección de memoria RAM
    // cout << sizeof(p) << endl;
    // cout << *p2 << endl; // Utilizamos * para ver a lo que apunta (contenido)
    // cout << sizeof(p2) << endl;
    // p2 --> p --> v
// }

//  clase 2 AED
int main(){

    int arr[5] = {1,2,4,8,16};
    int *p = arr;

    cout << arr[0] << endl;
    cout << arr << endl;
    cout << *arr << endl;   // arr no puede usar *++ porque es un arreglo, se comporta como puntero para algunas operaciones
    cout << *(arr+12) << endl; // *p++
    cout << p << endl;  // ++p asigna antes de usarlo, p++ asigna después de usarlo.
    cout << *++p << endl;
    cout << *p++ << endl;    //  suma 4 bits de memoria
    cout << *p << endl;

    return 0;
}