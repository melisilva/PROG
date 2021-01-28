//2.1
#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f;
	cout << "a?";
	cin >> a;
	cout << "b?";
	cin >> b;
	cout << "c?";
	cin >> c;
	cout << "d?";
	cin >> d;
	cout << "e?";
	cin >> e;
	cout << "f?";
	cin >> f;
	if (a* e - b * d == 0) {
		cout << "There's no solution" << endl;
	}
	else {
		cout << "x=" << (c * e - b * f) / (a * e - b * d) << endl;
		cout << "y=" << (a * f - c * d) / (a * e - b * d) << endl;
	}
	
	return 0;
	
}

//2.2 a)
#include <iostream>
using namespace std;

int main()
{
	int n1, n2, n3;
	cout << "First number:";
	cin >> n1;
	cout << "Second number:";
	cin >> n2;
	cout << "Third number:";
	cin >> n3;
	if (n1 > n2&& n1 > n3)
	{
		cout << "n1 is the biggest number" << endl;
	}
	if (n2 > n1&& n2 > n3)
	{
		cout << "n2 is the biggest number" << endl;
	}
	if (n3 > n2&& n3 > n1)
	{
		cout << "n3 is the biggest number" << endl;
	}
	return 0;
}

//2.2 b)
#include <iostream>
using namespace std;

int main()
{
	int n1, n2, n3;
	cout << "First number:";
	cin >> n1;
	cout << "Second number:";
	cin >> n2;
	cout << "Third number:";
	cin >> n3;
	if (n1 > n2 && n1 > n3 && n2>n3 )
	{
		cout << "n1 n2 n3" << endl;
	}
	if (n1 > n2 && n1 > n3 && n3 > n2)
	{
		cout << "n1 n3 n2" << endl;
	}
	if (n2 > n1 && n2 > n3 && n1>n3)
	{
		cout << "n2 n1 n3" << endl;
	}
	if (n2 > n1 && n2 > n3 && n3 > n1)
	{
		cout << "n2 n3 n1" << endl;
	}
	if (n3 > n2 && n3 > n1 && n1 > n2)
	{
		cout << "n3 n1 n2" << endl;
	}
	if (n3 > n2 && n3 > n1 && n2 > n1)
	{
		cout << "n3 n2 n1" << endl;
	}
	return 0;
}

//2.2 c)
#include <iostream>
using namespace std;

int main()
{
	float n1, n2, n3;
	cout << "First number:";
	cin >> n1;
	cout << "Second number:";
	cin >> n2;
	cout << "Third number:";
	cin >> n3;
	if (n1 < 0 || n2 < 0 || n3 < 0) {
		cout << "Impossible" << endl;
	}
	if (n1 > n2&& n1 > n3)
	{
		if (n1 < n2 + n3) {
			cout << "They represent 3 sides of a triangle" << endl;
		}
		else {
			cout << "They can't represent 3 sides of a triangle" << endl;
		}

	}
	if (n2 > n1&& n2 > n3)
	{
		if (n2 < n1 + n3) {
			cout << "They represent 3 sides of a triangle" << endl;
		}
		else {
			cout << "They can't represent 3 sides of a triangle" << endl;
		}
	}
	if (n3 > n2&& n3 > n1)
	{
		if (n3 < n1 + n2) {
			cout << "They represent 3 sides of a triangle" << endl;
		}
		else {
			cout << "They can't represent 3 sides of a triangle" << endl;
		}
	}
	return 0;
}

//2.3
#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n1, n2;
	cout << "First number:";
	cin >> n1;
	cout << "Second number:";
	cin >> n2;
	if (n1 + n2 > INT_MAX) {
		cout << "sum overflow" << endl;
	}
	if (n1 + n2 < INT_MIN) {
		cout << "sum underflow" << endl;
	}
	if (n1 + n2<INT_MAX && n1 + n2>INT_MIN) {
		cout << n1 + n2 << endl;
	}
	return 0;
}

