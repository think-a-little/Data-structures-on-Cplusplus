#pragma once

template <typename T>
class Stack {
	class Node;
public:
	Stack();
	~Stack();
	void push(T value);
	T top();
	void pop();
	bool empty();
	void clear();
private:
	class Node {
	public:
		Node* next;
		T value;
		Node(Node* next, T value) : next(next), value(value) {}
	};
	Node* head;
	int size;
	
};

template<typename T>
inline Stack<T>::Stack() {
	head = nullptr;
	size = 0;
}

template<typename T>
inline Stack<T>::~Stack() {
	clear();
}

template<typename T>
inline void Stack<T>::push(T value) {
	head = new Node(head, value);
	size++;
}

template<typename T>
inline T Stack<T>::top()
{
	return this->head->value;
}

template<typename T>
void Stack<T>::pop() {
	Node *temp = head;
	head = head->next;
	delete temp;
}

template<typename T>
inline bool Stack<T>::empty() {
	bool ret = true;
	if (this->head != NULL) ret = false;
	return ret;
}

template<typename T>
inline void Stack<T>::clear() {
	Node* temp;
	while (head != nullptr) {
		temp = head;
		head = head->next;
		delete temp;
	}
}
