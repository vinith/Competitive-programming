using namespace std;
#include<iostream>
#include<cstdio>
struct node{
  int data;
  node *next;
};
class cll{
public:
  node *p;
  cll *head,*current;
  cll(){
    current=head=NULL;
  }
  //void insert(int data);
  //void delete(int data);
  //void print();
};
//class cll::void insert(int data){
  //if(head==NULL){
    
  //}
//}
int main(){
  cll list1,list2;
  list1.p=new node;
  list1.p->data=2;
  list2.p=new node;
  return 0;
}