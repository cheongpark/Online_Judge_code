#include <string>
#include <algorithm>
#include <vector>
#include <cmath>

#define BINARY 3

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector<int> binary3;
    
    /*
        10진법을 3으로 나눈 나머지를 벡터에 넣기
        3진법으로 바뀐 벡터를 반대로 reverse로
        3에 각 자리값을 제곱한 후 그 자리의 수와 곱해서 계속 더한다.
        그리고 출력
    */
    
        
    //10진수를 3진수으로 변경
    while(n != 0) {
        binary3.push_back(n % BINARY);
        n /= BINARY;
    }
    
    //3진수를 반대로
    reverse(binary3.begin(), binary3.end());
    
    //3진수를 10진수로
    for(int i = 0; i < binary3.size(); i++)
        answer += binary3[i] * pow(BINARY, i);
    
    return answer;
}