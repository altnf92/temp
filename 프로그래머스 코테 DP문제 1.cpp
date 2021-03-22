#include <string>
#include <vector>
#include <set>          // set
#include <cmath>        // pow
#include <iostream>

using namespace std;

const int MAX_CNT = 8;
// �Է� : ���ؼ� N, ���� number
// ��� : ������ ���ؼ� N�� �� �� ����ؾ� ������ ���� �ּҰ�

// ����� 9���ʹ� -1 ����
// ���� ���� ���� ���� �켱 ��Ģ����, �׸��� 5, 55, 555 ���� ����̴�.


int solution(int N, int number) {   // N�� ���ؼ�, number�� ����
    int answer = 0;
    int num;
    vector<set<int>> comb(MAX_CNT);
    
    
    if(N == number) return 1;
    
    // �켱 ��Ģ����� ����� ���� ��ƾ���� ������ �����.
    // ����� ó������ ��ƾ�� �ʿ��� ex) 5, 55, 555
    for(int i = 0; i < MAX_CNT; i++){
        num = 0;
        for(int digit = i; digit >= 0; digit--)
            num += N * pow(10, digit);
        comb[i].insert(num);
    }
    
    
    // comb[i : 0���� MAX����] | comb[i���� ���� ģ����] ~ i�� 1���� �����ؾ� �Ѵ�.
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

