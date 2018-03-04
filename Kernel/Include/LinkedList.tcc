template <typename T>
LinkedListNode<T>::LinkedListNode(T value){
	this->previous = this->next = 0;
	this->list = 0;
	this->value = value;
}

template <typename T>
LinkedList<T>::LinkedList(){
	count = 0;
	first = last = 0;
}

template <typename T>
LinkedListNode<T> * LinkedList<T>::addFirst(T value){
	LinkedListNode<T> * n = new LinkedListNode<T>(value);
	n->list = this;
	if(this->first == 0) this->last = n;
	else this->first->previous = n;
	n->next = this->first;
	this->first = n;
	return n;
}

template <typename T>
LinkedListNode<T> * LinkedList<T>::addLast(T value){
	LinkedListNode<T> * n = new LinkedListNode<T>(value);
	n->list = this;
	if(this->last == 0) this->first = n;
	else this->last->next = n;
	n->previous = this->last;
	this->last = n;
	return n;
}

template <typename T>
LinkedListNode<T> * LinkedList<T>::addAfter(LinkedListNode<T> * node, T value) {
	LinkedListNode<T> * newNode = new LinkedListNode<T>(value);
	if (node == 0) return 0;
	if (node->list != this) return 0;
	
	newNode->previous = node;
	if (node->next == NULL) {
		node->next = newNode;
		this->last = newNode;
	} else {
		newNode->next = node->next;
		node->next->previous = newNode;
		node->next = newNode;
	}
	newNode->list = this;
	return newNode;
}

template <typename T>
LinkedListNode<T> * LinkedList<T>::addBefore(LinkedListNode<T> * node, T value) {
	LinkedListNode<T> * newNode = new LinkedListNode<T>(value);
	if (node == 0) return 0;
	if (node->list != this) return 0;
	
	newNode->next = node;
	if (node->previous == 0){
		node->previous = newNode;
		this->first = newNode;
	} else {
		newNode->prev = node->previous;
		node->previous->next = newNode;
		node->previous = newNode;
	}
	newNode->list = this;
	return newNode;
}

template <typename T>
int LinkedList<T>::remove (LinkedListNode<T> * node){
	if (node->list != this) return -1;
	
	if (node->previous == 0)
		this->first = node->next;
	else
		node->previous->next = node->next;
	
	if (node->next == 0)
		this->last = node->previous;
	else
		node->next->previous = node->previous;
	
	delete node;
	return 0;
}