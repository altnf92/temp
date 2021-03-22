#include <string>
#include <vector>
#include <set>          // set
#include <cmath>        // pow
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

// 입력 : 기준수 N, 대상수 number
// 출력 : 대상수는 기준수 N을 몇 번 사용해야 나오는 가의 최소값

// 출력이 9부터는 -1 리턴
// 기준 수를 쓰는 경우는 우선 사칙연산, 그리고 5, 55, 555 같은 경우이다.


int solution(int N, int number) {   // N은 기준수, number는 대상수
    int answer = 0;
    
    vector<set<int>> comb(8);       // 어차피 8을 넘기면 -1 출력
    for(int i = 0; i < 8; i++){     // 10 배수 곱을 comb에 넣는 루프
        int n = 0;
        int digit = i + 1;          // 아래 조건에서 --를 해주기 때문에 1 더해준다.
                                    // digit은 10의 제곱수를 의미한다.
        while(digit > 0){
            digit--;                
            n += N * pow(10, digit);
        }
        comb[i].insert(n);          // comb의 index는 기준수가 쓰인 횟수를 의미하고,
                                    // 사칙연산 전에 5, 55 등의 수를 먼저 넣는다. 
    }
    
    
    // 사칙연산 루프 ~> 사칙연산에 의한 케이스를 모두 정리해야 함.
    // + *와 달리, - /는 순서가 중요하다. ~> for i = 0 to n-1 [ for j = n to i + 1]
    for(int i = 1; i < 8; i++){
        for(int j = 0; j < i; j++){
            // 이렇게 하면 comb에 들어간 모든 컴비네이션을 살필 수 있다.
            // 이제 comb를 순회할 루프가 필요하다.
            // 1. 사칙연산 전반부를 담당할 comb 순회 : comb[i] 순회
            // 2. 사칙연산 후반부를 담당할 comb 순회 : comb[j] 순회
            for(const auto &a : comb[j]){
                for(const auto &b : comb[i - j - 1]){
                    comb[i].insert(a + b);
                    comb[i].insert(a - b);
                    comb[i].insert(a * b);
                    
                    if(b != 0) comb[i].insert(a / b);
                }
            }
        }
        
        if(comb[i].find(number) != comb[i].end()){
            return i+1;
        }
    }
    
    
    
    
    return -1;
}


int main(){
	
	cout << solution(5, 12) << endl;
	
	return 0;
} 

/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int get_basic_number(int N, int cnt) {
	int res = 0;

	while (cnt > 0) {
		cnt -= 1;
		res += N * pow(10, cnt);
	}

	return res;
}

int solution(int N, int number) {
	int answer = -1;

	const int MIN = 8;

	vector<set<int>> s(MIN);

	int idx = 1;

	for (int i=0; i< s.size(); i++){
		s[i].insert(get_basic_number(N, idx));
		idx += 1;
	}

	for (int i = 1; i < MIN; i++) {
		for (int j = 0; j < i; j++) {
			
			
			for (const auto & op1 : s[j]) {
				for (const auto & op2 : s[i - j - 1]) {
					s[i].insert(op1 + op2);
					s[i].insert(op1 - op2);
					s[i].insert(op1 * op2);

					if (op2 != 0)
						s[i].insert(op1 / op2);
				}
			}
			
			
		}
		if (s[i].find(number) != s[i].end()) {
			answer = i + 1;
			break;
		}
	}
	return answer;
}

int main() {
	int N, number, result;

	result = solution(5, 12);
	cout << result;
}
*/











