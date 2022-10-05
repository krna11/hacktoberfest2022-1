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

Node* takeInput(){
	int data;
	cin>>data;
	Node *head=NULL;
	Node *tail=NULL;
	while(data!=-1){
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

void print(Node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}

Node* insertNode(int data,int i,Node* head){
	Node* newNode=new Node(data);
	int count=0;
	Node *temp=head;
	if(i==0){
		newNode->next=head;
		head=newNode;
		
	}
	else{
	while(count<i-1 && temp!=NULL){
		temp=temp->next;
		count++;
	}

	newNode->next=temp->next;
	temp->next=newNode;
}
return head;
}

int main(){
	
Node *head=NULL;
head=takeInput();
print(head);
int i,data;
cout<<"Enter data : ";
cin>>data;
cout<<"\n Enter Position : ";
cin>>i;
head=insertNode(data,i,head);
print(head);
}
