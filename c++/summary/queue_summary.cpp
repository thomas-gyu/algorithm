#include <iostream>
#include <queue>

using namespace std;

int main(){
	//int�ڷ����� �����ϴ� ť ����
	queue<int> q;
	//����(4) ����
	q.push(4);
	//�� �� ���� ��
	q.pop();
	//�� �� ���� �� ���
	printf("%d\n", q.front());
	//ť�� ����ִٸ� 1 �ƴϸ� 0
	printf("%d\n", q.empty());
	//ť�� ����Ǿ� �ִ� ������ �� ���
	printf("%d\n", q.size());
	return 0;
}
