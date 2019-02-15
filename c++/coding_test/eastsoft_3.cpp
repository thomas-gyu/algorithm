#include <iostream>

using namespace std;

int N = 5;

char state[5][6] = {
	{"X...."},
	{".X..."},
	{"..O.."},
	{"...X."},
	{"....."},
};

int start_x, start_y;
int ans = 0;


void findTarget() {
	bool isFinded = false;
	for (int i = 0; i < 6; i++){
		if (isFinded) break;
		for (int j = 0; j < 6; j++){
			if(state[i][j] == 'O') {
				start_x = i, start_y = j;
				break;
			} 
		}
	}
}

void dfs(int x, int y, int cnt) {
	
	if ( x <= 1 || (y <= 1 && y >= N - 2) || 
		((state[x-2][y-2] != '.' || state[x-1][y-1] != 'X') &&
		(state[x-2][y+2] != '.' || state[x-1][y+1] != 'X'))
	) {
		ans = ( ans >= cnt ) ? ans : cnt;
		return;
	}
	
	
	if ( state[x-1][y-1] == 'X' || state[x-2][y-2] == '.') {
		dfs(x-2, y-2, cnt++);
	}
	if ( state[x-1][y+1] == 'X' || state[x-2][y+2] == '.') {
		dfs(x-2, y+2, cnt++);
	}
	
	
}


int main(){
	
	findTarget();
	
	dfs(start_x, start_y, 0);
	
	printf("%d", ans);
	
	return 0;
}