//2.4
#include <iostream>
using namespace std;
int main()
{
	int weight;
	float cost;
	cout << "What's the weight of the merchandise?";
	cin >> weight;
	if (weight <= 500) {
		cost = 5;
		cout << cost << endl;
	}
	if (weight >= 501 && weight <= 1000) {
		cost = 5 + 1.5 * int((weight - 500)/100);
		cout << cost << endl;
	}
	if (weight > 1000) {
		cost = 12.5 + 5 * int((weight - 1000)/250);
		cout << cost << endl;
	}
	return 0;
}

//2.5
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	float a, b, c, s1, s2, discriminant, realPart, imaginaryPart;
	cout << "Insert the coefficients (a, b and c): ";
	cin >> a >> b >> c;
	discriminant = b * b - 4 * a * c;

	if (discriminant > 0) {
		s1 = (-b + sqrt(discriminant)) / (2 * a);
		s2 = (-b - sqrt(discriminant)) / (2 * a);
		cout << "The equation has 2 real roots:";
		cout << s1;
		cout << " and "<< s2;
	}

	else if (discriminant == 0) {
		s1 = (-b + sqrt(discriminant)) / (2 * a);
		cout << "The equation has 1 real root:";
		cout << s1 << endl;
	}

	else {
		realPart = -b / (2 * a);
		imaginaryPart = sqrt(-discriminant) / (2 * a);
		cout << "The equation has 2 complex roots:";
		cout << realPart << "+" << imaginaryPart << "i";
		cout << " and " << realPart << "-" << imaginaryPart << "i" << endl;
	}

	return 0;
}

//2.6
#include <iostream>
using namespace std;

int main()
{
	float n, q, j;
	cout << "What's the amount you put every year?";
	cin >> q;
	cout << "How many years have you been saving up?";
	cin >> n;
	cout << "What's the annual interest rate (in percentage)?";
	cin >> j;
	cout << (n * q + n * (q * j / 100)) << endl;
	return 0;
}

//2.7 a)
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, i;
	bool isPrime = true;
	cout << "Enter a positive integer: ";
	cin >> n;
	for (i = 2; i <= sqrt(n); ++i)
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	if (isPrime)
		cout << "This is a prime number";
	else
		cout << "This is not a prime number";

	return 0;
}

//2.7 b)
#include <iostream>
using namespace std;
int main()
{
	for (int i = 2; i < 1000; i++)
	{
		bool prime = true;
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				prime = false;
				break;
			}
		}
		if (prime) cout << i << " ";
	}
	return 0;
}

//2.7 c)
#include <iostream>
using namespace std;
int main()
{
	for (int i = 2; i < 100; i++)
	{
		bool prime = true;
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
			{
				prime = false;
				break;
			}
		}
		if (prime) cout << i << " ";
	}
	return 0;
}

//2.8 a)
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

int main()
{

	cout << "ang   "<<"sin    "<<"cos    "<<"tan" << endl;
	for (int ang = 0; ang <= 90; ang = ang + 15) {
		cout << ang<<"  "<< sin(ang * (M_PI / 180))  << "  " << cos(ang * (M_PI / 180))  << "  " << tan(ang * (M_PI / 180)) << endl;
	}
	return 0;
}

//2.8 b)
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	float ang, final;
	cout << "What's the first angle?" << endl;
	cin >> ang;
	cout << "What's the limit?" << endl;
	cin >> final;
	cout << "ang   " << "sin    " << "cos    " << "tan" << endl;
	for (ang; ang<=final+0.1; ang = ang + 0.1) {
		cout << ang << "  " << sin(ang * (M_PI / 180)) << "  " << cos(ang * (M_PI / 180)) << "  " << tan(ang * (M_PI / 180)) << endl;
	}
	return 0;
}

//2.9 a) & b)
#include <iostream>
using namespace std;

