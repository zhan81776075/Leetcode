#include<iostream>
#include<set>
#include<vector>
#include<string>

int main() {
	std::vector<std::string> words = { "Hello", "Alaska", "Dad", "Peace" };
	std::set<std::string> bets = { "qwertyuiop","asdfghjkl","zxcvbnm"};
	std::vector<std::string> ans;
	for (auto word : words)
	{
		bool is = false;
		for (auto bet : bets) 
		{
			if (is == false)
			{
				int i = 0, n = word.size();
				while (i != n)
				{
					if (bet.find_first_of(tolower(word[i])) == std::string::npos)
						break;
					else 
					{
						i++;
						if (i == n)
						{
							is = true;
							break;
						}
					}
				}
			}
		}
		if (is == true)
		{
			ans.push_back(word);
		}
	}
	return 0;
}