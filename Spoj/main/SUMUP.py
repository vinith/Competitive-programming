k=input
t=k()
while t:
 s=0;t-=1;i=k()
 while i:s+=(i*1.0)/(i*i-i+1)*(i*i+i+1);i-=1
 print "%.5f"%(s)
