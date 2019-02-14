#include <iostream>

using namespace std;


int triangle(int n){
	return n * (n + 1) /2;
}


int check(int K){
	
	int ans = 0;
	
	int cnt = 0;
	int hubo[1000] = {0};
	for(int i = 1; i <= 1000; i++){
		if (triangle(i) > K) break;
			
		hubo[i] = triangle(i);
		cnt++;
	}
	
	for (int i = 1; i <= cnt; i++){
		for (int j = 1; j <= cnt; j++){
			for (int k = 1; k <= cnt; k++){
				if (hubo[i] + hubo[j] + hubo[k] == K){
					ans = 1;
					break;
				}
			}
		}
	}
	
	
	return ans;
}


int main(){
	
	int T;
	
	scanf("%d", &T);
	
	int K;
	for (int i = 0; i < T; i++){

		scanf("%d", &K);
				
		printf("%d\n", check(K));
	}
	
	return 0;
}
