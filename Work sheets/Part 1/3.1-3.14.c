//3.1
#include <cmath>
#include <iostream>
using namespace std;
double distance(double x1, double y1, double x2, double y2) {
	double d1;
	d1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return d1;
}
double area(double x1, double y1, double x2, double y2, double x3, double y3) {
	double d1,d2, d3,s,a;
	d2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	d3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	d1=distance(x1, y1, x2, y2);
	s = (d1 + d2 + d3) / 2;
	a = sqrt(s * (s - d1) * (s - d2) * (s - d3));
	return a;
}
int main() {
	double x1, y1, x2, y2, x3, y3; //points
	double result;
	cout << "What's the coordinates of point 1?" << endl;
	cout << "x?";
	cin >> x1;
	cout << "y?";
	cin >> y1;
	cout << "What's the coordinates of point 2?" << endl;
	cout << "x?";
	cin >> x2;
	cout << "y?";
	cin >> y2;
	cout << "What's the coordinates of point 3?" << endl;
	cout << "x?";
	cin >> x3;
	cout << "y?";
	cin >> y3;
	result=area(x1,y1,x2,y2,x3,y3);
	cout << result << endl;
	return 0;
}

//3.2 a)
#include <iostream>
#include <cmath>
using namespace std;
void isPrime(int n) {
	int i;
	bool isPrime = true;
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
}
int main() {
	int n;
	cout << "Enter a positive integer: ";
	cin >> n;
	isPrime(n);
	return 0;
}

//3.2 b)
#include <iostream>
using namespace std;

void isPrime(int n) {
	bool prime = true;
	for (int j = 2; j * j <= n; j++)
	{
		if (n % j == 0)
		{
			prime = false;
			break;
		}
	}
	if (prime) {
		cout<< n<<" ";
	}
}

int main() {
	for (int i = 2; i < 1000; i++) {
		isPrime(i);
	}
	return 0;
}

//3.2 c)
#include <iostream>
using namespace std;

void isPrime(int n) {
	bool prime = true;
	for (int j = 2; j * j <= n; j++)
	{
		if (n % j == 0)
		{
			prime = false;
			break;
		}
	}
	if (prime) {
		cout << n << " ";
	}
}

int main()
{
	for (int i = 2; i < 100; i++) {
		isPrime(i);
	}
	return 0;
}

//3.3
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

void sqroot(int count, double delta, int n, int nMaxIter) {
	int iter = 0;
	double rq, rqn, rqn_square, dif;
	rq = 1;
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
	cout << fixed << setprecision(count) << rqn << endl;
}

int main()
{
	int n, nMaxIter, count = 0;
	double delta;
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
	sqroot(count, delta, n, nMaxIter);
	return 0;
}

//3.4
#include <iostream>
#include <cmath>
using namespace std;

double round(double x, unsigned n) {
	double result;
	result = floor(x * pow(10,n) + 0.5) / (pow(10,n));
	return result;
}

int main() {
	double x,result;
	int n;
	cout << "What's the number?";
	cin >> x;
	cout << "How many decimal places?";
	cin >> n;
	result=round(x, n);
	cout << result;
	return 0;
}

//3.5
#include <iostream>
using namespace std;

int gcd(int n1, int n2) {
	int gcd;
	if (n1 == n2) {
		gcd = n1;
		return gcd;
	}
	if (n1 == 0) {
		gcd = n2;
		return gcd;
	}
	if (n2 == 0) {
		gcd = n1;
		return gcd;
	}
	while (n1 != n2) {
		if (n1 > n2) {
			n1 = n1 - n2;
		}
		if (n2 > n1) {
			n2 = n2 - n1;
		}
	}
	gcd = n1;
	return gcd;
}

int main() {
	int n1, n2,result;
	cout << "What are the numbers?";
	cin >> n1 >> n2;
	result= gcd(n1, n2);
	cout << result;
}

//3.7
#include <iostream>
using namespace std;

