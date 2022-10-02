#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> num;

    s += " ";

    for (int i = 0; s.size() != 0; i++) {
        num.push_back(stoi(s.substr(0, s.find(" "))));
        s.erase(0, s.find(" ") + 1);
    }

    sort(num.begin(), num.end());

    answer = to_string(num.front()) + " " + to_string(num.back());

    return answer;
}