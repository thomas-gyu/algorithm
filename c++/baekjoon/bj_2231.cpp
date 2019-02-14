#include <iostream>

using namespace std;

int main(){
	
	int N;
	scanf("%d", &N);
	
	int n = N;
	int cnt = 0;	//자릿수 
	while (n){
		n /= 10;
		cnt++;
	}
	
	
	for (n = N - 9 * cnt; n < N; n++){
		int tmp = n;
		for (int j = n; j; j /= 10) tmp += j % 10;
		
		if (tmp == N) break;
	}
	
	printf("%d", n != N ? n : 0);
	
	return 0;
}

// http://wookje.dance/2018/01/26/boj-2231-분해합/
