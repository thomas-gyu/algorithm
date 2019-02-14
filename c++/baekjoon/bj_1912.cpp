#include <iostream>
#include <algorithm>

using namespace std;



int main(){
	int N; 
	int arr[100001] = {0};
	int dp[100001] = {0};
	scanf("%d", &N);
	
	for(int i= 1; i <= N; i++)
		scanf("%d", &arr[i]);
	
	int tmp;
	tmp = dp[1] = arr[1];
	
	for (int i = 2; i <= N; i++){
		dp[i] = max(arr[i], dp[i-1] + arr[i]);
		tmp = max(tmp, dp[i]);
		
	}	
	
	
	printf("%d\n", tmp);
	
	return 0;
}
