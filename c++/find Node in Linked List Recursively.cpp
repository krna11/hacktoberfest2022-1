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


Node* takeInputBetter(){
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


int findNodeRec(Node *head, int n)
{
	if(head==NULL){
		return -1;
	}
	
	if(head->data==n){
		return 0;
	}
	int index=findNodeRec(head->next,n);
	if(index==-1){
		return -1;
	}
	else{
	return index+1;
	}
	
}

int main(){
	cout<<"Enter Linked List : ";
	Node *head=takeInputBetter();
	cout<<endl;
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	int z=findNodeRec(head,n);
	cout<<endl;
	cout<<"Index : "<<z;
	return 0;
}
