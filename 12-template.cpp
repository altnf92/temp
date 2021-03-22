#include <set>
#include <iostream>
#include <string>


using namespace std; 



// set�� template�� �Բ� ���̴� ��쵵 �����Ƿ� ¤�� �Ѿ��. 





template <typename T>
//template <class X>		// �� �κ��� �ּ� ó������ ������  ������ �����.
 
// template�� ������ �ڷ����� �ָ��� ä�� �δ� ���̴�.
// ���� �Լ��� ���, ������ ��Ȯ�ϳ� ���� �Է��� ���� �� �� ��,
// ������ ������δ� �����ε��� �� ���� ���� ���̳�,
// ���ø��� ���� �ָ��� ä�� �� ���� �ִ�.

// typename�� class�� ����� ���̴� ����.
// typename�� �ַ� ��ø Ÿ���� ����� �� ����. 


// ����
/*
template <class identifier> function_declaration;
template <typename identifier> function_declaration;

���ø� �ϳ� �� �Լ� �ϳ���� �����ϴ� �� ���ϴ�. 
*/ 


T sum(T x, T y){
	return x+y;
}



int main(void){
	int a=1;
	int b=2;
	
	double c=2.2;
	double d=3.3;
	
	string e = "asd asd";
	string f = "xcv xcv";
	
	cout << "int   " << sum<int>(a, b) << endl;
	cout << "double   " << sum<double>(c, d) << endl;
	cout << "string   " << sum<string>(e, f) << endl;
	// string ��ü�� ������ ���ڿ� ���̱� �������� �̷������ �� �� �ִ�. 
	
	cout << sum(a, b) << endl; 
//	cout << sum(a, c) << endl; 
	// template �Լ��� ȣ���� ���� <> �ȿ� � �ڷ����� �� ������ Ȯ���� ǥ�����ִ� �� ����. ǥ������ �ʾƵ� ������ �Ѵ�. 
	// �ּ� ó���� �κ��� �������� �ʴµ�, �̸� ���� �� �� �ִ� ���� ���ø� T�� �ϳ��� �ڷ����� ���� �� �ִ�.
	// �� �ڷ����� ȥ���ؼ� ����ϰ� �ʹٸ� ���ø��� �� �� �����ؾ� �Ѵ�. 
	
	string g = e + f;
	cout << g << endl;
	// ������ ���ڿ� ���̱� �� �� �׳� ���ص� �� ��. 
		
	
	return 0;
}






