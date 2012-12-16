def isPalin(num):
    if num==num[::-1]:
        return True
    return False
ans=0
for i in range(1,10**6):
    if isPalin(str(i)) and isPalin(bin(i).lstrip('0b')):
        ans+=i        
print (ans)
