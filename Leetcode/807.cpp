#include<iostream>
#include<vector>

int main()
{
	std::vector<std::vector<int>> grid = { {3,0,8,4},{2,4,5,7},{9,2,6,3},{0,3,1,0} };
	std::vector<int> row;
	std::vector<int> col;
	int sum = 0;
	for (int i = 0; i<grid.size(); ++i) {
		int max_row = 0, max_col = 0;
		for (int j = 0; j<grid[1].size(); ++j) {
			if (max_row<grid[i][j]) max_row = grid[i][j];
			if (max_col<grid[j][i]) max_col = grid[j][i];
		}
		row.push_back(max_row);
		col.push_back(max_col);
	}
	auto i=row.begin();
	for (auto r : grid)
	{
		auto j = col.begin();
		for (auto l : r)
		{
			sum += ((*i>*j ? *j : *i)-l);
			j++;
		}
		i++;
	}
	return sum;
};
