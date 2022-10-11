#include<stdio.h>
int isPirme(int i)
{
	int ret = 1;
	int k;
	for (k = 2; k < i - 1;k++) {
		if (i % k == 0) {
			ret = 0;
			break;
		}
	}

}
int main(viod)
{
	int m, n;
	int sum = 0;
	int cnt = 0;
	int i;
	scanf_s("%d %d", &m,&n);
	if (m == 1)  m = 2;
	for (i = m; i <= n; i++) {
		if (isPirme(1)) {
			sum += i;
			cnt++;
		}
		

	}
	return 0;




}