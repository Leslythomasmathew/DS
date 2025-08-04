#include<stdio.h>
#define MAX 5
int queue[MAX];
int front = -1;
int rear=-1;
void equeue(int x);
void dqueue();
void display();
int main(){
    int n,choice=0;
        printf("1:Enqueue , 2:Dequeue ,3:Display the queue ,4:Stop\n");
        while(choice!=4){
        printf("Enter the choice\n");
        scanf("%d",&choice);
        if(choice==1){
        printf("Enter the Element to Enqueue :\n");
        scanf("%d",&n);
        equeue(n);
        }
        else if(choice==2){
        dqueue();
        printf("\n");
        }
        else if(choice==3){
        display();
        printf("\n");
        }
        else if(choice ==4)
        {
        printf("exiting from the queue");
        }
        else{
        printf("Invalid\n");
        
        }
        }

return 0;

}
void equeue(int x){
   if(rear==MAX-1){
        printf("Overflow\n");
        }
        else if(front==-1 && rear==-1){
        front=0;
        rear=0;
        queue[rear]=x;
        }
        else{
        rear++;
        queue[rear]=x;
        }
}
void dqueue(){
        if(front==-1 && rear ==-1){
        printf("Underflow\n");
        }
        else if(front==rear){
        printf("Last element deleted is: %d\n",queue[front]);
        front=-1;
        rear=-1;
        }
        else{
        printf("Element which is deleted is %d\n",queue[front]);
        front++;
        }

}
void display(){
  if(front==-1 && rear==-1){
  printf("queue is empty\n");
  }
  else{
  printf("Queue elements:");
  for(int i=front;i<=rear;i++){
 printf("%d\t",queue[i]);
  }
}
}










































