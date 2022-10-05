#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
};

Node *takeInput(){
	int data;
	Node *head=NULL;
	Node *tail=NULL;
	cin>>data;
	while(data !=-1){
		Node *newNode=new Node(data);
		if(head==NULL){
			head=newNode;
			tail=newNode;
		}
		else{
			tail->next=newNode;
			tail=tail->next;
		}
		cin>>data;
	}
	return head;
}

int length(Node *head){
	
	if(head==NULL){
		return 0;
	}
	
	head=head->next;
	int count=length(head);
	
	return count;
}
int main(){
	Node *head=takeInput();
	int size=length(head);
	cout<<size<<" ";
}
