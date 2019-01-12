#include <iostream>
using namespace std;

class Node{
	public:
//data

	int data;

//pointer to next node

	Node*next;

//construct that makes ptr to NULL

	Node(){
	next=NULL;  }
	};

	class Linkedlist{

//Head and circles re linked together

	public:

//Head-> Node type ptr 

	Node*head;
	Node*tail;

//construct
	Linkedlist(){
	head=NULL;
	tail=NULL;
}

//Circles linked inside each other

//Rles how circles will be linked 

//insert
	void insert(int value){

// 1 node is added 
	Node*temp= new Node;

//insert the data in node 
	temp->data=value;

//1 Node only 

	if(head==NULL){
	head = temp;
}

//any another Node 

	else{
	tail->next = temp;
}

	tail=temp;
}

//for inserting value at a point

	void insertAt(int pos,int value){

//reach the value before the pos

  	Node*current=head;

	int i=1;
	while(i<pos){

	i++;
	current =current->next;

  }
	}

//deletion

	//delete of the last element 

	void delet(){ 

//store the tail in the temp

	Node*temp = tail;


//before this tail has to point NULL;


	Node*current = head;

	while(current-> next!= tail){

	current = current ->next;}

 }

//for deleting an element at a position 

	void deleteAt(int pos, int value){
  

//rech the place before the pos 

	Node*current= head;
	int i=1;
	
	while(i<pos){
 
   
	i++;
  
 	current = current->next;

             }
    
  }

//counting the number of linklist

	int count(int search_for)

     {

	Node*current=head;

	int count=0;

	while (current !=NULL)

  {

	count++;
	current = current->next;

       }
  }

//dispay 

	void display(){

	Node*current = head;

	while(current!=NULL){

	cout<< current -> data << "->";
	current = current->next;}
	cout<<endl;
       }
  };



	int main(){
      	  Linkedlist l1;
	  l1.insert(1);
	  l1.insert(2);
	  l1.insert(3);
	  l1.insert(4);
	  l1.display();

	return 0;
 }


































































	

































	














































