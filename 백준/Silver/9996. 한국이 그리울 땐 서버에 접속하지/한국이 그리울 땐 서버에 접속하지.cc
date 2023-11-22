#include <iostream>
#include <string>

using namespace std;

int main() {
	int num = 0, pos = 0;
	bool check = false;
	string pattern = "", text = "";
	string front = "", back = ""; 
	
	cin >> num;
	cin >> pattern;
	
	pos = pattern.find('*');
	
	front = pattern.substr(0, pos);
	back = pattern.substr(pos + 1, pattern.length());
	
	for(int i = 0; i < num; i++) {
		check = false;
		
		cin >> text;
		
		int a = text.find(front, 0);
		text.erase(0, front.length());
		
		int b = text.find(back, text.length() - back.length());
		
		if(a != 0 || (text.length() - back.length()) != b || a == -1 || b == -1)
			check = true; 
			
		cout << (check ? "NE" : "DA") << endl;
		
		//cout << " " << a << " " << b << " " << (text.length() - back.length()) << endl;
	}
}