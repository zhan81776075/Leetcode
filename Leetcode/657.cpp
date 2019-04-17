/*#include<iostream>
#include<string>
#include<algorithm>

//ДњТы 1
bool judgeCircle(std::string moves) {
	int X = 0, Y = 0;
	for (auto m : moves) {
		if (m == 'U') Y++;
		else if (m == 'D') Y--;
		else if (m == 'R') X--;
		else X++;
	}
	if (X == 0 && Y == 0)
		return true;
	else
		return false;
}

//ДњТы2
bool judgeCircle_2(std::string moves) {
	if (count(moves.begin(), moves.end(), 'L') == count(moves.begin(), moves.end(), 'R') && count(moves.begin(), moves.end(), 'U') == count(moves.begin(), moves.end(), 'D'))
		return true;
	else
		return false;
}

//ДњТы3 
bool judgeCircle_3(std::string moves) {
	int X = 0, Y = 0;
	for (auto m : moves) {
		switch (m) {
		    case 'U':
				Y++;
				break;
			case 'D':
				Y--;
				break;
			case 'L':
				X++;
				break;
			case 'R':
				X--;
				break;
		}

	}
	if (X == 0 && Y == 0)
		return true;
	else
		return false;
}

int main()
{
	std::string moves = "UD";
	bool a = judgeCircle(moves);
	return 0;
}*/