int main()
{
	int n, num, digit, rev = 0;

	cout << "Enter a positive number: ";
	cin >> num;

	n = num;
	do
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	} while (num != 0);

	cout << " The reverse of the number is: " << rev << endl;

	if (n == rev)
		cout << " The number is a palindrome.";
	else
		cout << " The number is not a palindrome.";

	return 0;
}

//2.10
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Enter integer:";
	cin >> n;
	while (n % 2 == 0) {
		cout << "2x";
		n = n / 2;
	}
	for (int i = 3; i <= sqrt(n); i = i + 2) {
		while (n % i == 0) {
			cout << i<< "x";
			n = n / i;
		}
	}
	if (n > 2)
		cout << n << "x";
		return 0;
}

//2.11 a)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	float series;
	series = 4 - 4 / 3;
	cout << "How many terms?";
	cin >> n;
	for (int i=1; i<=n;i=i+1)
	{
		if(i%2==0)
			series += 4 / (2 * i + 1);
		else
			series -= 4 / (2 * i + 1);
	}
	cout <<series<<endl;
	return 0;
}

//2.11 b)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	float item;
	float series = 1;
	cout << "Number of terms:";
	cin >> n;
	series = 1 + 1 / 1;
	item = 1;
	for (int i = 2; i<=n; i = i + 1)
	{
		item = item * i;
		series = series + (1/ item);

	}
	cout << series << endl;
	return 0;
}

//2.11 c)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	float x;
	float item=1;
	float series = 1;
	cout << "Number of terms:";
	cin >> n;
	cout << "x:";
	cin >> x;
	for (int i = 1;i<=n; i = i + 1)
	{
		item = item * i;
		if (i % 2 != 0) 
			series = series - (pow(x, i) / item);
		else
			series = series + (pow(x, i) / item);
		cout << series << endl;
		cout << item << endl;
}
	cout << series << endl;
	return 0;
}

//2.12 a)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i = 1;
	float variance,series,seriese,serieso;
	series = 4 - 4 / 3;
	while (i != 2) {
		if (i % 2 == 0) {
			series += 4 / (2 * i + 1);
			seriese = series;
		}
		else {
			series -= 4 / (2 * i + 1);
			serieso = series;
		}
		i = i + 1;
	}
	cout << "What's the variance?" << endl;
	cin >> variance;
	do{
		if (i % 2 == 0) {
			series += 4 / (2 * i + 1);
			seriese = series;
		}
		else {
			series -= 4 / (2 * i + 1);
			serieso = series;
		}
		i = i + 1;
	} while (abs(seriese-serieso)!=variance);
	cout << series << endl;
	return 0;
}*/

//2.12 b)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i = 2;
	float item,variance,s_test;
	float series = 1;
	series = 1 + 1 / 1;
	s_test = series;
	item = 1;
	cout << "What's the variance?" << endl;
	cin >> variance;
	do {
		item = item * i;
		if (i %2!=0)
			series = s_test;
		s_test = series + (1/item);
	} while (abs(series - s_test) != variance);
	cout << series << endl;
	return 0;
}

//2.12 c)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i = 1;
	float x,variance,series,seriese,serieso;
	float item=1;
	float series = 1;
	cout << "x:";
	cin >> x;
	while (i != 2) {
		item = item * i;
		if (i % 2 == 0) {
			series = series + (pow(x, i) / item);
			seriese = series;
		}
		else {
			series = series - (pow(x, i) / item);
			serieso = series;
		}
		i = i + 1;
	}
	cout << "What's the variance?" << endl;
	cin >> variance;
	do {
		item = item * i;
		if (i % 2 != 0) {
			series = series - (pow(x, i) / item);
			serieso = series;
		}
		else {
			series = series + (pow(x, i) / item);
			seriese = series;
		}i = i + 1;
	} while (abs(seriese - serieso) != variance);
	cout << series << endl;
	return 0;
}

