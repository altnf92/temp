#include<iostream>


/*
인라인 함수는 호출될 때 일반적인 함수의 호출 과정을 거치지 않고, 함수의 모든 코드를 호출된 자리에 바로 삽입하는 방식의 함수입니다.
이 방식은 함수를 호출하는 데 걸리는 시간은 절약되나, 함수 호출 과정으로 생기는 여러 이점을 포기하게 됩니다.
따라서 코드가 매우 적은 함수만을 인라인 함수로 선언하는 것이 좋습니다.

~> 사실상 연산자 구문이 정의된 메크로와 비슷하다고 생각된다. 
*/

using namespace std; 



inline int sub(int x, int y){return x-y;}
inline void print(int x){cout << "res : " << x << endl;}


int main(){
	
	int n1 = 5, n2 = 3;
	int res;
	
	
	res = sub(n1, n2);
	print(res);
	
	print(sub(n1, n2));	
	/*
	입출력 결과만 놓고 본다면 실제 함수와 아무런 차이가 없으나,
	실제 동작 절차를 보면 위의 구문들은 호출이 아닌, 메크로에 가깝다.
	****** 인라인 함수는 재귀 호출이 불가능하다! 

	하지만 C++의 인라인 함수는 단순 치환이 아닌 함수의 모든 코드를 호출된 자리에 인라인 코드로 삽입해 주는 것입니다.
	메크로와 달리 입출력 타입을 정의해줄 수 있으 등의 이점들을 갖는다. 
	*/
	
	return 0;
} 
