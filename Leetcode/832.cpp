#include<vector>
#include<iostream>
#include<algorithm>
#include<cmath>

//ДњТы1 
std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& A) {
	for (auto &row : A) {
		for (int i = 0, j = row.size() - 1; i < j; i++, j--)
		{
			std::swap(row[i], row[j]);
		}
		for (auto &r : row)
		{
			r = std::abs(r - 1);
		}
	}
	return A;
}

//ДњТы2
std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& A) {
	for (auto &row : A) {
		std::reverse(row.begin(), row.end());
		for (auto &r : row)
		{
			r ^= 1;
		}
	}
	return A;	
}

int main()
{
	std::vector<std::vector<int>> A = { {1, 1, 0 }, { 1, 0, 1 }, { 0, 0, 0 } };
	A = flipAndInvertImage(A);
	return 0;
}