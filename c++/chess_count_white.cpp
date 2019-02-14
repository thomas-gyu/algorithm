#include <iostream>
#include <cstdio>

using namespace std;

//나의 풀이 
//#include <string>
//int main(){
//	int size = 8; // 8x8 체스판
//	int cnt = 0; // 하얀색 칸위에 있는 수의 갯 
//	for(int i=0; i < size; i++){
//		string row;
//		cin >> row;
//		for(int j=(i % 2); j < row.size(); j += 2){
//			if(row[j] == 'F')
//				cnt++;
//		}
//	}
//	printf("%d\n", cnt);
//	return 0;
//}

char Map[8][9];
int main(){
	for (int i = 0; i < 8; i++)
		scanf("%s", Map[i]);
	int cnt = 0;
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			if((i+j) % 2 == 0 && Map[i][j] == 'F')
				cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
