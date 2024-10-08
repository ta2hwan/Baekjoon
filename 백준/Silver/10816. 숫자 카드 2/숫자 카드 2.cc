#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	unordered_map<int, int> card;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		card[num]++;
	}

	int m;
	cin >> m;

	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		cout << card[num] << " ";
	}

	return 0;
}