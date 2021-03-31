# Problem:   The Minimal Sum of Digits (eolymp 141)
# Link:      https://eolymp.com/problems/141
# Language:  Python 3.11 (PyPy)
# Submitted: 2021-03-31 05:28 UTC
# Verdict:   Accepted

def func (x) :
	summa = 0
	while x > 0:
		summa += (x % 10)
		x = (x // 10)
	return summa

x = (input().split())

m = int(x[0])
n = int(x[1])
# print(m, n)

cnt = 0

minni = func(m)
for i in range(m, n + 1):
	minni = min(minni, func(i))
	
for i in range(m, n + 1):
	if minni == func(i): cnt += 1

print(cnt)
