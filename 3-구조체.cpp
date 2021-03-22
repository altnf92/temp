#include<iostream>
#include<string>

using namespace std;


struct node{
	int x;
	int y;
	string z;
};
// c언어에서와 달리, c++에서는 객체 선언 시 struct 키워드를 생략할 수 있다.
// 이런 식으로 작성해도 typedef와 비슷한 효과를 얻을 수 있다는 것. 
 
 
 int main(void){
 	node x1 = {5, 5, "string"};
	// c++에서는 구조체 초기화를 할 때, 멤버를 일일이 참조하는 게 아닌, 멤버 순으로 중괄호 초기화가 가능하다.
 	
 	
 	cout << x1.x << " " << x1.y << " " << x1.z << endl;
 	
 	
 	return 0;
 } 
