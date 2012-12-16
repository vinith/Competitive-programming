#import psyco
#psyco.full()
def gcd(a,b):
    while b>0:
        a,b=b,a%b
    return a
for i in range(input()):
    a,b,c,d,k=raw_input().split(' ')
    g1,g2=gcd(int(a),int(b)),gcd(int(c),int(d))
    lcm=(g1*g2)//gcd(g1,g2)
    positions=int(k)//lcm
    print (positions*2)+1
