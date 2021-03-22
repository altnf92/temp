#include <vector>
#include <iostream>

using namespace std;


int main(){
	
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	
	
	vector<int>::iterator iter = v.begin();
	// ���� Ÿ���� ��õ� ���ӽ����̽����� iterator Ÿ���� ȣ���Ͽ� ������ �����.
	// ���ͷ����� ������ ������ ���� ���ӽ����̽� Ÿ�԰� ��ġ�ϴ� ������ begin() �޼ҵ� ���ϰ�.
	
	
	cout << iter[3] << endl;
	// iterator�� �迭ó���� ������ �����ϴ�. 


	iter += 2;	
	cout << *iter << endl << endl; 
	// ���ͷ����ʹ� ������ ���갰�� ������� value�� ������ �� �ִ�. 
	// iterator�� ���ڰ� �������� �� ���ڸ�ŭ ���� ĭ���� �̵��Ͽ� �����Ѵ�.
	// ������ ���ͷ����ʹ� ó�� �� ���� 10�� ����Ű�� �ִ�.
	// ���⼭ 2�� �������� �� ĭ ���� 30�� ����Ű�� �ȴ�. 
	
	
	
	// ����ó�� ���ͷ����ʹ� ������ �ʱ�ȭ�� �� ������,
	// ó�� ������ ���ӽ����̽��� ���� �ڷ����� ���� �޼ҵ带 ����ϸ� �ȴ�. 
	for(iter = v.begin(); iter != v.end(); iter++){
		cout << *iter << endl;
	}
	
	
	
	return 0;
}
