#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;


int main(){
	string str = "asd zxc asdasd zxczxc\nasj";
	istringstream ss(str);
	/*
	- istringstream은 sstream 을 include해 사용할 수 있는 stream class이다. => include<sstream> 해줄것
	* 간단히 말하자면 istringstream은 문자열을 추출해내는 작업이다.  여기서는 입력스트림으로 사용한다. 
	*/
	string strbuf;
	vector<string> x;
	/*
	<vector> 헤더파일을 추가해야합니다.
	using namespace std; 를 해주면 편리합니다.
	vector의 선언은 - vector<[data type]> [변수이름] 입니다.
	ex) vector<int> v;
	
	api 등등 정리 : https://blockdmask.tistory.com/70
	*/
	x.clear();
	
	cout << "스플릿 ...\n";

	while( getline(ss, strbuf, '\n') ){
	// istringstream 객체는 자체적으로 스플릿을 지원하나,
	// 특정 공백 문자에 대해 스플릿 하고 싶다면 getline을 쓰는 것이 확실하다. 
		x.push_back(strbuf);
		// v.push_back() ~ 벡터의 끝에 원소를 추가한다. 
		cout << strbuf << " ";
	} 
	
	cout << "\nvector : \n";
	for(int i = 0; i < x.size(); i++){
		cout << x[i] << endl;
	}


/*
	while(ss >> strbuf){	// NULL이 나올 때까지 반복한다. 
		cout << strbuf << endl;
	}
	// 위의 블럭과 하는 역할은 같다.
	// 이와 같이 istringstream은 자체적으로 스플릿을 지원한다고 생각할 수 있다. 
	// 단, 위와 같이 쓸 경우, 공백으로 구분되는 모든 문자에서 스플릿 된다. 
*/
	return 0;
}
