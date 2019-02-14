#include <iostream>

using namespace std;


int N, ans, a[3], b[3];
struct ABC {
	int num, st, ba;
} qry[101];  // 구조체 선언과 동시에 생성 



int main(){
	
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		scanf("%d %d %d", &qry[i].num, &qry[i].st, &qry[i].ba);
	}
	
	for (int i = 123; i <= 987; i++){
		int cnt = 0;
		a[0] = i/100, a[1] = i/10%10, a[2] = i%10;
		if (!a[1] || !a[2] || a[0] == a[1] || a[1] == a[2] || a[0] == a[2]) continue;
		for (int j = 0; j < N; j++){
			int st = 0, ba = 0, t = qry[j].num;
			b[0] = t/100, b[1] = t/10%10, b[2] = t%10;
			for (int k = 0; k < 3; k++){
				if (a[k] == b[k]) st++;
				if (a[k] == b[(k+1)%3] || a[k] == b[(k+2)%3]) ba++;
			}
			if (st == qry[j].st && ba == qry[j].ba) cnt++;
		}
		if (cnt == N) ans++;
	}
	
	printf("%d", ans);
	
	return 0;
}
