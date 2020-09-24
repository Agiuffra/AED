#include <iostream>
#include "solution.h"
using namespace std;

int main() {
  Node* head = nullptr; // Lista // Si queremos modificar la referencia, hay que pasarlo como referencia (* &)
  int n, val;
  cin>>n; // Tamaño de la lista
  for(int i=0;i<n;i++){
    cin>>val;
    push_front(head, val);
  }
  // cout<<"------"<<endl;
  // display(head);
  // cout<<"------"<<endl;
  // Node* rev = reverse(head);
  // display(rev);
  // cout<<"¿Es palindrome?"<<endl;
  if(is_palindrome(head)){
    cout<<"palindrome\n";
  } else {
    cout<<"no palindrome\n";
  }
}