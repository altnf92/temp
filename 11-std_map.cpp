#include <map>
#include <iostream>



std::map<std::string, int> map1;
/*
ù ��° ���ڴ� key, �� ��° ���ڴ� value.
map Ŭ������ Ű�� �ִٸ� vectoró�� ���� �������� �����ϸ�, �����߿� �������� ũ�Ⱑ Ȯ��.
iterator ����. 
*/



int main(void){


	


	//  map�� �������� �߰��ϴ� ���
	
	// 1. insert �Լ��� std::pair�� ����Ѵ�.
	map1.insert( std::pair<std::string, int>("1", 2) );
	// 2. operator []�� �̿�
	map1["2"] = 3;

	
	
	// map���� �������� �������� ���
	
	// 1. []
	auto x1 = map1["1"];
	// 2. at �Լ�
	auto x2 = map1.at("2");
	
	
	std::cout << x1 << "   " << x2 << std::endl;
	// value 
	
	
	auto x3 = map1.find("1");
	std::cout << x3->first << "     " << x3->second << std::endl;
	x3++;
	std::cout << x3->first << "     " << x3->second << std::endl;
	// 1   2
	// 2   3
	// ����� ���� ���� ���´�. �̸� ���ؼ� �� �� �ִ� ���� find�� �ش� Ű�������� iterator�� ��ȯ�ϸ�,
	// iterator�� ��Ұ� �߰��� ������ ���� ��ȸ�� ����.
	// x3->first ����� ù ��� ..	 
	
	
	
	
	// ����� ��
	// 1. �˰� �ִ� Ű���� �ٷ� ���
	map1.erase("1");					// key ���� ���� �����ϴ� ��� 
	// 2. find �Լ� ��� 
	map1.erase(map1.find("2"));			// iterator�� ���� �����ϴ� ��� 
	// ~> find �Լ��� ���ͷ����͸� ��ȯ�Ѵ�. 
	 
	
	return 0;
}


