#include<iostream>
#include<set>

using namespace std;


template <typename T>
void print_set(set<T>& s){
	cout << "[ ";
	for(typename set<T>::iterator itr = s.begin(); itr != s.end(); itr++){
		cout << *itr << "  ";
	}
	// typename �� �� �־����. 
	// GCC�� ���(�Ƹ� �ٸ� �����Ϸ��� ���Ѱ����� ���̴�), ���ø� Ÿ�Կ� ���� ���ͷ����͸� ������ ���,
	// �ݵ�� ���� �տ� typename�� ����� �Ѵ�.
	
	// set�� ���� ���ӽ����̽��� iterator�� �����Ѵ�.
	// ���� �ð� map ���ͷ������� ���, auto it = m.begin()���� �����ߴ�.
	// ���ø��� ���� ���� Ÿ���� auto�� �ڵ� ���� ���ְ�, map�� �޼ҵ��� begin�� ���� ���ͷ����͸� ���� �޴´�. 
	 
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
	
	
	cout << "20�� set�� �����ΰ�? ";
	auto itr = s.find(20);
	if(itr != s.end()){
		cout << "y\n";
	}
	else{
		cout << "n\n";
	}
	cout << "25�� set�� �����ΰ�? ";
	itr = s.find(25);
	if(itr != s.end()){
		cout << "y\n";
	}
	else{
		cout << "n\n";
	}
	// set�� ���� ���θ� Ȯ���ϱ� ���ؼ��� find�� ����Ѵ�.
	// find�� ���, map�� ���������� �ش� ��ġ������ iterator�� ��ȯ�ϸ�,
	// ���Ұ� ���� ��� end�� ��ȯ�Ѵ�. 
	
	
	return 0;
}













