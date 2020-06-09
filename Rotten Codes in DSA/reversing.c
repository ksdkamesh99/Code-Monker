#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *link;
}nd;
void printlist(nd *p){
	nd *temp1=NULL;
	temp1=p;
	while(temp1!=NULL){
		printf("%d ",temp1->data);
		temp1=temp1->link;
	}
}
int main(){
	printf("welcome to the complete guide of linked list\n");
	printf("creation of linked list\n");
	printf("enter the noof elements in the linked list\n");
	nd *head=NULL,*tail=NULL,*temp=NULL;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		temp=(nd*) malloc(sizeof(nd));
		printf("enter the %d element ",(i+1));
		int d;
		scanf("%d",&d);
		temp->data=d;
		if(head==NULL){
			head=temp;
			temp->link=NULL;
			tail=head;
		}
		else{
			tail->link=temp;
			tail=temp;
		}

	}
	nd *current=NULL,*next=NULL,*previous=NULL;
	current=head;
	while(current!=NULL){
		next=current->link;
		current->link=previous;
		previous=current;
		current=next;
	}
	head=previous;
	printlist(head);
	
	
	return 0;
}

