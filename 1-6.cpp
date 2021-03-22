#include<stdio.h>
#include<iostream>
#include<string>




using namespace std;

const int SIZE = 20;






void func1(void){
	char address[SIZE];
	char name[SIZE];
	
	
	cout << "이름 : ";
	cin >> name;
	
	cout << "도시 : ";
	cin >> address;
	// 공백 이전까지만 받는다. ~ 뛰어쓰기 불가 / 뛰어쓰기 시 이전에 남아있던 버퍼값이 읽힘. 
	
	cout << address << "::" << name << endl;
	// printf와 달리 형식지정자는 필요없다. 
	
	return;
} 
void func2(void){
	char address[SIZE];
	char name[SIZE];

	cout << "name : ";
	cin.get(name, SIZE).get();
	// cin 객체는 본디 스페이스바 등의 공백 문자도 모두 문자열로 인식받을 수 있다.
	// 이를 온전히 사용하기 위해서는 cin 객체의 get 메소드를 사용해야 한다. 
	
	cout << "city : ";
	cin.get(address, SIZE).get();
	
	cout << address << ";;" << name << endl;
	
	return;
} 
void func3(void){
	char address[SIZE];
	char name[SIZE];

	cout << "name : ";
	cin.get(name, SIZE).ignore(SIZE, '\n');
	// ignore 메소드를 이용하면 주어진 사이즈를 넘는 스트링은 무시한다. 
	
	cout << "city : ";
	cin.get(address, SIZE).ignore(SIZE, '\n');
	
	cout << address << ";;" << name << endl;
	
	return;
} 
// 솔직히 2랑 3이랑 별 차이 없어보임. 

void func4(void){
	string address, name;
	
	cout << "name : ";
	getline(cin, name);
	
	cout << "city : ";
	getline(cin, address);
	// #include<string>
	// 스트링 클래스를 이용하면 크기를 지정할 필요 없이 getline을 통해 쉽게 문자열을 받을 수 있다.
	// 엔터를 제외한 공백열까지 포함 
	
	
	cout << address << "::" << name;
	
	return; 
} 
// 이것도 끊기는데? 시발련들 






int main(void){
	
//	func1();
//	func2();
	func3(); 
	
	return 0;
}
