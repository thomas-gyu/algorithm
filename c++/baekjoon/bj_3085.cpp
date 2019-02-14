#include <iostream>
#include <cstdio>

using namespace std;


int N;
char board[51][51];
int ans;


int max(int a, int b) {
	return a >= b ? a :b;
}

int check(){
	
	for (int i = 0; i < N; i++){
		
		int cnt = 1;
		for (int j = 1; j < N; j++){
			
			if (board[i][j-1] == board[i][j]){
				cnt++;
			} else {
				ans = max(ans, cnt);
				cnt = 1;
			}
		}
		ans = max(ans, cnt);
	}
	
	for (int i = 0; i < N; i++){
		
		int cnt = 1;
		for (int j = 1; j < N; j++){
			
			if (board[j-1][i] == board[j][i]){
				cnt++;
			} else {
				ans = max(ans, cnt);
				cnt = 1;
			}
		}
		ans = max(ans, cnt);
	}
	
	
	
}

void change(char flag, int i, int j){
	if( flag == 'x'){
		char tmp;
		tmp = board[i][j+1];
		board[i][j+1] = board[i][j];
		board[i][j] = tmp;
	} else {
		char tmp;
		tmp = board[i+1][j];
		board[i+1][j] = board[i][j];
		board[i][j] = tmp;
	}
}


int main(){
	
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++){
		cin >> board[i];
	}
	
	
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N-1; j++){
			change('x', i, j);
			check();
			change('x', i, j);
			
			change('y', i, j);
			check();
			change('y', i, j);
		}
	}
	
	
	
	
	printf("%d", ans);
	
	return 0;
}
