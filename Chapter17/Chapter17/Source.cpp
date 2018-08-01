#include <iostream>
long double probablility(unsigned numbers,unsigned picks);

int main(void) {

	using namespace std;
	double total, choices;
	cout << "Enter total number of choices on the game card\n"
		"and the number of picks allowed:\n";
	while ((cin >> total >> choices) && total >= choices) {
		cout << "You have one chance in ";
		cout << probablility(total, choices);
		cout << " of wining.\n";
		cout << "Next two numbers:(q to quit)";
	}
	cout << "Bye";
	getchar();
	return 0;
}
long double probablility(unsigned numbers, unsigned picks) {
	long double result = 1.0;
	unsigned n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--) {
		result = result * n / p;
	}
	return result;
}
