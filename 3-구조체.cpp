#include<iostream>
#include<string>

using namespace std;


struct node{
	int x;
	int y;
	string z;
};
// c������ �޸�, c++������ ��ü ���� �� struct Ű���带 ������ �� �ִ�.
// �̷� ������ �ۼ��ص� typedef�� ����� ȿ���� ���� �� �ִٴ� ��. 
 
 
 int main(void){
 	node x1 = {5, 5, "string"};
	// c++������ ����ü �ʱ�ȭ�� �� ��, ����� ������ �����ϴ� �� �ƴ�, ��� ������ �߰�ȣ �ʱ�ȭ�� �����ϴ�.
 	
 	
 	cout << x1.x << " " << x1.y << " " << x1.z << endl;
 	
 	
 	return 0;
 } 
