#ifndef LIST_H
#define LIST_H

template <typename T> class LinkedList;

template <typename T>
class LinkedListNode {
public:
	LinkedListNode<T>	* previous;
	LinkedListNode<T>	* next;
	LinkedList<T>		* list;
	T					  value;
	
	LinkedListNode(T value);
};

template <typename T>
class LinkedList {
public:
	size_t				  count;
	LinkedListNode<T>	* first;
	LinkedListNode<T>	* last;
	
	LinkedList();
	
	LinkedListNode<T> * addFirst(T value);
	LinkedListNode<T> * addLast(T value);
	LinkedListNode<T> * addAfter(LinkedListNode<T> * node, T value);
	LinkedListNode<T> * addBefore(LinkedListNode<T> * node, T value);
	int remove (LinkedListNode<T> * node);
};

#include "LinkedList.tcc"

#endif