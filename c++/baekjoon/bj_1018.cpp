#include <iostream>

using namespace std;

int min(int a, int b){
	return a >= b ? b : a;
} 

int main() {
	
	char wb[8][9], bw[8][9];
	
	char c[2] = {'W', 'B'};
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			wb[i][j] =c[(i+j)%2];
			bw[i][j] =c[(i+j+1)%2];
		}
	}
	
	int n, m;
	
	scanf("%d %d", &n, &m);
	
	char chess[50][51] = {""};
	
	for (int i = 0; i < n; i++){
		scanf("%s", chess[i]);
	}
	
	int ans = 64;
	for (int i = 0; i < n - 7; i++){
		for (int j = 0; j < m - 7; j++){
			
			int cnt_w = 0;
			int cnt_b = 0;
			for (int k = 0; k < 8; k++){
				for (int f = 0; f < 8; f++){
					if (wb[k][f] != chess[k+i][f+j]) cnt_w++;
					if (bw[k][f] != chess[k+i][f+j]) cnt_b++;
				}
			}
			ans = min(ans, min(cnt_w, cnt_b));
			
			
		}
	}
	
	printf("%d", ans);
	
	return 0;
}

