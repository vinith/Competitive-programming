temp=10**3
sieve={}
sieve[0]=sieve[1]=False
for i in range(temp):
    if i not in sieve:
        j=i*2
        while j<temp:
            sieve[j]=False
            j+=i
for i in range(2,temp):
    for j in range(i+1,temp):
        for k in range(j+1,temp):
            for n in range(k+1,temp):
                if i not in sieve and j not in sieve and k not in sieve and n not in sieve:
                    stat=True
		    print i,j,k,n
                    list1=[str(i)+str(j),str(i)+str(k),str(i)+str(n),str(i)+str(i)]
                    list2=[str(j)+str(i),str(j)+str(k),str(j)+str(n),str(j)+str(j)]
                    list3=[str(k)+str(i),str(k)+str(j),str(k)+str(n),str(k)+str(k)]
                    list4=[str(n)+str(i),str(n)+str(j),str(n)+str(k),str(n)+str(n)]
                    for v in list1:
                        if int(v) in sieve:
                            stat=False
                            break
                    for v in list2:
                        if int(v) in sieve:
                            stat=False
                            break
                    for v in list3:
                        if int(v) in sieve:
                            stat=False
                            break
                    for v in list4:
                        if int(v) in sieve:
                            stat=False
                            break
		    if stat==True:
                        print i,j,k,n
                        sys.exit()


