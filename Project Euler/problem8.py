f=open("problem8","r")
s=''
for line in f:
    s+=line.rstrip('\n')
Max=0
i=0
while i+5<1000:
    temp=int(s[i])*int(s[i+1])*int(s[i+2])*int(s[i+3])*int(s[i+4])
    Max=max(Max,temp)
    i+=1
print Max

