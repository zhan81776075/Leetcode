#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<string> A = { "bella", "label", "roller" };
	vector<int> letter(26, 0);
	vector<string> ans;
	for (auto e : A[0])
	{
		letter[e - 'a']++;
	}
	vector<int> cmd(26, 0);
	for (auto a : A)
	{
		for (auto le : a)
		{
			cmd[le - 'a']++;
		}
		for (int i = 0; i<letter.size(); ++i)
		{
			letter[i] = min(letter[i], cmd[i]);
			cmd[i] = 0;
		}
	}

	for (int i = 0; i<letter.size(); ++i) {
		string temp;
		while (letter[i] != 0)
		{
			temp = i + 'a';
			ans.push_back(temp);
			--letter[i];
		}
	}
	return 0;
}