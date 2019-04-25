#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	vector<int> deck = { 17,13,11,2,3,5,7 };

	deque<int> d;
	int temp = 0;
	sort(deck.begin(), deck.end());
	d.push_front(deck[deck.size() - 1]);
	deck.pop_back();
	int n = deck.size();
	for (int j = 0; j<n; j++)
	{
		temp = d.back();
		d.pop_back();
		d.push_front(temp);
		d.push_front(deck.back());
		deck.pop_back();
	}
	for (auto a : d)
	{
		deck.push_back(a);
	}
	return 0;
}