for i in range(input()):
    j=raw_input()
    s=raw_input()
    count=0
    for a in s: 
        if a in j:count+=1
    print count
