import psyco
psyco.full()
while 1:
    try:
        s1=raw_input()
        s2=raw_input()
	ans=''
	for i in range(97,123):
           alpha=chr(i)
	   count1,count2=s1.count(alpha),s2.count(alpha)
	   rangE=count2 if count1>count2 else count1
           for k in range(rangE):
	       ans+=alpha
        print ans   
    except:
        break
 
