m,n=map(int,raw_input().split())
for i in range(m,n):
  for k in range(i+1,n):
    for p in range(k+1,n):
      for x in range(p+1,n):
        if i ^ k ^ p ^ x==0:
          print i,k,p,x
          print bin(i)[2:],bin(k)[2:],bin(p)[2:],bin(x)[2:]