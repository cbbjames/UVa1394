#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main() {
	int n, k, m;
	int f[10010];
	while (cin >> n >> k >> m&&n) {
		f[1] = 0;
		for (int i = 2; i <= n; i++) f[i] = (f[i - 1] + k) % i;
		int ans = (m - k + 1 + f[n]) % n;
		if (ans <= 0) ans += n;
		cout << ans << endl;
	}
	//system("PAUSE");
	return 0;
}