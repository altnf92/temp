#include<iostream>

using namespace std;




typedef double (*FP) (double, double); 
// 함수 포인터를 사용할 시, 위처럼 메크로를 통해 FP로 줄일 수 있다.
// 다른 변수들과 달리 함수 포인터는 입출력 명시 때문에 메크로를 쓰는 게 좋다. 


double add(double num1, double num2){return num1 + num2;}
double sub(double num1, double num2){return num1 - num2;}
double mul(double num1, double num2){return num1 * num2;}
double div(double num1, double num2){return num1 / num2;}

/*
double calculator(double num1, double num2, double (*func)(double, double)){
	return func(num1, num2);
}	// 위와 같이 입력으로 함수 포인터를 넣어줄 시 입출력을 명시해줘야 한다. 
*/
double calculator(double num1, double num2, FP fp){
	return fp(num1, num2);
}	// 메크로를 이용하면 위와 같이 입출력을 명시해줄 필요 없이 메크로 형만 명시해주면 된다. 
// 함수 포인터를 입력으로 받아 함수 내에서 사용한다.
// if else처럼 단순하게 루틴을 분지하는 것 이상으로,
// 모듈 코드에서 함수를 불러오는 경우 등등 하드코딩으로 케이스를 모두 정할 수 없는 경우에 쓴다. 
// 함수 입력형식 선언 시, (함수는 포인터 형식으로 넘겨야 하기 때문에) [반환형 (*함수)(입력형)] 식으로 넣는다. 



int main(void){
//	double (*calc)(double, double) = NULL;		// 함수 포인터 calc 선언 ~ 초기화 시 NULL을 넣어두자. 
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