bool readInt(int& x) {
	int number;
	if (cin.fail() || cin.get() != 10) {
		return false;
	}
	else {
		int& x = number;
		return true;
	}
}
int main() {
	int number;
	bool a;
	cout << "number:";
	cin >> number;
	a=readInt(number);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	if (a == 0) {
		cout << "Invalid input";
	}
	if (a==1) {
		cout << number;
	}
	return 0;
}

//3.8 a)
#include <iostream>
#include <cmath>
using namespace std;

bool readFraction(int& numerator, int& denominator) {
	if (cin.fail() || cin.get() != 10) {
		return false;
	}
	else {
		return true;
	}
}
int main() {
	int denominator, numerator;
	char fraction;
	bool a;
	cout << "fraction:";
	cin >> numerator >> fraction >> denominator;
	if (fraction=='/') {
		if (denominator == 0) {
			cout << "Invalid input";
		}
		if (numerator == 0) {
			cout << 0 << endl;
		}
		if (denominator != 0 && numerator != 0) {
			a = readFraction(numerator, denominator);
			if (a == 0) {
				cout << "Invalid input";
			}
			if (a == 1) {
				cout << numerator << fraction << denominator;
			}
		}
	}
	else {
		cout << "Invalid input";
	}
	return 0;
}

//3.8 b)
#include <iostream>
#include <cmath>
using namespace std;

int gcd(int n1, int n2) {
	int gcd;
	if (n1 == n2) {
		gcd = n1;
		return gcd;
	}
	if (n1 == 0) {
		gcd = n2;
		return gcd;
	}
	if (n2 == 0) {
		gcd = n1;
		return gcd;
	}
	while (n1 != n2) {
		if (n1 > n2) {
			n1 = n1 - n2;
		}
		if (n2 > n1) {
			n2 = n2 - n1;
		}
	}
	gcd = n1;
	return gcd;
}

void reduceFraction(int& numerator, int& denominator) {
	int divisor;
	divisor = gcd(numerator, denominator);
	numerator = numerator / divisor;
	denominator = denominator / divisor;
	cout << numerator << '/' << denominator;
}

int main() {
	int denominator, numerator;
	char fraction;
	bool a;
	cout << "fraction:";
	cin >> numerator >> fraction >> denominator;
	reduceFraction(numerator, denominator);
	return 0;
}

//3.8 c)
#include <iostream>
#include <cmath>
using namespace std;

void sumFractions(int& numerator1, int& denominator1, int& numerator2, int& denominator2) {
	int numerator_result,newdenominator1,newdenominator2;
	if (denominator1 != denominator2) {
		newdenominator1 = denominator1 * denominator2;
		numerator1 = numerator1 * denominator2;
		newdenominator2 = denominator2 * denominator1;
		numerator2 = numerator2 * denominator1;
		numerator_result = numerator1 + numerator2;
	}
	else {
		numerator_result = numerator1 + numerator2;
	}
	cout << numerator_result << '/' << newdenominator1;
}

void difFractions(int& numerator1, int& denominator1, int& numerator2, int& denominator2) {
	int numerator_result, newdenominator1, newdenominator2;
	if (denominator1 != denominator2) {
		newdenominator1 = denominator1 * denominator2;
		numerator1 = numerator1 * denominator2;
		newdenominator2 = denominator2 * denominator1;
		numerator2 = numerator2 * denominator1;
		numerator_result = numerator1 - numerator2;
	}
	else {
		numerator_result = numerator1 - numerator2;
	}
	cout << numerator_result << '/' << newdenominator1;
}

void multFractions(int& numerator1, int& denominator1, int& numerator2, int& denominator2) {
	int numerator_result, denominator_result;
	numerator_result = numerator1 * numerator2;
	denominator_result = denominator1 * denominator2;
	cout << numerator_result << '/' << denominator_result;
}

void divFractions(int& numerator1, int& denominator1, int& numerator2, int& denominator2) {
	int numerator_result, denominator_result;
	numerator_result = numerator1 * denominator2;
	denominator_result = numerator2 * denominator1;
	cout << numerator_result << '/' << denominator_result;
}

