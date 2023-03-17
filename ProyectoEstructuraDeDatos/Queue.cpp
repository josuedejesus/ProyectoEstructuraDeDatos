#include "Queue.h"
Queue::Queue() {
	this->size = 0;
	this->head = nullptr;
	this->tail = nullptr;
}

Queue::~Queue() {

}

void Queue::enqueue(int newValue) {
    this->incrementSize();
    Node* newNode = new Node(newValue);
    // caso 1 : no hay elementos en la cola
    if (this->head == nullptr) {
        this->head = newNode;
        this->tail = newNode;
        return;
    }
    
    // caso 2 : si hay mas elementos en la lista
    Node* iteratorNode = this->head;
    while (iteratorNode != nullptr) {
        if (iteratorNode->next == nullptr) {
            iteratorNode->next = newNode;
            this->tail = iteratorNode;
            this->tail = iteratorNode->next;
            return;
        }
        iteratorNode = iteratorNode->next;
    }
}

int Queue::dequeue()
{
    int valueToReturn;
    if (this->getSize() == 0) {
        return 0;
    }
    else if (this->getSize() == 1) {
        valueToReturn = this->head->value;
        this->tail = nullptr;
        this->head = nullptr;
        this->decrementSize();
        return valueToReturn;
    }
    valueToReturn = this->head->value;
    Node* iteratorNode = this->head->next;
    this->head = iteratorNode;
    this->decrementSize();
    return valueToReturn;
}

void Queue::incrementSize() {
	this->size = this->size + 1;
}
void Queue::decrementSize() {
    this->size = this->size - 1;
}
int Queue::getSize()
{
	return this->size;
}

int Queue::print(int index)
{
	Node* iteratorNode = this->head;
	for (int i = 0; i <= index; i++) {
		if (i == index) {
			return iteratorNode->value;
		}
		else {
			iteratorNode = iteratorNode->next;
		}
	}
}

bool Queue::exists(int value) {
    bool exists = false;
    if (this->head->value == value) {
        exists = true;
    }
    Node* iteratorNode = this->head;
    while (iteratorNode->next != nullptr) {
        if (iteratorNode->next->value == value) {
            exists = true;
            break;
        } 
        iteratorNode = iteratorNode->next;
    }
    if (exists)
        return true;
    else
        return false;
}