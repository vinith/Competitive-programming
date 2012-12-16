for cases in range(input()):
  n,m=map(int,raw_input().split())
  ar=range(1,n+1)
  for queries in range(m):
    w,x,y,z=map(int,raw_input().split())
    val=-z if w==2 else z
    for i in range(x-1,y):ar[i]+=val
    print ar
    temp=[]
    temp.append(ar[0])
    for i in range(1,n):temp.append(ar[i]-ar[i-1])
    print temp