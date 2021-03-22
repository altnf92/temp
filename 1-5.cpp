/*
C++ 범위 지정 연산자 ~ 가장 우선 순위가 높은 연산자
여러 범위에서 사용된 식별자를 구분하는데 사용하는 연산자.

문법 :
::식별자
클래스 이름::식별자
네임스페이스::식별자
열거체::식별자 
*/




/*
동적 할당 : C언어처럼 malloc 계열 함수를 쓸 수 있지만, C++은 new 키워드를 제공한다.  
*/


#include<iostream>

using namespace std;

int main(){
	int* ptr1 = new int;
	*ptr1 = 100;
	// 배열은 아직 모르겠으나, 변수 하나에 대한 할당(구조체)는 new를 통해 해결 가능 
	
	double* ptr2 = new double;
	*ptr2 = 100.123;
	
	
	cout << "int형 숫자의 값은 " << *ptr1 << "입니다." << endl;
	cout << "int형 숫자의 메모리 주소는 " << ptr1 << "입니다." << endl;
 

	cout << "double형 숫자의 값은 " << *ptr2 << "입니다." << endl;
	cout << "double형 숫자의 메모리 주소는 " << ptr2 << "입니다." << endl;
 

	delete ptr1;
	delete ptr2;
	// malloc의 free처럼 delete 키워드를 통해 공간을 지워줘야... 
	
	return 0;
} 
