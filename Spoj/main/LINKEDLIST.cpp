//every node will have a head,current 
//fix it so that there is only 1head,current for each list

//make head and current global 
using namespace std;
#include<iostream>
#include<cstdio>
class cll{
public:
  int n;
  cll *next;
  cll *head,*current;
  cll(){
    head=NULL;
  }
  void insert(int data);
  void remove(int data);
  void print();
};
void cll::insert(int data){
  if(head==NULL){
   head=new cll;
   head->next=NULL;
   head->n=data;
   current=head;
  }
  else{
    cll *temp=new cll;
    temp->next=NULL;
    temp->n=data;
    current->next=temp;
    current=temp;
  }  
}
void cll::remove(int data){
  
}
void cll::print(){
  cll * head= this->head;
  while(head!=NULL){
    cout<<head->n<<endl;
    head=head->next;
  }
}
void menu(){
  printf("1.Insert  2.Delete  3.Print  4.Exit\nChoice:");
}
int main(){
  cll l1;
  int choice;
  do{
    menu();
    scanf("%d",&choice);
    if(choice==1){
      int data;
      scanf("%d",&data);
      l1.insert(data);
      cout<<l1.current<<endl;
    }else if(choice==2){
      int data;
      scanf("%d",&data);
      l1.remove(data);
    }else if(choice==3){
      l1.print();
    }else{
      printf("Invalid choice\n");
    }
    
  }while(choice!=4);
  return 0;
}