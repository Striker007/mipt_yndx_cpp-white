#include <iostream>
#include <vector>

using namespace std;

bool IsPalindrom2(string x) {
	if(x.length() == 1){
		return true;
	}

	for (unsigned int i = 0; i < x.length() / 2; ++i) {
        if(x[i] != x[x.length()-1-i]){
        	return false;
        }
	}
	return true;
}

vector<string> PalindromFilter(vector<string> words, unsigned int minLength ) {
	vector<string> result = {};
	for(auto word : words) {
		if (word.length() < minLength) {
			continue;
		}
		if(IsPalindrom2(word)) {
		    result.push_back(word);
		}
	}
	return result;
}
