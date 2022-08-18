#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    /*
        전화번호를 작은 것 부터 빠르게 계산하기 위해 정렬을 한다.
        
        3줄이 있다면 1 2, 1 3, 2 1, 2 3, 3 1, 3 2 이렇게 찾는 방식으로
        find는 처음부터 시작하는 것만은 찾기 힘들어서 위치가 0인것만 찾기
        
        위에껀 이전에 생각한거
        문자열로 정렬하면 정수처럼 정렬되지 않고 비슷한것 끼리 정렬되기 때문에
        1번과 2번을 비교하면 2번과 3번을 비교하는 방식으로 진행
    */
    
    sort(phone_book.begin(), phone_book.end());
    
    for(int i = 0; i < phone_book.size(); i++) {
        if (phone_book.size() - 1 == i) break;
            if (phone_book[i + 1].find(phone_book[i]) == 0) {
                answer = false;
                break;
            }
    }
    
    return answer;
}