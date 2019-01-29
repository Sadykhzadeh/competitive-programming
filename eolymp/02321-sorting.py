# Problem:   Sorting (eolymp 2321)
# Link:      https://eolymp.com/problems/2321
# Language:  Python 3.14
# Submitted: 2019-01-29 13:15 UTC
# Verdict:   Accepted

n = int(input())
l = list(map(int,input().split()))
l.sort()
s = str(l[0])
for i in range(1,n) :
  s = s + ' ' + str(l[i])
print(s)
