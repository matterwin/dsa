#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

#include "../ListNode.h"

class SinglyLinkedList {
public:
  ListNode* head;
  SinglyLinkedList();
  void insertNewHead(int val);
  void insertOnIndex(int index, int val);
  void display();
};

#endif
