import sys
for i in range(1000):
    for k in range(i):
        for t in range(k):
            if i+k+t==1000:
                if t*t+k*k==i*i:
                    print i*t*k
                    sys.exit()
