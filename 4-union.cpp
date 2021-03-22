#include<iostream>

using namespace std;



union Sh{
	unsigned char a;
	unsigned short b;
	unsigned int c;	
};
// 유니온과 구조체는 엄연히 다르다.
// 유니온은 구조체와 달리 사용할 멤버들을 하나의 틀 안에 묶어주는 게 아니다.
// 오히려 자바의 오버라이드처럼, 해당 변수가 받아야할 자료형이 뭔지 애매할 때 쓰는 것이다.
// 기능에 대해 설명하자면, 유니온은 멤버 중 가장 큰 메모리 크기로 초기화가 되며,
// 나머지 멤버들은 이 공간을 공유하게 된다.
// 즉, c에 핵스 배열을 넣으면 각각의 멤버는 자신의 자료형에 맞게 해석할 것이다. 



int main(void){
	Sh x;
	
	x.c = 0x12345678;
	
	
	cout << hex;				// hex 형으로 출력 
	cout << x.a << endl;		// x
	cout << x.b << endl;		// 1234
	cout << x.c << endl;		// 12345678
	
	
	
	return 0;
} 
