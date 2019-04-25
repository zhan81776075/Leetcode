#include<vector>
#include<iostream>
#include<cmath>

int main() {
	int num;
	std::cin >> num;
	//code 1
	//std::cin >> num;
	//std::vector<int> binary;
	//int ans = 0;
	//while (num != 0) {
	//	binary.push_back(num % 2);
	//	num = num / 2;
	//}
	//int n = binary.size();
	//for (int i = 0; i<n; ++i)
	//{
	//	binary[i] = abs(binary[i] - 1);
	//	ans += binary[i] * (pow(2,i));
	//}
	//std::cout << ans << std::endl;

	//code 2
	unsigned mask = ~0;
	while (num & mask) mask <<= 1;
	return ~mask & ~num;
}