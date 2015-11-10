#pragma once
class queue_enayet
{
	struct node {
		int value;
		node * next;
	};

private:
	node * last;
	node * front;

public:
	queue_enayet();
	void push(int);
	void pop();
	int pop_return();
	int peek();
};

