import sys
inp=sys.stdin.read()
inp=inp.split()
i=1
for case in range(int(inp[0])):
    toses=inp[i+1]
    ht={'TTT':0,'TTH':0,'THT':0,'THH':0,'HTT':0,'HTH':0,'HHT':0,'HHH':0}
    for index in range(38):
        ht[toses[index:index+3]]+=1
    print '%d %d %d %d %d %d %d %d %d' % (case+1,ht['TTT'],ht['TTH'],ht['THT'],ht['THH'],ht['HTT'],ht['HTH'],ht['HHT'],ht['HHH'])
    i+=2
