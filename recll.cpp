#include<stdio.h>
#include<conio.h>

struct node{
       int data;
       struct node * next;
       };

void print_list(node* start) {
  while (start) {
    printf("%d ", start->data);
    start = start->next;
  }
  printf("\n");
}

node* reverse(node* current)
{
   static int i;
   node* back;
   node* head;
  
  if(current->next==NULL)
  {
       return current;
  }
  
  back=current;
  current=current->next;
  if(i==0)
  {
          current=back;
          back= NULL;
  }

  i++;
  head= reverse(current);
  current->next = back;
  return head;
}  

int main(){
    
    node N[10];
    int i;
    
    for(i=0;i<10;i++)
    {
                      N[i].data = i;
                      N[i].next = &N[i+1];
    }
                      N[9].next = NULL;
    node* start = N;
    print_list(start);
    start = reverse(start);
    print_list(start);
    getch();
    }
