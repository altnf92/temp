#include<iostream>

using namespace std;




typedef double (*FP) (double, double); 
// �Լ� �����͸� ����� ��, ��ó�� ��ũ�θ� ���� FP�� ���� �� �ִ�.
// �ٸ� ������� �޸� �Լ� �����ʹ� ����� ��� ������ ��ũ�θ� ���� �� ����. 


double add(double num1, double num2){return num1 + num2;}
double sub(double num1, double num2){return num1 - num2;}
double mul(double num1, double num2){return num1 * num2;}
double div(double num1, double num2){return num1 / num2;}

/*
double calculator(double num1, double num2, double (*func)(double, double)){
	return func(num1, num2);
}	// ���� ���� �Է����� �Լ� �����͸� �־��� �� ������� �������� �Ѵ�. 
*/
double calculator(double num1, double num2, FP fp){
	return fp(num1, num2);
}	// ��ũ�θ� �̿��ϸ� ���� ���� ������� ������� �ʿ� ���� ��ũ�� ���� ������ָ� �ȴ�. 
// �Լ� �����͸� �Է����� �޾� �Լ� ������ ����Ѵ�.
// if elseó�� �ܼ��ϰ� ��ƾ�� �����ϴ� �� �̻�����,
// ��� �ڵ忡�� �Լ��� �ҷ����� ��� ��� �ϵ��ڵ����� ���̽��� ��� ���� �� ���� ��쿡 ����. 
// �Լ� �Է����� ���� ��, (�Լ��� ������ �������� �Ѱܾ� �ϱ� ������) [��ȯ�� (*�Լ�)(�Է���)] ������ �ִ´�. 



int main(void){
//	double (*calc)(double, double) = NULL;		// �Լ� ������ calc ���� ~ �ʱ�ȭ �� NULL�� �־����. 
	FP calc;
	double num1 = 3, num2 = 4, res = 0;
	
	
	calc = add;
//	calc = sub; 
//	calc = mul; 
//	calc = div;

	
	res = calculator(num1, num2, calc);
	cout << res << endl;
	
	return 0;
}










