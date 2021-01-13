#include<stdio.h>
#include<stdlib.h>

#define size 5
int cq[size],r=-1,f=-1,count=0;

int isfull()
{
    if((r==size-1 && f==0) || r==f-1)
        return 1;
    else return 0;
}

int isempty()
{
    if(f==-1)
        return 1;
    else
        return 0;
}
void enqueue(int num)
{
    if(isfull()){
        printf("Queue Overflow\n");
        return;
    }
    if(isempty())
        f=r=0;
    else{
        if(r==size-1)
            r=0;
        else
            r++;
    }
    cq[r]=num;
    count++;
}

void dequeue()
{
    if(isempty()){
        printf("Queue Underflow\n");
        return ;
    }
    printf("Deleted element is %d: \n",cq[f]);
    count--;
    if(f==r){
        f=0; r=-1;
    }
    else{
        if(f==size-1)
            f=0;
        else
            f++;
    }
}

int counts(){return count;}

void display()
{
    int temp;
    temp=f;
    if(temp==-1){
        printf("Empty Queue \n");
        return;
    }
    else{
        if(temp<=r)
            while(temp<=r)
                printf("%d ",cq[temp++]);
        else{
            while(temp<=size-1)
                printf("%d ",cq[temp++]);
            temp=0;
            while(temp<=r)
                printf("%d ",cq[temp++]);
        }
    }

}

int main()
{
    int num;
    int ch;
    do
    {
        printf("\n 1.ENQUEUE 2.DEQUEUE 3.DISPLAY 4.COUNT 0.EXIT \n Enter choice \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: 
                printf("Enter number to be inserted \n ");
                scanf("%d",&num);
                enqueue(num);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("No. of elements are: %d\n",counts());
                break;
            case 0:
                exit(0);
            default:
                printf("Choice does not exist \n");
        }
    } while (ch!=0);
    

    return 0;
}
