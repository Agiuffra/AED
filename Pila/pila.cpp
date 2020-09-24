#include <iostream>
#include <exception>
using namespace std;

class Stack
{
private:
    int *array;
    int capacity;
    int size;

public:
    Stack(int _capacity)
    {
        this->array = new int[_capacity];
        this->capacity = _capacity;
        this->size = 0;
    }
    void push(int data)
    {
        this->array[this->size++] = data;
        if (this->size == this->capacity)
        {
            this->capacity = this->capacity * 1.5;
            int *temp = new int[this->capacity];
            for (int i = 0; i < size; i++)
            {
                temp[i] = array[i];
            }
            delete[] array;
            array = temp;
        }
    }
    int pop()
    {
        if (this->size > 0)
        {
            return array[--this->size];
            if (this->size == 0.25 * this->capacity)
            {
                //To Do: limpiar vacios (esporádicamente) (redimensionar)
                // this->capacity = 0.5 * this->capacity
            }
        }
        return 0;
    }
    void display()
    {
        for (int i = this->size - 1; i >= 0; i--)
        {
            cout << array[i] << endl;
        }
    }
};

int main()
{
    // push: best T(n) = 1; worst T(n) = n
    // pop: best T(n) = 1; worst T(n) = n (?)
    Stack *stack = new Stack(3);
    stack->push(5);     // Ingresa data
    stack->push(10);
    stack->push(15);
    stack->push(20);
    stack->display();             // 15, 10, 5
    cout << stack->pop() << endl; // Debe imprimir 15 por ser el ultimo en ingresar
    cout << stack->pop() << endl; // 10
    cout << stack->pop() << endl; // 5
    cout << stack->pop() << endl; // basura o Error
    stack->display();             // Empty
}