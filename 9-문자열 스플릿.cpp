#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;


int main(){
	string str = "asd zxc asdasd zxczxc\nasj";
	istringstream ss(str);
	/*
	- istringstream�� sstream �� include�� ����� �� �ִ� stream class�̴�. => include<sstream> ���ٰ�
	* ������ �����ڸ� istringstream�� ���ڿ��� �����س��� �۾��̴�.  ���⼭�� �Է½�Ʈ������ ����Ѵ�. 
	*/
	string strbuf;
	vector<string> x;
	/*
	<vector> ��������� �߰��ؾ��մϴ�.
	using namespace std; �� ���ָ� ���մϴ�.
	vector�� ������ - vector<[data type]> [�����̸�] �Դϴ�.
	ex) vector<int> v;
	
	api ��� ���� : https://blockdmask.tistory.com/70
	*/
	x.clear();
	
	cout << "���ø� ...\n";

	while( getline(ss, strbuf, '\n') ){
	// istringstream ��ü�� ��ü������ ���ø��� �����ϳ�,
	// Ư�� ���� ���ڿ� ���� ���ø� �ϰ� �ʹٸ� getline�� ���� ���� Ȯ���ϴ�. 
		x.push_back(strbuf);
		// v.push_back() ~ ������ ���� ���Ҹ� �߰��Ѵ�. 
		cout << strbuf << " ";
	} 
	
	cout << "\nvector : \n";
	for(int i = 0; i < x.size(); i++){
		cout << x[i] << endl;
	}


/*
	while(ss >> strbuf){	// NULL�� ���� ������ �ݺ��Ѵ�. 
		cout << strbuf << endl;
	}
	// ���� ���� �ϴ� ������ ����.
	// �̿� ���� istringstream�� ��ü������ ���ø��� �����Ѵٰ� ������ �� �ִ�. 
	// ��, ���� ���� �� ���, �������� ���еǴ� ��� ���ڿ��� ���ø� �ȴ�. 
*/
	return 0;
}
