#include<iostream>
using namespace std;



class Node{
	public:
	float coef;
	int exp;
	Node * next;
	Node(float coef,int exp){
		this->coef=coef;
		this->exp=exp;
		this->next=NULL;
	}
};


	void insertAtBeg(Node *&head,float coef,int exp){
		if(head==NULL){
			Node*temp=new Node(coef,exp);
			temp->next=head;
			head=temp;
		}
		Node *temp = new Node(coef,exp);
		temp->next=head;
		head=temp;
	}
	
	void display(Node *&head){
		Node*temp = head;
	while(temp->next!=NULL){
		cout<<temp->coef<<"x^"<<temp->exp<<" "<<"+";
		temp=temp->next;
	}
	cout<<endl;
	}
	
	void addpoly(Node *&result ,Node *&head1,Node *&head2){
		if(head1->exp == head2->exp)
		
	}


int main(){
	
		Node *result=NULL;
	
		Node *head1=NULL;
		insertAtBeg(head1,1,0);
		insertAtBeg(head1,4,1);
		insertAtBeg(head1,5,2);
		display(head1);
		Node *head2=NULL;
		insertAtBeg(head2,9,0);
		insertAtBeg(head2,5,1);
		insertAtBeg(head2,7,3);
		insertAtBeg(head2,9,4);
		display(head2);
		
		addpoly(result,head1,head2);
}
