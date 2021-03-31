# Problem:   Big accuracy (eolymp 11)
# Link:      https://eolymp.com/problems/11
# Language:  Python 3.14
# Submitted: 2021-03-31 05:37 UTC
# Verdict:   Accepted

x = (input().split())

m = int(x[0])
n = int(x[1])
k = int(x[2])

print(m // n, end = '.')

for i in range(k):
	m = (m % n) * 10
	print(m // n, end='')
