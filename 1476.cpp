#include <iostream>
using namespace std;
int main(void) 
{
	int year = 1;
	int E, S, M;
	int tempE = 1, tempS = 1, tempM = 1;
	cin >> E >> S >> M;

	while (true) {
		if ((year - E) % 15 == 0 && (year - S) % 28 == 0 && (year - M) % 19 == 0) {
			cout << year << endl;
			return 0;
		}
		year++;
	}
}