// Problem: PRIME1
// http://www.spoj.com/problems/PRIME1/
#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);

	int m_arr[t];
	int n_arr[t];

	int case = 0;
	while (case < t) {
		int m;
		int n;
		scanf("%d %d", &m, &n);
		m_arr[case] = m;
		n_arr[case] = n;
		case++;
	}

	for (int i=0; i<t; i++) {
		for (int j=m_arr[i]; j<n_arr[i]; j++) {
			
		}
		printf("\n");
	}

	return 0;
}
