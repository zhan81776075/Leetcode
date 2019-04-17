#include<iostream>
#include<algorithm>
#include<vector>

//方法1
std::vector<int> sortArrayByParity(std::vector<int>& A) {
	auto it = A.begin();
	int temp = 0;
	for (auto i = A.size() - 1; i != 0; i--)
	{
		if (*it % 2 == 0)
		{
			++it;
			continue;
		}
		else {
			temp = *it;
			it = A.erase(it);
			A.push_back(temp);
		}
	}
	return A;
}

//方法2 
std::vector<int> sortArrayByParity_2(std::vector<int>& A) {
	int left = 0, right = A.size() - 1;
	while (left < right) {
		while (A[left] % 2 == 0 && left < right)
			++left;
		while (A[right] % 2 != 0 && left < right)
			--right;
		std::swap(A[left], A[right]);
	}
	return A;
}

//方法3
std::vector<int> sortArrayByParity_3(std::vector<int>& A) {
	for (int i = 0, j = 0; j < A.size(); j++)
		if (A[j] % 2 == 0) std::swap(A[i++], A[j]);
	return A;
}

int main()
{
	//方法1
	std::vector<int> A = { 3,1,2,4 };
	A = sortArrayByParity(A);
	for (auto it = A.begin(); it != A.end(); ++it)
		std::cout << *it << ' ';
	return 0;
}