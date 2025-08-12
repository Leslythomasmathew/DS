#include <stdio.h>
#define SIZE 6
#include<stdlib.h>
int queue[SIZE];
int front = -1;
int rear = -1;
int isFull()
 {
    return (front == (rear + 1) % SIZE);
 }

int isEmpty()
 {
    return front == -1;
 }


void enqueue(int value)
 {
    if (isFull()) 
    {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
        return;
    }

    if (isEmpty()) 
    {
        front = rear = 0;
    } else 
    {
        rear = (rear + 1) % SIZE;
    }

    queue[rear] = value;
    printf("Enqueued: %d\n", value);
 }

int dequeue() 
 {
    if (isEmpty()) 
    {
        printf("Queue Underflow! Cannot dequeue\n");
        return -1;
    }

    int item = queue[front];

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }

    return item;
 }

void display() 
{
    if (isEmpty())
     {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements is: ");
    int i = front;
    while (1)
     {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}


int main(){
   int choice,value;
   while(1)
   {
     printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exiting from the queue");
     printf("\nEnter your choice:");
     scanf("%d",&choice);
     switch(choice){
     case 1:
          printf("Enter the value:");
          scanf("%d",&value);
          enqueue(value);
          break;
    case 2:
      printf("Deleted element is:%d",queue[front]);
          dequeue();
          break;
    case 3:
          display();
          break;
    case 4:
          exit(0);
          break;
    default:
          printf("Invalid Choice");
          }
         }
         return 0;
         }
