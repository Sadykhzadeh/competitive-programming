# Problem:   Sorting (eolymp 2321)
# Link:      https://eolymp.com/problems/2321
# Language:  Python 3.14
# Submitted: 2018-04-06 07:21 UTC
# Verdict:   Accepted

n = int(input())
l = list(map(int,input().split()))
l.sort()
s = str(l[0])
for i in range(1,n) :
  s = s + ' ' + str(l[i])
print(s)
