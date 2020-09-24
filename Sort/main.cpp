#include <iostream>
#include <random>
#include "tester.h"
using namespace  std;

void heapify(double* array, int n, int i){ 
    int largest = i; //seleccionamos al número máximo
    int l = 2 * i + 1; //izquierda
    int r = 2 * i + 2; //derecha 
    if (l < n && array[l] > array[largest])
        largest = l;
    if (r < n && array[r] > array[largest])
        largest = r;
    if (largest != i)
    {
        swap(array[i], array[largest]); 
        heapify(array, n, largest);
    }

}

void sort(double* array, int n){
    for (int i = n/2 - 1; i>=0; i--) //esto pondra al elemento máximo en la posición 0
        heapify(array, n, i);
    for (int i = n-1; i>=0; i--)
    {
        swap(array[0], array[i]);           //intercambiara el num maximo con el indice maximo del array
        heapify(array, i, 0);           //asegura el heap en los elementos restantes
    }
}

void generateRandom(double* array, int n){
    std::default_random_engine generator;
    std::normal_distribution<double> distribution(5.0,2.0);
    for (int i = 0; i < n; ++i) {
        array[i] = distribution(generator);
    }
}

int main() {
    double* array = new double[100];
    generateRandom(array, 100);
    sort(array, 100);
    ASSERT(isSorted<double>(array, 100), "The sort is not working");
    return 0;
}
