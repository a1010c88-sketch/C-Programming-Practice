#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}Node;
int main(){
    Node *head=NULL;                                                    
    Node *current=NULL;
    Node *newNode=NULL;
    int n,data;
    printf("要輸入幾個數字：");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        printf("輸入數字：");
        scanf("%d", &data);
        
        newNode=(Node*)malloc(sizeof(Node));
        
        newNode->data=data;
        newNode->next=NULL;
        
        if(head==NULL){
            head=newNode;
        }
        else {
            current=head;
            while(current->next!=NULL){
                current=current->next;
                
            }
            current->next=newNode;
            
        }
        
    }
    printf("Linked list:");
    current =head;
    while(current!=NULL){
        printf("%d ",current->data);
        current = current->next;
    }
     current=head;
     while(current!=NULL){
         
         Node *temp=current;
         current=current->next;
         free(temp);
     }
     
    
    
    
    
    
    
    
    
    
}
