#include<stdio.h>
#include<iostream>
#include<string>




using namespace std;

const int SIZE = 20;






void func1(void){
	char address[SIZE];
	char name[SIZE];
	
	
	cout << "�̸� : ";
	cin >> name;
	
	cout << "���� : ";
	cin >> address;
	// ���� ���������� �޴´�. ~ �پ�� �Ұ� / �پ�� �� ������ �����ִ� ���۰��� ����. 
	
	cout << address << "::" << name << endl;
	// printf�� �޸� ���������ڴ� �ʿ����. 
	
	return;
} 
void func2(void){
	char address[SIZE];
	char name[SIZE];

	cout << "name : ";
	cin.get(name, SIZE).get();
	// cin ��ü�� ���� �����̽��� ���� ���� ���ڵ� ��� ���ڿ��� �νĹ��� �� �ִ�.
	// �̸� ������ ����ϱ� ���ؼ��� cin ��ü�� get �޼ҵ带 ����ؾ� �Ѵ�. 
	
	cout << "city : ";
	cin.get(address, SIZE).get();
	
	cout << address << ";;" << name << endl;
	
	return;
} 
void func3(void){
	char address[SIZE];
	char name[SIZE];

	cout << "name : ";
	cin.get(name, SIZE).ignore(SIZE, '\n');
	// ignore �޼ҵ带 �̿��ϸ� �־��� ����� �Ѵ� ��Ʈ���� �����Ѵ�. 
	
	cout << "city : ";
	cin.get(address, SIZE).ignore(SIZE, '\n');
	
	cout << address << ";;" << name << endl;
	
	return;
} 
// ������ 2�� 3�̶� �� ���� �����. 

void func4(void){
	string address, name;
	
	cout << "name : ";
	getline(cin, name);
	
	cout << "city : ";
	getline(cin, address);
	// #include<string>
	// ��Ʈ�� Ŭ������ �̿��ϸ� ũ�⸦ ������ �ʿ� ���� getline�� ���� ���� ���ڿ��� ���� �� �ִ�.
	// ���͸� ������ ���鿭���� ���� 
	
	
	cout << address << "::" << name;
	
	return; 
} 
// �̰͵� ����µ�? �ù߷õ� 






int main(void){
	
//	func1();
//	func2();
	func3(); 
	
	return 0;
}
