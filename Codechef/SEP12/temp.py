import random
print "10"
for k in range(10):
   d=[]
   print "1000"
   print "1 1",
   for i in range(1,1000-2):
      d.append(int((random.random()*1000)%1000))
   final=0;
   for num in d: final^=num
   d.append(final)
   for num in d:print num,
   print ""
   