#include <iostream>
#include <algorithm>

using namespace std;


int main(){
	
	int height[9] = {0};
	
	// æ∆»© ≥≠¿Ô¿Ã¿« ≈∞ √—«’ 
	int total = 0;
	for (int i = 0; i < 9; i++){
		scanf("%d", &height[i]);
		total += height[i];
	}
	
	
	
	bool isComplete = true;
	
	for (int i = 0; i < 8 && isComplete; i++){
		for (int j = i+1; j < 9 && isComplete; j++){
			if ((total - 100) == (height[i] + height[j])){
				isComplete = false;
				height[i] = 0;
				height[j] = 0;	
			}
		}
	}
	
	//ø¿∏ß¬˜º¯ ¡§∑ƒ 
	sort(height, height+9);
	
	for (int i = 2; i < 9; i++){
		printf("%d\n", height[i]);
	}
	
	return 0;
}
