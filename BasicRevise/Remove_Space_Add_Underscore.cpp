#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	string temp="";
	for(int i=0; i<s.size(); i++){
		if(s[i]==' '){
			temp+='_';
			.//s[i] = '_';
		}else if(s[i]=='(' || s[i]==')' || s[i]=='.'){
			continue;
		}else{
			temp+=s[i];
		}
	} 
	
	cout << temp << endl;
	
	return 0;
}
