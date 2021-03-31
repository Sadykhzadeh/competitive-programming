# Problem:   Recursion - 1 (eolymp 8609)
# Link:      https://eolymp.com/problems/8609
# Language:  Python 3.14
# Submitted: 2021-03-31 06:07 UTC
# Verdict:   Accepted

def func (n, temp) :
	if n < temp: return 0
	if n == temp: return n
	return func((temp + n) // 2, temp) + func(n, (temp + n) // 2 + 1)

n = int(input())
print(func(n, 1))
