#!/usr/bin/python3

# Finds the largest palindrome made from the
# product of two 3-digit numbers

def is_palindrome(n):
	n = str(n)
	return n == n[::-1]

n = m = 100
max = n*m
while (n <= 999):
	m = 100
	while (m <= 999):
		if is_palindrome(n*m) and n*m > max:
			max = n*m
			n_max = n
			m_max = m
		m += 1
	n += 1

# the loop checks for 900 * 900 times
print("max = ", max)
print("n_max = ", n_max)
print("m_max = ", m_max)		
