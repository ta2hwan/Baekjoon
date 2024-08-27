#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n;
	string cmd;

	cin >> n;

	stack<int> s;

	while (n--) {
		cin >> cmd;
		if (cmd == "push") {
			int x;
			cin >> x;
			s.push(x);
		}

		else if (cmd == "pop") {
			if (s.empty()) cout << -1 << '\n';
			
			else {
				cout << s.top() << '\n';
				s.pop();
			}
		}

		else if (cmd == "size") {
			cout << s.size() << '\n';
		}

		else if (cmd == "empty") {
			if (s.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}

		else if (cmd == "top") {
			if (s.empty()) cout << -1 << '\n';
			else cout << s.top() << '\n';
		}
	}


	return 0;
}