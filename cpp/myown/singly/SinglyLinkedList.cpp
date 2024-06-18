#include <iostream>
#include "SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList() : head(nullptr) {}

void SinglyLinkedList::insertNewHead(int val) {
  ListNode* newNode = new ListNode(val);
  newNode->next = head;
  head = newNode;
}

// allowed to insert at end of the list by having the index be the length of the list
void SinglyLinkedList::insertOnIndex(int index, int val) {
  if (index < 0 || (index > 0 && !head)) {
    std::cerr << "Error: index " << index << " is out-of-bounds" << std::endl;
    return;
  }

  if (index == 0) {
    ListNode* newNode = new ListNode(val);
    newNode->next = head;
    head = newNode;
    return;
  }

  int tmpIndex = index;
  --index;
  ListNode* curr = head;
  while (curr->next && index) {
    curr = curr->next;
    --index;
  }

  if (index > 0) {
    std::cerr << "Error: index " << tmpIndex << " is out-of-bounds" << std::endl;
    return;
  }

  ListNode* newNode = new ListNode(val);
  newNode->next = curr->next;
  curr->next = newNode;
}

void SinglyLinkedList::display() {
  ListNode* curr = head;
  while (curr) {
    std::cout << curr->val << ", ";
    curr = curr->next;
  }
  std::cout << std::endl;
}

