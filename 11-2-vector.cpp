#include <vector>
#include <iostream>

using namespace std;


int main(){
	
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	
	
	vector<int>::iterator iter = v.begin();
	// 백터 타입이 명시된 네임스페이스에서 iterator 타입을 호출하여 변수를 만든다.
	// 이터레이터 변수에 대입할 값은 네임스페이스 타입과 일치하는 벡터의 begin() 메소드 리턴값.
	
	
	cout << iter[3] << endl;
	// iterator는 배열처럼도 접근이 가능하다. 


	iter += 2;	
	cout << *iter << endl << endl; 
	// 이터레이터는 포인터 연산같은 방식으로 value에 접근할 수 있다. 
	// iterator에 숫자가 더해지면 그 숫자만큼 다음 칸으로 이동하여 접근한다.
	// 최초의 이터레이터는 처음 들어간 원소 10을 가리키고 있다.
	// 여기서 2가 더해지면 두 칸 뒤인 30을 가리키게 된다. 
	
	
	
	// 다음처럼 이터레이터는 언제든 초기화될 수 있으며,
	// 처음 선언한 네임스페이스와 같은 자료형의 벡터 메소드를 사용하면 된다. 
	for(iter = v.begin(); iter != v.end(); iter++){
		cout << *iter << endl;
	}
	
	
	
	return 0;
}
