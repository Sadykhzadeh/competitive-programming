# Problem:   Harmonic series (eolymp 10303)
# Link:      https://eolymp.com/problems/10303
# Language:  Python 3.14
# Submitted: 2021-03-31 05:22 UTC
# Verdict:   Accepted

def f(n):
	qwe = 0
	for i in range(1, n + 1):
		qwe += 1 / i
	return qwe

n = int(input())
print(round(f(n), 4))
