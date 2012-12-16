tc=input()
while tc>0:
  s=raw_input()
  if(len(s))==0:continue
  tc-=1
  words=s.split()
  p=0;l=len(words);temp=0
  previous,currentP=len(words[0]),1
  for i in range(1,l):
    temp=len(words[i])
    if temp==previous:currentP+=1
    else:
      p=max(p,currentP)
      currentP=1
    previous=temp
  p=max(p,currentP)
  print p