#include<iostream>
#include<set>

using namespace std;


template <typename T>
void print_set(set<T>& s){
	cout << "[ ";
	for(typename set<T>::iterator itr = s.begin(); itr != s.end(); itr++){
		cout << *itr << "  ";
	}
	// typename 이 꼭 있어야함. 
	// GCC의 경우(아마 다른 컴파일러도 매한가지일 터이다), 템플릿 타입에 대한 이터레이터를 선언할 경우,
	// 반드시 제일 앞에 typename을 써줘야 한다.
	
	// set은 내부 네임스페이스에 iterator가 존재한다.
	// 저번 시간 map 이터레이터의 경우, auto it = m.begin()으로 선언했다.
	// 템플릿이 들어가지 않은 타입을 auto로 자동 선언 해주고, map의 메소드인 begin을 통해 이터레이터를 리턴 받는다. 
	 
	cout << "]\n";
} 



int main(){
	set<int> s;
	
	s.insert(10);
	s.insert(20);
	s.insert(30);
	s.insert(40);
	s.insert(50);
	s.insert(60);
	
	print_set(s);
	
	
	cout << "20은 set의 원로인가? ";
	auto itr = s.find(20);
	if(itr != s.end()){
		cout << "y\n";
	}
	else{
		cout << "n\n";
	}
	cout << "25는 set의 원로인가? ";
	itr = s.find(25);
	if(itr != s.end()){
		cout << "y\n";
	}
	else{
		cout << "n\n";
	}
	// set의 원소 여부를 확인하기 위해서는 find를 사용한다.
	// find의 경우, map과 마찬가지로 해당 위치에서의 iterator를 반환하며,
	// 원소가 없을 경우 end를 반환한다. 
	
	
	return 0;
}













