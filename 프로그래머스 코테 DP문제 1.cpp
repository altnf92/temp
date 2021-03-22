#include <string>
#include <vector>
#include <set>          // set
#include <cmath>        // pow
#include <iostream>

using namespace std;

const int MAX_CNT = 8;
// 입력 : 기준수 N, 대상수 number
// 출력 : 대상수는 기준수 N을 몇 번 사용해야 나오는 가의 최소값

// 출력이 9부터는 -1 리턴
// 기준 수를 쓰는 경우는 우선 사칙연산, 그리고 5, 55, 555 같은 경우이다.


int solution(int N, int number) {   // N은 기준수, number는 대상수
    int answer = 0;
    int num;
    vector<set<int>> comb(MAX_CNT);
    
    
    if(N == number) return 1;
    
    // 우선 사칙연산과 겹수는 같은 루틴으로 돌리기 힘들다.
    // 겹수를 처리해줄 루틴이 필요함 ex) 5, 55, 555
    for(int i = 0; i < MAX_CNT; i++){
        num = 0;
        for(int digit = i; digit >= 0; digit--)
            num += N * pow(10, digit);
        comb[i].insert(num);
    }
    
    
    // comb[i : 0에서 MAX까지] | comb[i보다 작은 친구들] ~ i는 1부터 시작해야 한다.
    for(int i = 1; i < MAX_CNT; i++){
        for(int j = 0; j < i; j++){
            // A : comb[j]  |  B : comb[i - j - 1]
            for(const auto& a : comb[j]){
                for(const auto& b : comb[i - j - 1]){
                    comb[i].insert(a + b);
                    comb[i].insert(a - b);
                    comb[i].insert(a * b);
                    if(b != 0) comb[i].insert(a / b);
                }
            }
        }
        
        if(comb[i].find(number) != comb[i].end()) return i+1;
    }
    
    
    
    return -1;
}