int main() {
	int numerator1, denominator1, numerator2, denominator2;
	char fraction,op;
	cout << "fraction1 op fraction2:";
	cin >> numerator1 >> fraction >> denominator1>>op>> numerator2 >> fraction >> denominator2;
	switch (op) {
	case '+':
		sumFractions(numerator1, denominator1, numerator2, denominator2);
		break;
	case '-':
		difFractions(numerator1, denominator1, numerator2, denominator2);
		break;
	case '*':
		multFractions(numerator1, denominator1, numerator2, denominator2);
		break;
	case '/':
		divFractions(numerator1, denominator1, numerator2, denominator2);
		break;
	}
	return 0;
}

//3.8 d)
#include <iostream>
#include <cmath>
using namespace std;

bool readFraction(int& numerator, int& denominator) {
	if (cin.fail() || cin.get() != 10) {
		return false;
	}
	else {
		return true;
	}
}

int gcd(int n1, int n2) {
	int gcd;
	if (n1 == n2) {
		gcd = n1;
		return gcd;
	}
	if (n1 == 0) {
		gcd = n2;
		return gcd;
	}
	if (n2 == 0) {
		gcd = n1;
		return gcd;
	}
	while (n1 != n2) {
		if (n1 > n2) {
			n1 = n1 - n2;
		}
		if (n2 > n1) {
			n2 = n2 - n1;
		}
	}
	gcd = n1;
	return gcd;
}

void reduceFraction(int& numerator, int& denominator) {
	int divisor;
	divisor = gcd(numerator, denominator);
	numerator = numerator / divisor;
	denominator = denominator / divisor;
	cout << numerator << '/' << denominator;
}

void sumFractions(int& numerator1, int& denominator1, int& numerator2, int& denominator2) {
	int numerator_result, newdenominator1, newdenominator2;
	if (denominator1 != denominator2) {
		newdenominator1 = denominator1 * denominator2;
		numerator1 = numerator1 * denominator2;
		newdenominator2 = denominator2 * denominator1;
		numerator2 = numerator2 * denominator1;
		numerator_result = numerator1 + numerator2;
		reduceFraction(numerator_result, newdenominator1);
	}
	else {
		numerator_result = numerator1 + numerator2;
		reduceFraction(numerator_result, denominator1);
	}
}

void difFractions(int& numerator1, int& denominator1, int& numerator2, int& denominator2) {
	int numerator_result, newdenominator1, newdenominator2;
	if (denominator1 != denominator2) {
		newdenominator1 = denominator1 * denominator2;
		numerator1 = numerator1 * denominator2;
		newdenominator2 = denominator2 * denominator1;
		numerator2 = numerator2 * denominator1;
		numerator_result = numerator1 - numerator2;
		reduceFraction(numerator_result, newdenominator1);
	}
	else {
		numerator_result = numerator1 - numerator2;
		reduceFraction(numerator_result, denominator1);
	}
}

void multFractions(int& numerator1, int& denominator1, int& numerator2, int& denominator2) {
	int numerator_result, denominator_result;
	numerator_result = numerator1 * numerator2;
	denominator_result = denominator1 * denominator2;
	reduceFraction(numerator_result, denominator_result);
}

void divFractions(int& numerator1, int& denominator1, int& numerator2, int& denominator2) {
	int numerator_result, denominator_result;
	numerator_result = numerator1 * denominator2;
	denominator_result = numerator2 * denominator1;
	reduceFraction(numerator_result, denominator_result);
}

int main() {
	int numerator1, denominator1, numerator2, denominator2;
	char fraction1, fraction2, op;
	bool a1, a2;
	cout << "fraction1 op fraction2:";
	cin >> numerator1 >> fraction1 >> denominator1 >> op >> numerator2 >> fraction2 >> denominator2;
	if (fraction1 == '/' && fraction2 == '/') {
		if (denominator1 == 0 || denominator2 == 0) {
			cout << "Invalid input";
		}
		else {
			a1 = readFraction(numerator1, denominator1);
			a2 = readFraction(numerator2, denominator2);
			if (a1 == 0 || a2 == 0) {
				cout << "Invalid input";
			}
			if (a1 == 1 && a2 == 1) {
				switch (op) {
				case '+':
					sumFractions(numerator1, denominator1, numerator2, denominator2);
					break;
				case '-':
					difFractions(numerator1, denominator1, numerator2, denominator2);
					break;
				case '*':
					multFractions(numerator1, denominator1, numerator2, denominator2);
					break;
				case '/':
					divFractions(numerator1, denominator1, numerator2, denominator2);
					break;
				}
			}
		}
	}
	else {
		cout << "Invalid input";
	}
	return 0;
}

