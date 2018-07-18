# Problem:   LCM (eolymp 135)
# Link:      https://eolymp.com/problems/135
# Language:  Python 3.14
# Submitted: 2018-07-18 09:22 UTC
# Verdict:   Accepted

import math

def gcd(a,b):
    if b==0:
        return  a
    else:
        return  gcd(b,a%b)

def nok(a,b):
    return  (a*b)//gcd(a,b)



n=int(input())
a=list(map(int,input().split()))
ans=a[0]
for i in range(1,n):
    ans=nok(ans,a[i])

print(ans)
