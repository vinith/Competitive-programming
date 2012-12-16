for i in range(input()):
        a,b=map(int,raw_input().split())
        t1=a*(b//2+b%2)
        t2=b*(a//2+a%2)
        print max(t1,t2)
    