//2.13 a)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int lenght;
	float sum, mean, min, max, dif, difsquared,variance,stdd;
	variance = 0;
	sum = 0;
	cout << "How long is the sequence;how many terms does it have?" << endl;
	cin >> lenght;
	int *seq=new int[lenght];
	cout << "Sequence:" << endl;
	cin >> seq[1];
	sum = sum + seq[1];
	min = seq[1];
	max = seq[1];
	for (int i = 2; i <= lenght; i++) {
		cin >> seq[i];
		sum = sum + seq[i];
		if (seq[i] < min)
			min = seq[i];
		if (seq[i] > max)
			max = seq[i];
	}
	mean = sum / lenght;
	for (int i = 1; i <= lenght; i++) {
		dif = seq[i] - mean;
		difsquared = pow(dif, 2);
		variance = variance + difsquared;
	}
	variance = variance / lenght;
	stdd = sqrt(variance);
	cout << sum <<endl<< mean << endl<< min << endl<< max<<endl<<stdd;
	return 0;
}

//2.13 b)
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
	int number, len;
	vector<int>ivec;
	float mean, sum, min, max, dif, difsquared, variance, stdd;
	variance = 0;
	sum = 0;
	len = 0;
	while (cin >> number)
	{
		if (number != 0)
		    ivec.push_back(number);
		else
			break;
		if(number!=0)
			len=len+1;
	}
	sum = sum + ivec[0];
	min = ivec[0];
	max = ivec[0];
	for (int i = 1; i <= len - 1; i++) {
		sum = sum + ivec[i];
		if (ivec[i] < min)
			min = ivec[i];
		if (ivec[i] > max)
			max = ivec[i];
	}
	mean = sum / len;
	for (int i = 0; i <= len - 1; i++) {
		dif = ivec[i] - mean;
		difsquared = pow(dif, 2);
		variance = variance + difsquared;
	}
	variance = variance / len;
	stdd = sqrt(variance);
	cout << sum << endl << mean << endl << min << endl << max << endl << stdd;
	return 0;
}

//2.13 c)
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
	int number, len;
	vector<int>ivec;
	float mean, sum, min, max, dif, difsquared, variance, stdd;
	variance = 0;
	sum = 0;
	len = 0;
	while (cin >> number)
	{
		if (!cin.eof()) {
			ivec.push_back(number);
			len = len + 1;
		}
		else
			break;
	}
	sum = sum + ivec[0];
	min = ivec[0];
	max = ivec[0];
	for (int i = 1; i <= len - 1; i++) {
		sum = sum + ivec[i];
		if (ivec[i] < min)
			min = ivec[i];
		if (ivec[i] > max)
			max = ivec[i];
	}
	mean = sum / len;
	for (int i = 0; i <= len - 1; i++) {
		dif = ivec[i] - mean;
		difsquared = pow(dif, 2);
		variance = variance + difsquared;
	}
	variance = variance / len;
	stdd = sqrt(variance);
	cout << sum << endl << mean << endl << min << endl << max << endl << stdd;
	return 0;
}

//2.14 a)
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int n, nMaxIter,iter;
	iter = 0;
	double rq, rqn, rqn_square, dif;
	double delta;
	rq = 1;
	cout << "What's the maximum iteration number?" << endl;
	cin >> nMaxIter;
	cout << "What's delta?" << endl;
	cin >> delta;
	cout << "What's the number?" << endl;
	cin >> n;
	rqn = (rq + n / rq) / 2;
	rqn_square = pow(rqn, 2);
	dif = n - rqn_square;
	iter = 1;
	while (dif > delta || iter != nMaxIter) {
		rqn = (rqn + n / rqn) / 2;
		rqn_square = pow(rqn, 2);
		dif = n - rqn_square;
		iter += 1;
	}
	cout << rqn << endl;
	return 0;
}

