// C++에는 문자열을 캐릭터 배열 뿐 아니라,
// string 클래스로 처리할 수 있다. 
// 당연히 전용 메소드가 존재한다.

#include<string> 
#include<iostream>


using namespace std;
// 이 부분이 없으면 cout 뿐 아니라, string에도 에러가 뜬다. 



int main(void){
	string str1 = "string";
	string str2;
	string str3, str4; 
	str2 = "asdsdfgdh";
	// 변수 크기를 지정해주지 않아도 초기화 시점이 자유롭다. 

	cout << str1 << str2 << endl;
	// cout은 파이썬과 달리 사이에 자동으로 공백을 넣지 않는다. 
	
	
	cout << str1 << "  " << str1.length() << endl;
	cout << str2 << "  " << str2.length() << endl;
	// 선언에 맞춰 크기가 조정되며,
	// 길이는 마지막 널문자를 제외한, 순수한 글자수가 나온다. 
	
	cout << str1 << "  " << str1.size() << endl;
	cout << str2 << "  " << str2.size() << endl;
	// length와 같은 값을 뱉지만 의미가 다르다.
	// 문자열의 길이가 아닌, 사용 중인 메모리 크기를 반환  
	

/*	
	cout << "str 3 : ";
	getline(cin, str3);
	
	cout << "str 4 : ";
	getline(cin, str4);
	
	
	cout << str3 << "  " << str4 << endl;
	// string 클래스를 이용하면 입력받는데 쓰는 경우 크기 제약 없이 쓰기 편하다. 
*/	
	
	str1.append("xyz");				// 뒤에 붙임 
	cout << str1 << endl;  
	
	str1.append("xyzxyz", 2);		// 뒤에 붙이는데 입력 문자열 중 2 번째 글자까지만 붙임. 
	cout << str1 << endl; 
	
	
	
	
	cout << str1.find('x') << endl;
	cout << str1.find("tr") << endl;
	// 해당 문자열의 위치 인덱스 반환 
	// 찾아도 없을 시에는 string::npos 상수 반환 
	
	
	cout << str1.compare(str2) << endl;
	// strcmp랑 거의 비슷함
	// 같을 경우 0, 입력보다 스펠 순서가 빠른 경우 -1, 반대 1 
	
	
	
	
	
	// replace(대체할 문자열의 시작 위치, 대체할 길이, 새 문자열)
	
	string::size_type index = str1.find("ing");
	if(index != string::npos) str1.replace(index, 2, "gniii");
	// 해당 위치에 2글자를 없애고 gniii를 넣는다. 
	
	cout << str1 << endl; 
	
	
	return 0;
}




















