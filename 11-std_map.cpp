#include <map>
#include <iostream>



std::map<std::string, int> map1;
/*
첫 번째 인자는 key, 두 번째 인자는 value.
map 클래스는 키가 있다면 vector처럼 랜덤 엑세스가 가능하며, 실행중에 동적으로 크기가 확장.
iterator 지원. 
*/



int main(void){


	


	//  map에 아이템을 추가하는 방법
	
	// 1. insert 함수와 std::pair를 사용한다.
	map1.insert( std::pair<std::string, int>("1", 2) );
	// 2. operator []를 이용
	map1["2"] = 3;

	
	
	// map에서 아이템을 가져오는 방법
	
	// 1. []
	auto x1 = map1["1"];
	// 2. at 함수
	auto x2 = map1.at("2");
	
	
	std::cout << x1 << "   " << x2 << std::endl;
	// value 
	
	
	auto x3 = map1.find("1");
	std::cout << x3->first << "     " << x3->second << std::endl;
	x3++;
	std::cout << x3->first << "     " << x3->second << std::endl;
	// 1   2
	// 2   3
	// 결과는 위와 같이 나온다. 이를 통해서 알 수 있는 점은 find는 해당 키값에서의 iterator를 반환하며,
	// iterator는 요소가 추가된 순서에 맞춰 순회를 돈다.
	// x3->first 페어의 첫 요소 ..	 
	
	
	
	
	// 지우는 법
	// 1. 알고 있는 키값을 바로 사용
	map1.erase("1");					// key 값을 통해 삭제하는 방식 
	// 2. find 함수 사용 
	map1.erase(map1.find("2"));			// iterator를 통해 삭제하는 방식 
	// ~> find 함수는 이터레이터를 반환한다. 
	 
	
	return 0;
}


