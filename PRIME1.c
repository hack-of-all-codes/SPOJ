// Problem: PRIME1 - Prime Generator
// http://www.spoj.com/problems/PRIME1/
#include <stdio.h>

int isPrime(unsigned long n) {
	if (n < 2) {
		return 0;
	}
	if (n == 2 || n == 3) {
		return 1;
	}
	unsigned long i = 4;
	while (i < n) {
		if (n%4 == 0) {
			return 0;
		}
		i++;
	}
	return 1;
}

int main(void) {
	int t;
	scanf("%d\n", &t);

	unsigned long m_arr[t];
	unsigned long n_arr[t];

	int c = 0;
	while (c < t) {
		unsigned long m;
		unsigned long n;
		scanf("%lu %lu", &m, &n);
		m_arr[c] = m;
		n_arr[c] = n;
		c++;
	}

	for (int i=0; i<t; i++) {
		for (unsigned long j=m_arr[i]; j<n_arr[i]; j++) {
			if (isPrime(j)) {
				printf("%lu\n", j);
			}
		}
		printf("\n");
	}

	return 0;
}
