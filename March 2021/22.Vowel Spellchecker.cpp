#include<iostream>
class Solution {
public:
    string toLowercase(string &s){
	for(char& c : s) c = tolower(c);
	return s;
}
bool isVowel(char &c){
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
string maskVowel(string &s){
	for(char& c : s) if(isVowel(c)) c = '#';
	return s;
}
vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
	unordered_set original_words(begin(wordlist), end(wordlist));
	unordered_map<string, string> lowered, vowelMasked;
	string tmp;
	for(auto word = rbegin(wordlist); word != rend(wordlist); word++) 
		tmp = *word, lowered[toLowercase(tmp)] = *word, vowelMasked[maskVowel(tmp)] = *word;
	for(string& q : queries){
		if(original_words.count(q)) continue;
		else if(lowered.count(toLowercase(q))) q = lowered[q];
		else if(vowelMasked.count(maskVowel(q))) q = vowelMasked[q];
		else q = ""; 
	}
	return queries;
}
};