//3.9 a)
#include <iostream>
#include <cmath>
using namespace std;

bool leapyear(int& year) {
	bool result=false;
	if (year % 4 == 0 && year % 100 != 0) {
		result = true;
	}
	if (year % 400 == 0 && year % 100 == 0) {
		result = true;
	}
	return result;
}

int main() {
	int year;
	bool result;
	cout << "What's the year?";
	cin >> year;
	result = leapyear(year);
	if (result == true) {
		cout << year << " is a leap year";
	}
	else {
		cout << year << " isn't a leap year";
	}
	return 0;
}

//3.9 b)
#include <iostream>
#include <cmath>
using namespace std;

bool leapyear(int& year) {
	bool result = false;
	if (year % 4 == 0 && year % 100 != 0) {
		result = true;
	}
	if (year % 400 == 0 && year % 100 == 0) {
		result = true;
	}
	return result;
}

int daysofmonth(int& month, int& year) {
	int days;
	bool leap;
	switch (month) {
	case 1 :
		days = 31;
		break;
	case 3:
		days = 31;
		break;
	case 5:
		days = 31;
		break;
	case 7:
		days = 31;
		break;
	case 8:
		days = 31;
		break;
	case 10:
		days = 31;
		break;
	case 12:
		days = 31;
		break;
	case 2:
		leap = leapyear(year);
		if (leap == true) {
			days = 29;
		}
		else {
			days = 28;
		}
		break;
	case 4:
	    days=30;
		break;
	case 6:
		days = 30;
		break;
	case 9:
		days = 30;
		break;
	case 11:
		days = 30;
		break;
	}
	return days;
}

int main() {
	int month, year,days;
	cout << "Month: Year:";
	cin >> month >> year;
	days = daysofmonth(month, year);
	cout << days;
	return 0;
}

//3.9 c)
#include <iostream>
#include <cmath>
using namespace std;

bool leapyear(int& year) {
	bool result = false;
	if (year % 4 == 0 && year % 100 != 0) {
		result = true;
	}
	if (year % 400 == 0 && year % 100 == 0) {
		result = true;
	}
	return result;
}

int numday(int& year, int& month, int& day) {
	int c, s, a,ds;
	bool leap;
	s = year / 100;
	a = year % 100;
	leap = leapyear(year);
	if (leap == true) {
		switch (month) {
		case 1:
			c = 6;
			break;
		case 2:
			c = 2;
			break;
		case 3:
			c = 3;
			break;
		case 4:
			c = 6;
			break;
		case 5:
			c = 1;
			break;
		case 6:
			c = 4;
			break;
		case 7:
			c = 6;
			break;
		case 8:
			c = 2;
			break;
		case 9:
			c = 5;
			break;
		case 10:
			c = 0;
			break;
		case 11:
			c = 3;
			break;
		case 12:
			c = 5;
			break;
		}
	}
	else {
		switch (month) {
		case 1:
			c = 0;
			break;
		case 2:
			c = 3;
			break;
		case 3:
			c = 3;
			break;
		case 4:
			c = 6;
			break;
		case 5:
			c = 1;
			break;
		case 6:
			c = 4;
			break;
		case 7:
			c = 6;
			break;
		case 8:
			c = 2;
			break;
		case 9:
			c = 5;
			break;
		case 10:
			c = 0;
			break;
		case 11:
			c = 3;
			break;
		case 12:
			c = 5;
			break;
		}
	}
	ds = (int((5 * a) / 4) + c + day - 2 * (s % 4) + 7) % 7;
	return ds;
}

