# Problem:   Cash Machine (eolymp 138)
# Link:      https://eolymp.com/problems/138
# Language:  Python 3.13
# Submitted: 2023-02-04 15:29 UTC
# Verdict:   Accepted

n = int(input())
cnt = 0

if n % 10 != 0:
  print(-1)
else:
  while 500 <= n:
    cnt += 1
    n -= 500
  while 200 <= n:
    cnt += 1
    n -= 200
  while 100 <= n:
    cnt += 1
    n -= 100
  while 50 <= n:
    cnt += 1
    n -= 50
  while 20 <= n:
    cnt += 1
    n -= 20
  while 10 <= n:
    cnt += 1
    n -= 10
  print(cnt)
