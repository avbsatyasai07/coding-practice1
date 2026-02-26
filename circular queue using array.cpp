#include<stdio.h>
#include<stdlib.h>
#define max 5
int q[max],front=-1,rear=-1;
void enqueue(){
	if(front==(rear+1)%max)
	printf("queue is under flow\n");
	else{
		if(front==-1)
			front=rear=0;
		
		else
			rear=(rear+1)%max;
			printf("enter the data");
			scanf("%d",&q[rear]);
		
	}
}
void dequeue(){
	if(front==-1){
		printf("queue is under flow\n");	
	}
	else if(front==rear){
		front=rear=-1;
	}
	else{
		front=(front+1)%max;
		
	}
}
void display(){
	if (front==-1)
	printf("queue is empty");
	else{
		int i=front;
		while(i!=rear){
			printf("%d\t",q[i]);
			i=(i+1)%max;
		}
		printf("%d\t",q[i]);
	}
}
int main(){
	int ch;
	while(1){
		printf("\n1.enqueue\n2.dequeue\n3.daisplay\n enter your choice");
		scanf("%d",&ch);
		switch (ch){
			case 1:{
				enqueue();
				break;
			}
			case 2:{
				dequeue();
				break;
			}
			case 3:{
				display();
				break;
			}
			default :
				{
					printf("enter wrong choice");
				}
		}
	}
}
