#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node* insertAtHead(struct node *head){
	int item;
	struct node *newnode;
	scanf("%d",&item);
	while(item!=-1){
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
		if(head==NULL){
			newnode->next=NULL;
			head=newnode;
		}
		else{
			newnode->next=head;
			head=newnode;
		}
		scanf("%d",&item);
	}
	return head; 
}
void print(struct node *head){
	struct node *temp=head;
	while(temp!=NULL){
		printf("%d \n",temp->data);
		temp=temp->next;
	}
}
int main(){
	struct node *head=NULL;
	head=insertAtHead(head);
	print(head);
	return 0;
}
