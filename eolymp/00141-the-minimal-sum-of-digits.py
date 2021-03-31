# Problem:   The Minimal Sum of Digits (eolymp 141)
# Link:      https://eolymp.com/problems/141
# Language:  Python 3.14
# Submitted: 2021-03-31 06:32 UTC
# Verdict:   Accepted

from math import *


def sumOfNumber (n) :
	i = 0
	while n:
		i += (n % 10)
		n //= 10
	return i

def primary_sol(m, n):
	minn = sumOfNumber(m)
	cnt = 1
	for i in range(m + 1, n + 1):
		temp = sumOfNumber(i)
		if temp < minn:
			minn = temp
			cnt = 1
		elif temp == minn:
			cnt += 1
	print(cnt)

def solve(m, n):
	i = 1
	while (m <= pow(10,i) and pow(10,i) <= n) or i != 7:
		i+=1
	if i == 7:
		primary_sol(m, n)
	else:
		cnt = 0
		for i in range(m, n + 1):
			if log10(i).is_integer():
				cnt += 1
		print(cnt)
		

string = (input().split())

m, n = int(string[0]), int(string[1])
solve(m, n)
