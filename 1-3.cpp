#include<iostream>

int main(){
	
	auto a = 1;
	auto b = 5.0;
	// ���� �ʱ�ȭ ������ ���Ͽ�, auto Ű����� ������ ���� �ʱ�ȭ ���� ���� �߷��Ѵ�. 
	
	const int cnst = 1;
	/*
	�⺻������ #define�� ���������� ����� ����� ����
	�׷��� ���� ���� c����� �������� const ����� ����ȴ�.
	������ ������ ����.
	
	1. ����� Ÿ���� ���������� ������ �� �ֽ��ϴ�.
	2. ����ü�� ���� ������ ����� ���� Ÿ�Կ��� ����� �� �ֽ��ϴ�.
	3. �ش� �ɺ��� ����� Ư�� �Լ��� ���Ͽ����� ����� �� �ֵ��� ������ �� �ֽ��ϴ�.
	*/ 
	
	std::cout << sizeof(a) << ", " << sizeof(b) << std::endl;
	// 4, 8 ~ ��Ʈ���� ������ 
	
	return 0;
} 