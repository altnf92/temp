// 디폴트 인수


#include<iostream>
using namespace std;

void func(int x = 4, int y = 5){
	
	cout << "x : " << x << "  y : " << y << endl;
} 
// 함수에 인수를 넣지 않을 시 위의 4와 5가 디폴트로 들어간다.
// 중요한 점은 함수를 사용할 때 x에 값을 넣고 y를 생략할 수 있지만, 
// 반대는 안 된다.
// 요점은 생략 빈도가 높다고 생각되는 변수들을 뒤로 보내야한다는 점이다. 
 
int main(){
	
	func();
	func(1, 2);
	
	return 0;
}
