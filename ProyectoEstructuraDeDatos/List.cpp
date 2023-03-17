#include <iostream>
#include "MainWindow.h"
#include "List.h"
using namespace std;

List::List() {
	this->first = nullptr;
}

List::~List() {}

void List::insertNode(int newValue) {
    Node* newNode = new Node(newValue);
    if (this->first == nullptr) {
        this->first = newNode;
        return;
    }
    else {
        Node* iteratorNode = this->first;
        while (iteratorNode->next != nullptr) {
            iteratorNode = iteratorNode->next;
        }
        iteratorNode->next = newNode;
    }
}

void List::printList() {
	Node* iteratorNode = this->first;
	while (iteratorNode != nullptr) {
		ui.combo_eliminar->addItem("hola");
		iteratorNode = iteratorNode->next;
	}
}

int List::valueAt(int index) {
	Node* iteratorNode = this->first;
	for (int i = 0; i <= index; i++) {
		if (i == index) {
			return iteratorNode->value;
		}
		else {
			iteratorNode = iteratorNode->next;
		}
	}
}

bool List::exists(int value) {
    bool exists = false;
    if (this->first->value == value) {
        exists = true;
    }
    Node* iteratorNode = this->first;
    while (iteratorNode->next != nullptr) {
        if (iteratorNode->next->value == value) {
            exists = true;
            break;
        }
        iteratorNode = iteratorNode->next;
    }
    if (exists) {
        return "true";
    }
    else {
        return false;
    }
}

bool List::deleteNode(int valueToDelete)
{
    bool isDeleteComplete = false;
    if (this->first->value == valueToDelete) {
        this->first = this->first->next;
        isDeleteComplete = true;
    }
    else {
        Node* iteratorNode = this->first;
        while (iteratorNode->next != nullptr) {
            if (iteratorNode->next->value == valueToDelete) {
                iteratorNode->next = iteratorNode->next->next;
                isDeleteComplete = true;
                break;
            }
            iteratorNode = iteratorNode->next;
        }
    }
    return isDeleteComplete;
}

int List::getSize() {
    int size = 0;
    Node* iteratorNode = this->first;
    while (iteratorNode != nullptr) {
        size++;
        iteratorNode = iteratorNode->next;
    }
    return size;
}

