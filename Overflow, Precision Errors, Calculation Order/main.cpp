#include <bits/stdc++.h>
using namespace std;

int main() {
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	// The ASCII value for the lowercase letter "c" is 99
	// cout << 'c' + 1 << endl;  // 100

	// //Double
	// //Float
	// //Long Long Int
	// //Long Int
	// //Int
	// //Characters

	// int, char, long int, long long int, float, double

	// - 10 ^ 9 < int < 10 ^ 9
	// - 10 ^ 12 < long int < 10 ^ 12
	// - 10 ^ 18 < long long int < 10 ^ 18


	// int a = 3 / 2.0;
	// cout << a << endl;  // 1
	// double b = 3 / 2.0;
	// cout << b << endl;  // 1.5
	// double c = 3 / 2;
	// cout << c << endl;  // 1

	// cout << 3 * 7 / 2 << endl;  // 10(21/2 = 10)

	// int a = 100000;
	// int b = 100000;
	// int c = a * b;
	// cout << c << endl;  // 1410065408 (~~10000000000)
	// long int c1 = a * 1LL * b;  // LLLLLLLL
	// cout << c1 << endl;  // 10000000000


	// int mx = INT_MAX;
	// cout << mx << endl;  // 2147483647
	// cout << mx + 1 << endl;  // -2147483648

	// long int a = 100000;
	// long int b = 100000;
	// long int c = a * b;  // 10000000000
	// cout << c << endl;


	// double a = 100000;
	// double b = 100000;
	// double c = a * b;
	// cout << c << endl;  // 1e+10
	// cout << fixed << c << endl;  // 10000000000.000000
	// cout << fixed << setprecision(0) << c << endl;  // 10000000000
	// double d = 1e24;
	// cout << setprecision(0) << fixed  << d << endl;  // 999999999999999983222784


	// Sanple ques.
	// Given rectangle of length 1 and b. Print area of rectangle.

	// Constraints:
	// 1 <= 1 <= 10^9
	// 1 <= b <= 10^9

	// Input format:
	// 2 space sperated integer l and b

	// Output Format:
	// Single number which is area of rectangle

	// Sample input:
	// 3 4

	// sample output:
	// 12


	// Solve:

	int l, b;
	cin >> l >> b;
	cout << l * 1LL * b << endl;

}

