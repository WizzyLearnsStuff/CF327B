#include<iostream>
#include <cmath>
#include<vector>

using namespace std;

int main() {	
	int n;
	cin >> n;

	int out = 0;
	int tri = 2;
	vector<int> primes;
	while (out < n) {
		int lim = (int)sqrt((float)tri) + 1;
		for (int i = 0; i < primes.size(); i++) {
			if ((tri % primes[i]) == 0) {
				goto exit;
			}
			if (primes[i] > lim) break;
		}
		cout << tri << ' ';
		out++;
		primes.push_back(tri);
		exit:
		tri++;
	}
	
}
