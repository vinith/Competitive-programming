dF=[]
fof=[]
added=[]
count=0
for x in range(input()):
    a=raw_input().split()
    dF.append(a[0])
    for i in range(2,int(a[1])+2):fof.append(a[i])
    #print fof
for frnd in fof:
    if frnd not in dF and frnd not in added:
        count+=1
        added.append(frnd)
print count 
