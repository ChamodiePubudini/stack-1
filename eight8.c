#include <stdio.h>
#include <stdlib.h>

int arr[2];//declaring an array
int rear=-1,front=0;
int main()

{
    int ele,select;


    printf("Enter 1 for check if it is empty\nEnter 2 for check if it is full\n");
    printf("Enter 3 for Enqueue\nEnter 2 for dequeue\nEnter : ");
    scanf("%d",&select);

    switch (select)
    {
    case 1:
        isempty();
        break;
    case 2:
        isfull();
        break;
    case 3:
        printf("Enter Element : ");
        scanf("%d",&ele);
        enqueue(ele);
        main();
        break;
    case 4:
        dequeue();
        break;
    default:
        printf("Invalid Input");
    }

}

void isempty(void)
{
    if (rear==-1)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("Queue is Not Empty");
    }
}

void isfull(void)
{
    if(rear==2)
    {
        printf("Queue is Full");
    }

    else
    {
        printf("Queue is not Full");
    }
}

void enqueue(int ele)
{
 rear++;
 arr[rear]=ele;
}

int dequeue()
{
    int item;
    item = arr[front];
    front++;
    return item;

}

