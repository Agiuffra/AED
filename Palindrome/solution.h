using namespace std;

struct Node{
	int data;
	Node* next;
};

void push_front(Node* &head, int value)
{
  Node* nodo = new Node();
  nodo->data = value;
  nodo->next = head;
  head = nodo;
}

Node* reverse(Node* head){
  Node* temp = head;
  Node* rev = nullptr;
  while(temp != nullptr){
    push_front(rev, temp->data);
    temp = temp->next;
  }
  return rev;
}

void display(Node* head){
  while(head != nullptr){
    cout<<head->data<<", ";
    head = head->next;
  }
  cout<<endl;
}

bool is_palindrome(Node* l1){
  Node* l2 = reverse (l1);
  while(l1 != nullptr){
    if(l1->data != l2->data){
      return false;
    }
    l1 = l1->next;
    l2 = l2->next;
  }
  return true;
}