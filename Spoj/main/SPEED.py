def gcd(a,b):
  while b>0:
    a,b=b,a%b
  return a
for i in range(input()):
  a,b=map(int,raw_input().split())
  g=gcd(abs(a),abs(b))
  a//=g;b//=g
  print abs(a-b)