int main() {
	int year, month, day,nday;
	cout<< "Year:Month:Day:";
	cin >> year >> month >> day;
	nday=numday(year, month, day);
	switch (nday) {
	case 0:
		cout << "Saturday";
		break;
	case 1:
		cout << "Sunday";
		break;
	case 2:
		cout << "Monday";
		break;
	case 3:
		cout << "Tuesday";
		break;
	case 4:
		cout << "Wednesday";
		break;
	case 5:
		cout << "Thursday";
		break;
	case 6:
		cout << "Friday";
		break;
	}
	return 0;
}

//3.9 d)
#include <iostream>
#include <cmath>
using namespace std;

bool leapyear(int& year) {
	bool result = false;
	if (year % 4 == 0 && year % 100 != 0) {
		result = true;
	}
	if (year % 400 == 0 && year % 100 == 0) {
		result = true;
	}
	return result;
}

int numday(int& year, int& month, int& day) {
	int c, s, a, ds;
	bool leap;
	s = year / 100;
	a = year % 100;
	leap = leapyear(year);
	if (leap == true) {
		switch (month) {
		case 1:
			c = 6;
			break;
		case 2:
			c = 2;
			break;
		case 3:
			c = 3;
			break;
		case 4:
			c = 6;
			break;
		case 5:
			c = 1;
			break;
		case 6:
			c = 4;
			break;
		case 7:
			c = 6;
			break;
		case 8:
			c = 2;
			break;
		case 9:
			c = 5;
			break;
		case 10:
			c = 0;
			break;
		case 11:
			c = 3;
			break;
		case 12:
			c = 5;
			break;
		}
	}
	else {
		switch (month) {
		case 1:
			c = 0;
			break;
		case 2:
			c = 3;
			break;
		case 3:
			c = 3;
			break;
		case 4:
			c = 6;
			break;
		case 5:
			c = 1;
			break;
		case 6:
			c = 4;
			break;
		case 7:
			c = 6;
			break;
		case 8:
			c = 2;
			break;
		case 9:
			c = 5;
			break;
		case 10:
			c = 0;
			break;
		case 11:
			c = 3;
			break;
		case 12:
			c = 5;
			break;
		}
	}
	ds = (int((5 * a) / 4) + c + day - 2 * (s % 4) + 7) % 7;
	return ds;
}

string getMonthName(int monthNumber)
{
	string months[] = { "","January", "February", "March",
					   "April", "May", "June",
					   "July", "August", "September",
					   "October", "November", "December"
	};

	return (months[monthNumber]);
}

int daysofmonth(int& month, int& year) {
	int days;
	bool leap;
	switch (month) {
	case 1:
		days = 31;
		break;
	case 3:
		days = 31;
		break;
	case 5:
		days = 31;
		break;
	case 7:
		days = 31;
		break;
	case 8:
		days = 31;
		break;
	case 10:
		days = 31;
		break;
	case 12:
		days = 31;
		break;
	case 2:
		leap = leapyear(year);
		if (leap == true) {
			days = 29;
		}
		else {
			days = 28;
		}
		break;
	case 4:
	    days = 30;
		break;
	case 6:
		days = 30;
		break;
	case 9:
		days = 30;
		break;
	case 11:
		days = 30;
		break;
	}
	return days;
}

int main() {
	int year, month, days, day = 1;
	cout << "Year:Month:";
	cin >> year >> month;
	cout << getMonthName(month) << '/' << year<<endl;
	// Index of the day from 0 to 6 
	int current = numday(year, month, day);
       current= current-1;
	days = daysofmonth(month, year);
	printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
	// Print appropriate spaces 
	int k;
	for (k = 0; k < current; k++) {
		printf("     ");
	}

	for (int j = 1; j <= days; j++)
		{
			printf("%5d", j);

			if (++k > 6)
			{
				k = 0;
				printf("\n");
			}
		}

		if (k)
			printf("\n");

		current = k;
	return 0;
}

//3.9 e)
#include <iostream>
#include <cmath>
using namespace std;

