#include <iostream>
#include <stack>

using namespace std;

int main(){
	//int�ڷ����� �����ϴ� ���� ����
	stack<int> st;
	//����(4) ����
	st.push(4);
	//�� �� ���� ��
	st.pop();
	//�� �� ���� �� ���
	printf("%d\n", st.top());
	//������ ����ִٸ� 1 �ƴϸ� 0
	printf("%d\n", st.empty());
	//���ÿ� ����Ǿ� �ִ� ������ �� ���
	printf("%d\n", st.size());
	return 0;
}
