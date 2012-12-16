def getVal(name):
    Sum=0
    for a in name:
        Sum+=(ord(a)-64)
    return Sum

fp=open("problem22.txt","r")
nam=fp.read()
names=nam.split(',')
for i in range(len(names)):
   names[i]=names[i].strip('"')
names.remove('\n')
names=sorted(names)
answer=0
for i in range(len(names)):
   answer+=((i+1)*getVal(names[i]))

print answer