bool leapyear(int& year) {
	bool result = false;
	if (year % 4 == 0 && year % 100 != 0) {
		result = true;
	}
	if (year % 400 == 0 && year % 100 == 0) {
		result = true;
	}
	return result;
}

int numday(int& year, int& month, int& day) {
	int c, s, a, ds;
	bool leap;
	s = year / 100;
	a = year % 100;
	leap = leapyear(year);
	if (leap == true) {
		switch (month) {
		case 1:
			c = 6;
			break;
		case 2:
			c = 2;
			break;
		case 3:
			c = 3;
			break;
		case 4:
			c = 6;
			break;
		case 5:
			c = 1;
			break;
		case 6:
			c = 4;
			break;
		case 7:
			c = 6;
			break;
		case 8:
			c = 2;
			break;
		case 9:
			c = 5;
			break;
		case 10:
			c = 0;
			break;
		case 11:
			c = 3;
			break;
		case 12:
			c = 5;
			break;
		}
	}
	else {
		switch (month) {
		case 1:
			c = 0;
			break;
		case 2:
			c = 3;
			break;
		case 3:
			c = 3;
			break;
		case 4:
			c = 6;
			break;
		case 5:
			c = 1;
			break;
		case 6:
			c = 4;
			break;
		case 7:
			c = 6;
			break;
		case 8:
			c = 2;
			break;
		case 9:
			c = 5;
			break;
		case 10:
			c = 0;
			break;
		case 11:
			c = 3;
			break;
		case 12:
			c = 5;
			break;
		}
	}
	ds = (int((5 * a) / 4) + c + day - 2 * (s % 4) + 7) % 7;
	return ds;
}

string getMonthName(int monthNumber)
{
	string months[] = {"January", "February", "March",
					   "April", "May", "June",
					   "July", "August", "September",
					   "October", "November", "December"
	};

	return (months[monthNumber]);
}

int daysofmonth(int& month, int& year) {
	int days;
	bool leap;
	switch (month) {
	case 0:
		days = 31;
		return days;
		break;
	case 2:
		days = 31;
		return days;
		break;
	case 4:
		days = 31;
		return days;
		break;
	case 6:
		days = 31;
		return days;
		break;
	case 7:
		days = 31;
		return days;
		break;
	case 9:
		days = 31;
		return days;
		break;
	case 11:
		days = 31;
		return days;
		break;
	case 1:
		leap = leapyear(year);
		if (leap == true) {
			days = 29;
			return days;
			break;
		}
		else {
			days = 28;
			return days;
			break;
		}
	case 3:
		days = 30;
		return days;
		break;
	case 5:
		days = 30;
		return days;
		break;
	case 8:
		days = 30;
		return days;
		break;
	case 10:
		days = 30;
		return days;
		break;
	}
}

int main() {
	int year, month = 1, day = 1;
	cout << "Year";
	cin >> year;
	cout << year << endl;
	int days;
	// Index of the day from 0 to 6 
	int current = numday(year, month, day);
       current= current-1;

	for (int i = 0; i < 12; i++)
	{
		days = daysofmonth(i, year);

		// Print the current month name 
		printf("\n  ------------%s-------------\n",
			getMonthName(i).c_str());
		printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

		// Print appropriate spaces 
		int k;
		for (k = 0; k < current; k++) {
			printf("     ");
		}

		for (int j = 1; j <= days; j++)
		{
			printf("%5d", j);

			if (++k > 6)
			{
				k = 0;
				printf("\n");
			}
		}

		if (k)
			printf("\n");

		current = k;
	}
	return 0;
}

//3.10 a)
#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

unsigned long long factorial_ite(unsigned int n) {
	int f = 1;
	for (unsigned i = n; i >= 2; i--) {
		f = f * i;
	}
	return f;
}

int main() {
	int n;
	unsigned long long result;
	cout << "Number:";
	cin >> n;
	result = factorial_ite(n);
	cout << result;
	return 0;
}

//3.10 b)
#include <iostream>
using namespace std;

unsigned long long factorial_rec(unsigned int n) {
	if (n > 1)
		return n * factorial_rec(n - 1);
	else
		return 1;
}

