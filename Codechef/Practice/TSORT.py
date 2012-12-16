import sys
import psyco
psyco.full()
inp=sys.stdin.read().strip('\n')
inp=map(int,inp.split('\n'))
inp.pop(0)
for num in sorted(inp):
    print num

