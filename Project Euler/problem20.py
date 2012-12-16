f=1
s=0
for i in range(1,100):
 f*=i;
while f>0:
  s+=f%10
  f//=10
print s
