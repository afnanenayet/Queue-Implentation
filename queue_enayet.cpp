#include "queue_enayet.h"

void queue_enayet::pop()
{
	front = front->next;
}

int queue_enayet::pop_return()
{
	auto val = front->value;
	pop();
	return val;
}

int queue_enayet::peek() 
{
	return front->value;
}

queue_enayet::queue_enayet()
{
	front = nullptr;
	last = nullptr;
}

void queue_enayet::push(int data)
{
	queue_enayet::node * temporary_node = new queue_enayet::node;
	temporary_node -> value = data;
	temporary_node -> next = nullptr;

	if (front == nullptr) {
		front = temporary_node;
	}

	else if (front -> next == nullptr) {
		front -> next = temporary_node;
	}
	last = temporary_node;
}