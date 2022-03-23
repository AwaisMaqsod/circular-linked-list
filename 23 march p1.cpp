#include<iostream>
using namespace std;
struct Node{
	int data;
	Node*next;
};
Node*Head=NULL;
void printcll(Node*head){
struct	Node*ptr;
if(head==NULL){
    cout<<"linked list is empty : "<<endl;
return;
}
ptr=head;
	do{
	 cout<<ptr->data<<endl;
		  ptr=ptr->next;	
	}while(ptr!=head);
if(ptr == head)//if catching the last value of do while 
   cout<<ptr->data;
   cout<<"\n\n";
  }
int main(){//creating nodes
	Node*Head=new Node;
	Node*A=new Node;
	Node*B=new Node;
	Node*C=new Node;
	//assigning values
	Head->data=1;
	A->data=2;
	B->data=3;
	C->data=4;
    //creating pointers
    Head->next=A;
    A->next=B;
    B->next=C;
    C->next=Head;
    printcll(Head);
	return 0;
}
