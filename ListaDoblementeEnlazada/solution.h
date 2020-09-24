struct Node{
    T data;
    Node* next;
    Node* prev
};

class List{

    Node* head;
    Node* tail;

    void push_back(T data){
        Node* nodo = new Node(data);
        nodo->next = nullptr;
        nodo->prev = tail;        
        tail->next = nodo;
        tail = nodo;
    }
    T pop_back(){
        T temp = tail->data;
        tail = tail->prev;
        delete tail->next;
        tail->next = nullptr;
        
        return temp;
    }
    void push_front(T data){
        Node* nodo = Node(data);
        nodo->next = head;
        nodo->prev = nullptr;
        head->prev = nodo;
        head = nodo;
    }
    T pop_front(){
        T temp = head->data;
        head = head->next;
        delete head->prev;
        head->prev = nullptr;
    }
}

