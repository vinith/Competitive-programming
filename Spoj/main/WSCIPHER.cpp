using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
int main(){
  int k1,k2,k3,t1,t2,t3,p1,p2,p3,l,itemp;
  char temp;
  while(scanf("%d %d %d",&k1,&k2,&k3)&&!(k1==0&&k2==0&&k3==0)){
    t1=t2=t3=p1=p2=p3=0;
    char str[81],s1[81],s2[81],s3[81];
    scanf("%s",str);
    l=strlen(str);
    for(int i=0;i<l;i++){
      temp=str[i];
      if(temp>='a'&&temp<='i'){
        s1[t1]=temp;t1++;
      }
      else if(temp>='j'&&temp<='r'){
        s2[t2]=temp;t2++;
      }
      else{
        s3[t3]=temp;t3++;
      }
    }
    s1[t1]=s2[t2]=s3[t3]='\0';
    //cout<<t1<<" "<<t2<<" "<<t3<<endl;
    //printf("%s %s %s\n",s1,s2,s3);
    if(t1!=0&&t1<k1){
      itemp=k1%t1;
      if(itemp==0)
        p1=0;
      else
        p1=t1-(k1%t1);
    }
    else p1=t1-k1;
    if(t2!=0&&t2<k2){
      itemp=k2%t2;
      if(itemp==0)
        p2=0;
      else
        p2=t2-(k2%t2);
    }
    else p2=t2-k2;
    if(t3!=0&&t3<k3){
      itemp=k3%t3;
      if(itemp==0)
        p3=0;
      else
        p3=t3-(k3%t3);
    }
    else p3=t3-k3;
    //cout<<p1<<" "<<p2<<" "<<p3<<endl;
    for(int i=0;i<l;i++){
      temp=str[i];
      if(temp>='a'&&temp<='i'){
        putchar(s1[p1]);
        p1++;
        if(p1==t1)p1=0;
      }
      else if(temp>='j'&&temp<='r'){
        putchar(s2[p2]);
        p2++;
        if(p2==t2)p2=0;
      }
      else{
        putchar(s3[p3]);
        p3++;
        if(p3==t3)p3=0;
      }
    }
    putchar('\n');
  }
  return 0;
}