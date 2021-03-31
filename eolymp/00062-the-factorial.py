# Problem:   The Factorial (eolymp 62)
# Link:      https://eolymp.com/problems/62
# Language:  Python 3.14
# Submitted: 2021-03-31 05:18 UTC
# Verdict:   Accepted

def f(n):
	i = 1
	qwe = 1
	while n > qwe:
		i += 1
		qwe *= i
	return i

n = int(input())
print(f(n))
