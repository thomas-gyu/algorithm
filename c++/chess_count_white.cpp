#include <iostream>
#include <cstdio>

using namespace std;

//���� Ǯ�� 
//#include <string>
//int main(){
//	int size = 8; // 8x8 ü����
//	int cnt = 0; // �Ͼ�� ĭ���� �ִ� ���� �� 
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
