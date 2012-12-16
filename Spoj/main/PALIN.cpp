using namespace std;
#include<iostream>
#include<cstdio>
string reverse(string str,int length){
  int mid=length/2;
  char temp;
  for(int i=0;i<mid;i++){
    temp=str[i];
    str[i]=str[length-1-i];
    str[length-1-i]=temp;
  }
  return str;
}
void printReverse(string str,int length){
  for(int i=length-1;i>=0;i--)putchar(str[i]);
}
string addOne(string str, int length){
  bool carry=true;
  for(int i=length-1;i>=0&&carry;i--){
    if(str[i]=='9'){
      str[i]='0';
    }
    else{
      str[i]+=1;
      carry=false;
    }
  }
  return str;
}
bool checkNines(string str,int length){
  for(int i=0;i<length;i++)
    if(str[i]!='9')
      return false;
  return true;
}
void printNextPalin(string str,int length){
  if(checkNines(str,length)){
    putchar('1');
    for(int i=0;i<length-1;i++)putchar('0');
    putchar('1');
  }else{
    int temp=length/2;
    string left,right,revleft;
    if(length%2==0){
      left=str.substr(0,temp);
      right=str.substr(temp,length);
      revleft=reverse(left,temp);
      if(revleft.compare(right)<=0)
        left=addOne(left,temp);
      cout<<left;printReverse(left,temp);
    }else{
      int middle;
      left=str.substr(0,temp);
      middle=str[temp]-'0';
      right=str.substr(temp+1,length);
      //cout<<left<<" "<<middle<<" "<<right<<endl;
      revleft=reverse(left,temp);
      if(revleft.compare(right)>0){
        cout<<left<<middle<<revleft;
      }else{
        if(middle==9){
          left=addOne(left,temp);
          cout<<left<<"0";printReverse(left,temp);
        }else{
          cout<<left<<middle+1<<revleft;
        }
      }
    }
  }
  putchar('\n');
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    string inp;
    cin>>inp;
    printNextPalin(inp,inp.length());
  }
  return 0;
}
