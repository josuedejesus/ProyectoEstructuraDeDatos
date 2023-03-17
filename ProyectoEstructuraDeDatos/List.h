#pragma once
#include "Node.h"
class List
{
private:
	Node* first;
	Ui::MainWindowClass ui;
public:
	List();
	~List();
	void insertNode(int);
	void printList();
	int getSize();
	int valueAt(int index);
	bool exists(int valor);
	bool deleteNode(int valueToDelete);
};

