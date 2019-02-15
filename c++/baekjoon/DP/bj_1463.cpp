#include <iostream>
#include <vector>

using namespace std;

vector<int> dp;

int min(int a, int b){
	return a >= b ? b : a;
}

int makeFirst(int n){
	if (n == 0) return 0;
	if (n == 1) return 0;
	if (n == 2) return 1;
	
	if (dp[n] != -1) return dp[n];
	
	int list[3] = {0};
	
	if (n % 3 == 0) list[0] = dp[n / 3];
	
	if (n % 2 == 0) list[1] = dp[n / 2];
	
	list[2] = dp[n-1];
	
	dp[n] = min(list[0], min(list[1], list[2]));
	
	return dp[n];
}

int main() {
	
	int N;
	
	scanf("%d", &N);
	dp.resize(N + 1, -1);
	printf("%d", makeFirst(N));
	
	
	
	
	return 0;
}
