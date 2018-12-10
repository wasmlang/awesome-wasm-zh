// Copyright 2016 ChaiShushan <chaishushan{AT}gmail.com>. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int n) {
	return n? gcd(n, m%n): m;
}

int gcd_stk(int m, int n) {
	int *stk;
	int sp;
	int ret;

	stk = malloc(1024);
	sp = 0;

	// push call frame
	stk[sp+0] = 0; // return value
	stk[sp+1] = 0; // return flag
	stk[sp+2] = m; // push m
	stk[sp+3] = n; // push n
	sp = sp + 4;

	while(sp > 0) {
		m = stk[sp-2];
		n = stk[sp-1];

		if(stk[sp-3]) {
			stk[sp-4] = stk[sp]; // return gcd(n, m%n);
			sp = sp - 4;         // pop call frame
		} else if(n == 0) {
			stk[sp-4] = m;   // if(n == 0) return m;
			sp = sp - 4;     // pop call frame
		} else {
			stk[sp-3] = 1;   // parent call is in return path

			// push call frame
			stk[sp+0] = 0;   // return value
			stk[sp+1] = 0;   // return flag
			stk[sp+2] = n;   // push n
			stk[sp+3] = m%n; // push m%n
			sp = sp + 4;
		}
	}

	ret = stk[sp];
	free(stk);
	return ret;
}

int main() {
	printf("gcd(27,15): %d\n", gcd(27, 15));
	printf("gcd(12,18): %d\n", gcd(12, 18));

	printf("gcd_stk(27,15): %d\n", gcd_stk(27, 15));
	printf("gcd_stk(12,18): %d\n", gcd_stk(12, 18));

	return 0;
}
