for i in range(input()):
  a,b=map(int,raw_input().split())
  if a<=b: print 'L' if a%2==0 else 'R'
  else:print 'U' if b%2==0 else 'D'