// c++�� ���� ���� ������
/*
1. ���� ���� ������(scope resolution operator)
2. ��� ������ ������(pointer-to-member operator)
3. typeid ������
*/ 


/*
c++���� ���� ������� ���� �����ڴ� �ٷ� ���� ���� �������̴�.
���� :
	1. ::�ĺ���
	2. Ŭ�����̸�::�ĺ���
	3. ���ӽ����̽�::�ĺ���
	4. ����ü::�ĺ���
*/



/*
��� ������ ������(pointer-to-member operator)
C++������ ��� ������ �����ڸ� ����Ͽ� Ŭ������ ����� ����Ű�� �����͸� ������ �� �ֽ��ϴ�.

�̷��� ��� ������ �����ڴ� ������ ���� �� ���� ���°� �ֽ��ϴ�.

 

1. ������ �ǿ����ڰ� Ŭ���� Ÿ���� ��ü�� ��� : .*

2. ������ �ǿ����ڰ� Ŭ���� Ÿ���� ��ü�� ����Ű�� �������� ��� : ->*

 

C++���� ��� ������ �����ڸ� ����ϱ� ���� ������ ������ �����ϴ�.

����
1. Ŭ����Ÿ���ǰ�ü.*����̸�

2. Ŭ����Ÿ�԰�ü��������->*����̸� 
*/


/*
typeid ������
C++������ typeid �����ڸ� ����Ͽ� ��ü�� Ÿ�Կ� ���� ������ Ȯ���� �� �ֽ��ϴ�.

�̷��� typeid �����ڴ� ��Ÿ�ӿ� ��ü�� Ÿ���� �����ϴ� �� ����մϴ�.

����, ���ø����� ���ø� �Ű������� Ÿ���� ������ ���� ����մϴ�.

 

����
typeid(ǥ����)
*/





#include<iostream>


/*
auto func(auto x, auto y){
	
	return x + y;
}
*/
// ���� ���� ������ �� �� ����.
// auto Ű����� �������� ���� ���� ���� Ÿ�� �߷��� ������, ���̽�ó�� �����Ӱ� �� �� ����.
// �Լ��� ��ǲ�� �ƿ�ǲ�� ������ �������� �ϱ� ������ auto�� ��� �� �����ϵ��� �ʴ´�. 

int main(){
	auto x = 10;
	auto y = 1.5;
	// auto Ű����� ���� �� �ʱ�ȭ����� �Ѵ�. ~ �� ���� �� ����ȴ�.
		
	
	return 0;
}








