#include <iostream>
#include <vector>

using namespace std;

int main(){
	//int �ڷ����� �����ϴ� �����迭
	vector<int> vec1;
	//double �ڷ����� �����ϴ� �����迭 
	vector<double> vec2;
	//����ڰ� ������ Node ����ü�� �����ϴ� �����迭
	vector<Node> vec3;
	//������ �ʱ� ũ�⸦ n���� ����
	vector<int> vec4(n);
	//������ �ʱ� ũ�⸦ n���� �����ϰ� 1�� �ʱ�ȭ
	vector<int> vec5(n, 1);
	//ũ�Ⱑ n*m�� 2���� ���͸� �����ϰ� 0���� �ʱ�ȭ
	vector<vector<int> > vec6(n, vector<int>(m, 0));
	//������ �� �ڿ� ����(5) �߰�
	vec1.push_back(5);
	//������ �� �� ���� ����
	vec1.pop_back();
	//������ ũ�� ���
	printf("%d\n", vec1.size());
	//������ ũ�⸦ n���� �缳��
	vec1.resize(n);
	//������ ��� ���� ����
	vec1.clear();
	//������ ù ������ �ּ�, ������ ������ ���� �ּ� ����
	vec1.begin();
	vec1.end();
	//[a, b) �ּ� ������ �ش��ϴ� ���� ����
	vec1.erase(vec1.begin(), vec1.end());//��� ���� ����
	//vec7�� vec1�� 2��° ���Һ��� ������ ���ұ��� �����Ͽ� ����
	vector<int> vec7=vector<int>(vec1.begin()+2, vec1.end());
	return 0;
}

