ones=('','one','two','three','four','five','six','seven','eight','nine')
tens=('','ten','twenty','thirty','forty','fifty','sixty','seventy','eighty','ninety')
teen=('ten','eleven','twelve','thirteen','fourteen','fifteen','sixteen','seventeen','eighteen','nineteen')
def numToText(num):
    snum=str(num)
    if len(snum)==1:
        return ones[int(num)]
    if len(snum)==2 and num<20:
        return teen[int(snum[1])]
    if len(snum)==2:
        return tens[int(snum[0])]+ones[int(snum[1])]
    if len(snum)==3 and snum[2]=='0' and snum[1]=='0':
        return ones[int(snum[0])]+'hundred'
    if len(snum)==3 and int(snum[1])==0:
        return ones[int(snum[0])]+'hundredand'+ones[int(snum[2])]
    if len(snum)==3 and int(snum[1])==1:
        return ones[int(snum[0])]+'hundredand'+teen[int(snum[2])]
    if len(snum)==3:
        return ones[int(snum[0])]+'hundredand'+tens[int(snum[1])]+ones[int(snum[2])]

while 1:
   n=input()
   print numToText(n)
ans=0     
for i in range(1,1000):
  ans+=len(numToText(i))
  #print numToText(i)
print ans+len('onethousand')
