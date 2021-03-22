#include <string>
#include <vector>
#include <set>          // set
#include <cmath>        // pow
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

// �Է� : ���ؼ� N, ���� number
// ��� : ������ ���ؼ� N�� �� �� ����ؾ� ������ ���� �ּҰ�

// ����� 9���ʹ� -1 ����
// ���� ���� ���� ���� �켱 ��Ģ����, �׸��� 5, 55, 555 ���� ����̴�.


int solution(int N, int number) {   // N�� ���ؼ�, number�� ����
    int answer = 0;
    
    vector<set<int>> comb(8);       // ������ 8�� �ѱ�� -1 ���
    for(int i = 0; i < 8; i++){     // 10 ��� ���� comb�� �ִ� ����
        int n = 0;
        int digit = i + 1;          // �Ʒ� ���ǿ��� --�� ���ֱ� ������ 1 �����ش�.
                                    // digit�� 10�� �������� �ǹ��Ѵ�.
        while(digit > 0){
            digit--;                
            n += N * pow(10, digit);
        }
        comb[i].insert(n);          // comb�� index�� ���ؼ��� ���� Ƚ���� �ǹ��ϰ�,
                                    // ��Ģ���� ���� 5, 55 ���� ���� ���� �ִ´�. 
    }
    
    
    // ��Ģ���� ���� ~> ��Ģ���꿡 ���� ���̽��� ��� �����ؾ� ��.
    // + *�� �޸�, - /�� ������ �߿��ϴ�. ~> for i = 0 to n-1 [ for j = n to i + 1]
    for(int i = 1; i < 8; i++){
        for(int j = 0; j < i; j++){
            // �̷��� �ϸ� comb�� �� ��� �ĺ���̼��� ���� �� �ִ�.
            // ���� comb�� ��ȸ�� ������ �ʿ��ϴ�.
            // 1. ��Ģ���� ���ݺθ� ����� comb ��ȸ : comb[i] ��ȸ
            // 2. ��Ģ���� �Ĺݺθ� ����� comb ��ȸ : comb[j] ��ȸ
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











