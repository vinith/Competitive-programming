main(){
int n,i;
for(scanf("%d",&n);n;n--){
  double s=0;
  for(scanf("%d",&i);i;s+=i*1.0/((i*i-i+1)*(i*i+i+1)),i--);
  printf("%.5f\n",s);
}
}