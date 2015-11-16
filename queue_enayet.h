//queue_enayet.h
//queue_enayet

#ifndef queue_enayet_h
#define queue_enayet_h

template <typename genericType>
class queue
{
	struct node {
		genericType value;
		node * next;
	};

private:
	node * last;
	node * front;

public:
    // Initializes queue
	inline queue()
    {
        front = nullptr;
        last = nullptr;
    }
    
    // Pushes a value to the end of the queue
	void push(genericType)
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
    
    // Removes element at the front of the queue
	void pop()
    {
        front = front->next;
    }
    
    // Removes element at front of queue and returns
	genericType pop_return()
    {
        auto val = front->value;
        pop();
        return val;
    }
    
    // Returns element at front of queue
	genericType peek()
    {
        return front->value;
    }
};

#endif /*queue_enayet.h*/

