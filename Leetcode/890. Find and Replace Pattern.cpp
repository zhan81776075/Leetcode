#include<iostream>	
#include<unordered_map>
#include<string>
#include<vector>	

using namespace std;

string F(string w) {
	unordered_map<char, int> m;
	for (char c : w) if(!m.count(c)) m[c] = m.size();
	for (int i = 0; i < w.length(); ++i) w[i] = 'a' + m[w[i]];
	return w;
}

int main()
{
	vector<string> ans;
	vector<string> words = { "abc","deq","mee","aqq","dkd","ccc" };
	string pattern = "abb";
	for (auto a : words) if(F(a) == F(pattern)) ans.push_back(a);
	return 0;
}