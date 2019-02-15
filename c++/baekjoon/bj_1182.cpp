#include <iostream>


using namespace std;

int n, s, ans;
int set[21];


void dfs(int idx, int sum) {
	
	if (idx == n) {
		if (sum == s) {
			ans++;
		}
		return;
	}
	
	dfs(idx + 1, sum + set[idx]);
	dfs(idx + 1, sum);
}


int main(){
	
	scanf("%d %d", &n, &s);
	
	for (int i = 0; i < n; i++){
		scanf("%d", &set[i]);
	}
	
	
	dfs(0, 0);
	
	// ��ǥ���� 0�� ��� dfs �Լ��� ó�� �����Ͽ��� �� (�ǹ̾���) ī��Ʈ�� �ö� 
	if (s == 0) ans -= 1;
	
	printf("%d", ans);
	
	return 0;
}
