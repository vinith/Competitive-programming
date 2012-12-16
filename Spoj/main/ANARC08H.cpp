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
  int remove(int d,int count);
  void print();
};
void cll::insert(int data){
  if(head==NULL){
   head=new cll;
   head->next=head;
   head->n=data;
   current=head;
  }
  else{
    cll *temp=new cll;
    temp->next=head;
    temp->n=data;
    current->next=temp;
    current=temp;
  }  
}
int cll::remove(int d,int count){
  cll *head=this->head;
  while(count){
    for(int i=2;i<d;i++)
      head=head->next;
    head->next=head->next->next;
    head=head->next;
    count--;
  }
  return head->n;
}
void cll::print(){
  cll * head= this->head;
  while(head!=NULL){
    cout<<head->n<<endl;
    head=head->next;
  }
}
int main(){
  int n,d,ans;
  while(scanf("%d %d",&n,&d)&&n!=0){
    cll l1;
    for(int i=1;i<=n;i++)
      l1.insert(i);
    ans=l1.remove(d,n-1);
    printf("%d %d %d\n",n,d,ans);
  }
  return 0;
}