int main() {
	int n;
	unsigned long long result;
	cout << "Number:";
	cin >> n;
	result=factorial_rec(n);
	cout << result;
	return 0;
}

//3.11
#include <iostream>
#include <cmath>
using namespace std;

int gcd_rec(int m, int n) {
	if (m > n) {
		return gcd_rec(m - n, n);
	}
	if (m < n) {
		return gcd_rec(m, n - m);
	}
	if (m == n) {
		return m;
	}
}

int main() {
	int m, n;
	cout << "Numbers:";
	cin >> m >> n;
	cout<<gcd_rec(m, n);
	return 0;
}

//3.12
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

//area of a circle
double area(double radius) {
	double area;
	area = M_PI * pow(radius,2);
	return area;
}
//area of triangle
float area(double x1, double y1, double x2, double y2, double x3, double y3) {
	double d1, d2, d3, s, area;
	d2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	d3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	d1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	s = (d1 + d2 + d3) / 2;
	area = sqrt(s * (s - d1) * (s - d2) * (s - d3));
	return area;
}

//area rectangle
float area(float x1,float x2,float y1, float y2) {
	float area;
	area = (x2 - x1) * (y2 - y1);
	return area;

}
int main() {
	cout << area(2.42) << endl;
	cout << area(2.3, 12.3, 34.6, 34.5, 45.7, 345) << endl;
	cout << area(5, 634.5, 46, 76) << endl;
	return 0;
}

//3.13 a)
#include <iostream>
#include <cassert>
using namespace std;

/*Function rolls an imaginary dice, which has 6 sides,
so that's the highest number it could reach.

Assertions are statements used to test assumptions made 
by programmer. Here we are using the assert statement to
limit the random numbers that our random generator can
produce. We have a 6 side dice so the lowest number we can
have is 1 and the highest is 6.

int rollDie(int low = 1, int high = 6) {
	assert(high >= low);
	return (rand() % (high - low + 1)) + low;
}

int main() {
	cout << rollDie();
	return 0;
}

//3.14 a)
#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
	return sin(x);
}

double integrateTR(double f(double x), double a, double b, int n) {
	double result, h;
	result = 0;
	h = (b - a) / n;
	for (int i = 1; i <= n; i++) {
		result = result + h / 2 * (f(a + (i - 1) * h) + f(a + i * h));
	}
	return result;
}

//3.14 b)
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
	return sin(x);
}

double integrateTR(double f(double x), double a, double b, int n) {
	double result, h;
	result = 0;
	h = (b - a) / n;
	for (int i = 1; i <= n; i++) {
		result = result + h / 2 * (f(a + (i - 1) * h) + f(a + i * h));
	}
	return result;
}

int main() {
	cout << "Integrating x^2 from 0 to 10: " << integrateTR([](double x) {return x * x; }, 0, 10, 2) << endl;
	cout << "Integrating sqrt(4-x^2) from -2 to 2: " << integrateTR([](double x) {return sqrt(4-(x*x)); }, -2, 2, 12) << endl;
	cout << "The real result is " << M_PI * pow(2, 2) << endl;
	return 0;
}



/*int year, months=12,days;
		bool lyear;
		year = rand() % 30 + 1985;
		lyear = leapyear(year);
		if (lyear == 0) {
			days = 365;
		}
		else {
			days = 366;
		}
		vector<vector<int>> pluviosity(months,vector<int>(days));
		readpluviosity(pluviosity,year);*/
/*vector<vector<int>> readpluviosity(vector<vector<int>>& pluviosity,int year) {
	double rain;
	size_t months = pluviosity.size();
	for (size_t month = 1; month <= months; month++) {
		int days = daysofmonth(month, year);
		for (size_t day = 1; day <= days; day++) {
			rain =(rand() % 400) + 300;
			pluviosity[month][day] = rain;
		}
	}
	for (size_t month = 1; month <= 12; month++) {
		int days = daysofmonth(month, year);
		for (size_t day = 1; day <= days; day++) {
			cout << pluviosity[month][day] << endl;

		}
	}
	return pluviosity;
}*/
