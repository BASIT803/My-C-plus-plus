#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
#define size 10
void enqueue(int);
void dequeue();
void display();
int queue[size],front=-1,rear=-1;
int main()
{
	int value,choice;
	while(1){
		printf("\n******MENU******\n");
		printf("1.Insertion\n2.DEletion\n3.Display\n4.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:printf("Enter the value to insert");
			scanf("%d",&value);
			enqueue(value);
			break;
		case 2:dequeue();
		break;
		case 3:display();
		break;
		case 4:exit(0);
		default:printf("\nwrong selection");
		
		
		}
	}
}
		void enqueue(int value){
			if(rear==size-1)
			 printf("\nqueue is full");
			 else{
			 	if(front==-1)
			 	front=0;
			 	rear++;
			 	queue[rear]=value;
			 	printf("\ninsertion successful");
			 }
		}
		void dequeue(){
			if(front==rear){
				front=rear=-1;
				printf("list empty");
			}
			else
			{
				printf("element deleted:%d",queue[front]);
				front++;
			}
		}
		
	void display(){
		if(rear=0)
		printf("\nqueue is empty");
		else
		{
			int i;
			printf("\nqueue elements are:\n");
			for(i=front;i<=rear;i++)
			printf("%d\t",queue[i]);
		}
	}
