#include <string>
#include <vector>
#include <iostream>

using namespace std;


inline int _max(int a, int b){
    return a > b ? a : b;
}


int solution(vector<vector<int>> triangle) {

    int answer = 0;
    int height = triangle.size();
    
    int solution[2][height];
    int position = 0;
        
    solution[position][0] = triangle[0][0];
    
    
    for(int i = 1; i < height; i++){
        position = position ^ 1;
        
        solution[position][0] = solution[position ^ 1][0] + triangle[i][0];
        solution[position][i] = solution[position ^ 1][i-1] + triangle[i][i];
        
        for(int j = 1; j < i; j++){
            solution[position][j] = triangle[i][j] + 
                _max(solution[position ^ 1][j - 1], solution[position ^ 1][j]);
  		}
    }
    
    
    for(int x : solution[position]){
        if(answer < x) answer = x;
	}
    cout << endl;
    
    return answer;
}
