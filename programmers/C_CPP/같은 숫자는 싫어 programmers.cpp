#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    /*
        answer 배열에 하나씩 추가하며 만약 현재 숫자가 전 숫자랑 같다면 무시하고 넘어간다
    */
    
    answer.push_back(arr[0]);
    
    for(int i = 1, j = 0; i < arr.size(); i++) {
        if(answer[j] != arr[i]) {
            answer.push_back(arr[i]);
            j++;
        }
            
    }

    return answer;
}