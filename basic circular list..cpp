#include<iostream>
using namespace std;

struct Node{
int value;
Node* next;
};
void printALL(Node*Head ){
	//working of ptr is just point to the nodes of the circular linked list
 Node*ptr=Head;  // creating new pointer that is pointing to the head node
    if (Head != NULL)// means head containing a value
    {
     do
    {
    cout<< " -> " << ptr->value<<endl ;
    ptr = ptr->next;
    }while (ptr != Head);
    }
}	


int main(){
	// creating nodes
	Node*Head=new Node;
	Node*second=new Node;
	Node*third=new Node;
	Node*fourth=new Node;

 	//giving values
    Head->value=1;
    second->value=2;
    third->value=3;
    fourth->value=4;
    //giviing adress
    Head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=Head;// last node pointes to Head node
    cout<<"Circular linked list "<<endl;
    printALL(Head);
		
	return 0;
}
