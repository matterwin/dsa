#include "SinglyLinkedList.h"

int main() {
  SinglyLinkedList list;
  list.insertOnIndex(3, 0);
  list.insertOnIndex(0, 0);
  list.insertOnIndex(-2, 0);
  list.insertOnIndex(3, 20);
  list.insertOnIndex(1, 20);
  list.insertOnIndex(2, 30);
  list.insertOnIndex(3, 90);
  list.insertOnIndex(6, 30);

  list.insertNewHead(44);

  list.display();
  return 0;
}

