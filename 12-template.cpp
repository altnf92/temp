#include <set>
#include <iostream>
#include <string>


using namespace std; 



// set과 template은 함께 쓰이는 경우도 많으므로 짚고 넘어가자. 





template <typename T>
//template <class X>		// 이 부분이 주석 처리되지 않으면  에러가 생긴다.
 
// template의 요점은 자료형을 애매한 채로 두는 것이다.
// 만약 함수의 기능, 구현이 명확하나 무슨 입력을 받을 지 모를 때,
// 이전의 방식으로는 오버로딩을 할 수도 있을 것이나,
// 템플릿을 통해 애매한 채로 둘 수도 있다.

// typename과 class의 기능적 차이는 없다.
// typename은 주로 중첩 타입을 명시할 때 쓴다. 


// 사용법
/*
template <class identifier> function_declaration;
template <typename identifier> function_declaration;

템플릿 하나 당 함수 하나라고 생각하는 게 편하다. 
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
	// string 객체의 덧샘은 문자열 붙이기 형식으로 이루어짐을 알 수 있다. 
	
	cout << sum(a, b) << endl; 
//	cout << sum(a, c) << endl; 
	// template 함수를 호출할 때는 <> 안에 어떤 자료형을 쓸 것인지 확실히 표기해주는 게 좋다. 표기하지 않아도 동작은 한다. 
	// 주석 처리한 부분은 동작하지 않는데, 이를 통해 알 수 있는 것은 템플릿 T는 하나의 자료형만 가질 수 있다.
	// 두 자료형을 혼용해서 사용하고 싶다면 템플릿을 두 개 선언해야 한다. 
	
	string g = e + f;
	cout << g << endl;
	// 앞으로 문자열 붙이기 할 때 그냥 더해도 될 듯. 
		
	
	return 0;
}






