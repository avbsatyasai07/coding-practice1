#include<stdio.h>
#define max 5
int q[max];
int f=-1,r=-1;
void enqueue(){
	int val;
	printf("enter the val");
	scanf("%d",&val);
	if(r==max-1)
	printf("queue is overflow");
	else if(f==-1&&r==-1){
		r=f=0;
		q[r]=val;
		printf("%d is enqueued",q[r]);
	}
	else{
		r++;
		q[r]=val;
		printf("%d is enqueued",q[r]);
	}	
}
void dequeue(){
	int temp;
	if(f==-1&&r==-1){
		printf("\nqueue is underflow");
	}
	else if(f==r){
		
		f=r=-1;
		printf("\n queue is empty");
		
	}
	else{
		printf("%d is dequeued",q[f]);
		f++;
	}
	
	
	
}
void peek(){

	if(f==-1&&r==-1){
		printf("\nqueue is underflow");
	}
	else{
		printf("%d is front",q[f]);
	}	
}
void display(){
	if(f==-1&&r==-1){
		printf("\nqueue is underflow");
	}
	else{
		printf("\n queue elements is");
		int i;
		for(i=f;i<=r;i++){
			printf("%d\t",q[i]);
		}
	}
}
int main(){
 	int ch;
 	
 	while(1){
 		printf("\n1.enqueue\ndequeue\n3.peek\n4.display\nenter your choice");
 		scanf("%d",&ch);
 		switch(ch){
 			case 1:{
 				enqueue();
				break;
			 }
			 case 2:{
			 	dequeue();
				break;
			 }
			 case 3:{
			 	peek();
				break;
			 }
			 case 4:
			{
				display();
				break;
			}
			
			
			default:
				printf("\n entered wrong choice");
	  }
	    }
	 }
