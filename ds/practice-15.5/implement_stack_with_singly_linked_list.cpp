/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

class Stack
{
    //Write your code here

public:
    Node* top;
    int sz;
    Stack()
    {
        //Write your code here 
        top=NULL;
        sz=0;
    }

    int getSize()
    {
        //Write your code here
        return sz;
    }

    bool isEmpty()
    {
        //Write your code here
        return sz==0;   
    }

    void push(int data)
    {
        //Write your code here
        sz++;
        Node* newNode=new Node(data);
        newNode->next=top;
        top=newNode;
    }

    void pop()
    {
        //Write your code here
        sz--;
        Node* deleteNode=top;
        if(top==NULL){
            return;
        }
        top=top->next;
        delete deleteNode;
    }

    int getTop()
    {
        //Write your code here
        if(sz==0)return -1;
        return top->data;
    }
};