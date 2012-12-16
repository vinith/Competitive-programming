a,b=raw_input().split()
d={}
for i in range(int(a)):
    key=raw_input()
    if d.has_key(key):d[key]+=1
    else:d[key]=1
sorted(d.items(),key=lambda x:x[1])
print d
