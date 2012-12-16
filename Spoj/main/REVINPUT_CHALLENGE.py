import sys
s=sys.stdin.read().strip().split('\n')
for x in range(0,len(s),2):
 try:
  n,a=int(s[x]),''
  t=s[x+1].split()
 except:continue
 for y in t:
  for z in range(n):a+=(y+' ')
 print a.strip()[::-1]
