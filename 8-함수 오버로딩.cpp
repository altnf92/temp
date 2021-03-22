// 함수 오버로딩 func overloading
// 같은 함수를 다른 인수로 중복 정의 

#include<iostream>
#include<string>

using namespace std;


void func(int x){
	cout << x << endl;
}

void func(int x, int y){
	cout << x * y << endl;
}

void func(string x){
	cout << "string : " << x << endl;
}



int main(){
	func(5);
	func(3, 4);
	func("asjdio");
	
	return 0;
}
