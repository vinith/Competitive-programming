def divsum(n):
   divsum=0
   sq=int(n**0.5)
   for i in range(2,sq+2):
       if n%i==0:
           divsum+=i+(n//i)
   #1 is proper divisor so add it
   divsum+=1
   #if its square number sub sqrt from divsum
   if sq==n**0.5:
       divsum-=sq
   return divsum 
#print divsum(220),divsum(divsum(220))
Sum=0
for a in range (2,10001):
    b=divsum(a)
    if a!=b and divsum(b)==a:
       Sum+=a
       #print a 
print Sum