//2.14 b)
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n, nMaxIter, iter,count=0;
	iter = 0;
	double rq, rqn, rqn_square, dif;
	double delta;
	rq = 1;
	cout << "What's the maximum iteration number?" << endl;
	cin >> nMaxIter;
	cout << "What's delta?" << endl;
	cin >> delta;
	cout << "What's the number?" << endl;
	cin >> n;
	while (fmod(delta, 10) != 0) {
		delta = delta * 10;
		if (fmod(delta, 10) != 0)
			count = count + 1;
	}
	rqn = (rq + n / rq) / 2;
	rqn_square = pow(rqn, 2);
	dif = n - rqn_square;
	iter = 1;
	while (dif > delta || iter != nMaxIter) {
		rqn = (rqn + n / rqn) / 2;
		rqn_square = pow(rqn, 2);
		dif = n - rqn_square;
		iter += 1;
	}
	cout << fixed<<setprecision(count)<<rqn << endl;
	cout << "The real value is "; 
	cout << sqrt(n);
	return 0;
}

//2.15
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <cmath>
using namespace std;
int main()
{
	int n1, n2, answer, a;
	float time;
	clock_t time_req;
	n1 = (rand() % 9) + 1;
	n2 = (rand() % 9) + 1;
	a = n1 * n2;
	time_req = clock();
	cout << "How much is " << n1 << "x" << n2 << endl;
	cin >> answer;
	time_req = clock() - time_req;
	time = float(time_req / CLOCKS_PER_SEC);
	if (answer != a)
		cout << "Very Bad" << endl;
	else
		if (time < 5)
			cout << "Good" << endl;
		else
			if(time >= 5 && time <= 10)
		         cout << "Satisfactory" << endl;
		else
				if(time > 10)
		           cout << "Insufficient" << endl;
	return 0;}


//2.16

#include <iostream>
#include <iomanip> 
#include <cctype>
using namespace std;
int main() {
	const unsigned int NUMBER_PRECISION = 6;
	double num1, num2;
	char operation, m_op;
	double result, memory;
	bool anotherOperation;
	string answer;
	result = 0;
	memory = 0;
	cout << "x op y (CTRL-Z to end) ? ";
	cin >> num1 >> operation >> num2;
	switch (operation)
	{
	case '+':
		result = num1 + num2;
		cout << result << endl;
		break;
	case '-':
		result = num1 - num2;
		cout << result << endl;
		break;
	case '*':
		result = num1 * num2;
		cout << result << endl;
		break;
	case '/':
		result = num1 / num2;
		cout << result << endl;
		break;
	}
	cout << "Would you like to a)continue with algebraic operations or b)other operations or c)leave ?" << endl;
	cin >> answer;
	if (answer == "a") {
		do {
			cout << "x op y (CTRL-Z to end) ? ";
			cin >> num1 >> operation >> num2;
			switch (operation)
			{
			case '+':
				result = num1 + num2;
				cout << result << endl;
				break;
			case '-':
				result = num1 - num2;
				cout << result << endl;
				break;
			case '*':
				result = num1 * num2;
				cout << result << endl;
				break;
			case '/':
				result = num1 / num2;
				cout << result << endl;
				break;
			}
			cout << "Would you like to a)continue with algebraic operations or b)other operations or c)leave ?" << endl;
			cin >> answer;
		} while (answer == "a");
	}
	if (answer=="b"){
		do {
			cout << "Which operation would like to do?" << endl;
			cin >> m_op;
			switch (m_op)
			{
			case 'M':
				memory = result;
				cout << memory << endl;
				break;
			case 'MC':
				memory = 0;
				cout << memory << endl;
				break;
			case 'M+':
				result = memory+result;
				cout << result<< endl;
				break;
			case 'M-':
				result = memory-result;
				cout << result << endl;
				break;
			case 'MR':
				result = memory;
				cout << result << endl;
				break;
			case 'C':
				result = 0;
				cout << result << endl;
				break;
			}
			cout << "Would you like to a)continue with algebraic operations or b)other operations or c)leave ?" << endl;
			cin >> answer;
		} while (answer == "b");
	}
	if(answer=="c")

	return 0;
}

