// C++���� ���ڿ��� ĳ���� �迭 �� �ƴ϶�,
// string Ŭ������ ó���� �� �ִ�. 
// �翬�� ���� �޼ҵ尡 �����Ѵ�.

#include<string> 
#include<iostream>


using namespace std;
// �� �κ��� ������ cout �� �ƴ϶�, string���� ������ ���. 



int main(void){
	string str1 = "string";
	string str2;
	string str3, str4; 
	str2 = "asdsdfgdh";
	// ���� ũ�⸦ ���������� �ʾƵ� �ʱ�ȭ ������ �����Ӵ�. 

	cout << str1 << str2 << endl;
	// cout�� ���̽�� �޸� ���̿� �ڵ����� ������ ���� �ʴ´�. 
	
	
	cout << str1 << "  " << str1.length() << endl;
	cout << str2 << "  " << str2.length() << endl;
	// ���� ���� ũ�Ⱑ �����Ǹ�,
	// ���̴� ������ �ι��ڸ� ������, ������ ���ڼ��� ���´�. 
	
	cout << str1 << "  " << str1.size() << endl;
	cout << str2 << "  " << str2.size() << endl;
	// length�� ���� ���� ������ �ǹ̰� �ٸ���.
	// ���ڿ��� ���̰� �ƴ�, ��� ���� �޸� ũ�⸦ ��ȯ  
	

/*	
	cout << "str 3 : ";
	getline(cin, str3);
	
	cout << "str 4 : ";
	getline(cin, str4);
	
	
	cout << str3 << "  " << str4 << endl;
	// string Ŭ������ �̿��ϸ� �Է¹޴µ� ���� ��� ũ�� ���� ���� ���� ���ϴ�. 
*/	
	
	str1.append("xyz");				// �ڿ� ���� 
	cout << str1 << endl;  
	
	str1.append("xyzxyz", 2);		// �ڿ� ���̴µ� �Է� ���ڿ� �� 2 ��° ���ڱ����� ����. 
	cout << str1 << endl; 
	
	
	
	
	cout << str1.find('x') << endl;
	cout << str1.find("tr") << endl;
	// �ش� ���ڿ��� ��ġ �ε��� ��ȯ 
	// ã�Ƶ� ���� �ÿ��� string::npos ��� ��ȯ 
	
	
	cout << str1.compare(str2) << endl;
	// strcmp�� ���� �����
	// ���� ��� 0, �Էº��� ���� ������ ���� ��� -1, �ݴ� 1 
	
	
	
	
	
	// replace(��ü�� ���ڿ��� ���� ��ġ, ��ü�� ����, �� ���ڿ�)
	
	string::size_type index = str1.find("ing");
	if(index != string::npos) str1.replace(index, 2, "gniii");
	// �ش� ��ġ�� 2���ڸ� ���ְ� gniii�� �ִ´�. 
	
	cout << str1 << endl; 
	
	
	return 0;
}




















