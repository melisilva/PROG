/*5.1 a)
#include <iostream>
#include <vector>
#include<string>
using namespace std;

void swap(string* xp, string* yp)
{
    string temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(vector <string>& v, char x) {
	for (int i = 0; i < v.size() - 1; i++) {
		for (int j = 0; j < v.size() - 1; j++) {
			if (x == 'a') {
				if (v[j] > v[j + 1]) {
					swap(&v[j], &v[j + 1]);
				}
			}
			if (x == 'd') {
				if (v[j] < v[j + 1]) {
					swap(&v[j], &v[j + 1]);
				}
			}
		}
	}
	for (int k = 0; k < v.size(); k++) {
		cout << v[k] << endl;
	}
}

int main() {
	vector <string> v = { "hello","world","love","melissa" };
	char order;
	cout << "Would you like to order them ascending or descending (a,d)?" << endl;
	cin >> order;
	bubbleSort(v, order);
}*/

/*5.1 b)
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void swap(string* xp, string* yp)
{
	string temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(vector <string>& v) {
	for (int i = 0; i < v.size() - 1; i++) {
		for (int j = 0; j < v.size() - 2; j++) {
			if (v[j] > v[j + 1]) {
				swap(&v[j], &v[j + 1]);
			}
		}
	}
	for (int k = 0; k < v.size(); k++) {
		cout << v[k] << endl;
	}
}

int main(){
vector <string> v;
string name;
while (cin >> name)
{
	if (!cin.eof()) {
		v.push_back(name);
	}
	else
		break;
}
bubbleSort(v);
}*/

/*5.2
#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

int comparator(const void* w1, const void* w2) {
	const char* iw1 = *(const char**)w1;
	const char* iw2 = *(const char**)w2;
	return strcmp(iw1, iw2);
}


int main() {
	const int ELEM = 6;
	const char* words[] = { "Sara","Ava","Nate","Ray","Nora","Zari" };
	int w_len = sizeof(words) / sizeof(char*);
	qsort(words, w_len, sizeof(char*), comparator);
	for (int i = 0; i < ELEM; i++) {
		cout << words[i] << " ";
	}
	return 0;
}*/

/*5.3 a) 
#include <iostream>
using namespace std;

char encryptChar(char c, int key) {
	char result='\0';
	if (key < 0) {
		key = key + 26;
	}
	if (isupper(c)) {
		result += char(int(c + key - 65) % 26 + 65);
	}
		else{
			result += char(int(c + key - 97) % 26 + 97);
	}
	return result;
}

int main() {
	char c = 'a';
	int key = -3;
	char result;
	result = encryptChar(c, key);
	cout << result;
	return 0;
}*/

/*5.3 b) & c)
#include <iostream> 
#include <string>
using namespace std;

string encryptString(string s, int key) {
	string result = "";
	if (key < 0) {
		key = key + 26;
	}
	for (int i = 0; i < s.length(); i++)
	{
		if (isupper(s[i])) {
			result += char(int(s[i] + key - 65) % 26 + 65);
		}
		else {
			result += char(int(s[i] + key - 97) % 26 + 97);
		}
	}
	return result;
}

int main() {
	string s,result;
	cout << "Input:";
	cin >> s;
	int key=3;
	result = encryptString(s, key);
	cout << "Original string: " << s << endl;
	cout << "Encrypted string: " << result;
	return 0;
}*/

/*5.3 d)
#include <iostream> 
#include <cstring>
using namespace std;

const int SIZE = 5;
string encryptString(char *s,int key) {
	string result=" ";
	if (key < 0) {
		key = key + 26;
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (isupper(s[i])) {
			result += char(int(s[i] + key - 65) % 26 + 65);
		}
		else {
			result+= char(int(s[i] + key - 97) % 26 + 97);
		}
	}
	return result;
}

int main() {
	char s[] = "Hello";
	int key = 3;
	string result = encryptString(s, key);
	cout << "Original string: " << s << endl;
	cout << "Encrypted string: ";
	cout << result.c_str();
	return 0;
}*/

/*5.4 a)
#include <iostream>
#include <string>
using namespace std;

bool sequenceSearch(const string& s, int nc, char c) {
	int counter = 0;
	for (int i = 0; i < s.size(); i++) {
		if (counter > 0) {
			if (s[i] != c) {
				return 0;
			}
		}
		if (s[i] == c) {
			counter += 1;
		}
		if (counter == nc) {
			return 1;
		}
	}
}

int main() {
	string s = "Hello";
	int nc = 2;
	char c = 'l';
	bool result;
	result = sequenceSearch(s, nc, c);
	if (result != 0) {
		cout << "Valid";
	}
	else {
		cout << "Not valid";
	}
	return 0;
}*/

/*5.4 b)
#include <iostream>
#include <string>
using namespace std;

bool sequenceSearch(const string& s, int nc, char c) {
	string n = "";
	for (int i = 0; i < nc; i++) {
		n += c;
	}
	size_t found = s.find(n);
	if (found != string::npos) {
		return 1;
	}
	else {
		return 0;
	}
}

int main()
{
	string s = "Hello";
	char c = 'l';
	int nc = 2;
	bool result;
	result = sequenceSearch(s, nc, c);
	if (result == 0) {
		cout << "Not Valid";
	}
	if(result==1){
		cout << "Valid";
	}
	return 0;
}*/

/*5.5
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string removellspaces(const string& name) {
	string newname;
	if (name[0] == ' ' && name[name.size() - 1] == ' ') {
		for (int i = 1; i < name.size() - 1; i++) {
			newname += name[i];
		}
	}
	if (name[0] == ' ' && name[name.size() - 1]!=' ') {
		for (int i = 1; i < name.size(); i++) {
			newname += name[i];
		}
	}
	if (name[0] != ' ' && name[name.size() - 1] == ' ') {
		for (int i = 0; i < name.size()-1; i++) {
			newname += name[i];
		}
	}
	return newname;
}

string removespaces(const string& newname) {
	string newname2;
	newname2 += newname[0];
	for (int i = 1; i < newname.size(); i++) {
		int b = i - 1;
		if (newname[b] == ' ') {
			if (newname[i] != ' ') {
				newname2 += newname[i];
			}
		}
		else {
			newname2 += newname[i];
		}
	}
	return newname2;
}

string removede(const string& newname2) {
	vector<string> remove = { "DE","DO","DA","DOS","DAS","E" };
	string result;
	string test;
	vector<string>v;
	for (int i = 0; i < newname2.size(); i++) {
		if (newname2[i] == ' ') {
			v.push_back(test);
			test = "";
		}
		else {
			test += newname2[i];
		}
	}
	if (test != "") {
		v.push_back(test);
	}
	int counter = 0;
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < remove.size(); j++) {
			if (v[i] == remove[j]) {
				counter += 1;
			}
		}
			if (counter == 0) {
				result += v[i];
				result += " ";
			}
			else {
				counter = 0;
			}
	}
	return result;
}
string normalizeName(const string& name) {
	string newname = removellspaces(name);
	string newname2 = removespaces(newname);
	for (int i = 0; i < newname2.size(); i++) {
		if (newname2[i] >= 'a' && newname2[i] <= 'z') {
			newname2[i] = newname2[i] - 32;
		}
	}
	string result = removede(newname2);
	return result;
}

int main() {
	string name = "Maria da Felicidade dos Reis  e  Passos Dias de Aguiar  ";
	string result;
	result=normalizeName(name);
	cout << result;
	return 0;
}*/

/*5.6
#include <iostream>
#include <cmath>
using namespace std;

struct Fraction {
	int numerator;
	int denominator;
};

bool readFraction(Fraction&fraction) {
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

void reduceFraction(Fraction&fraction) {
	int divisor;
	divisor = gcd(fraction.numerator, fraction.denominator);
	fraction.numerator = fraction.numerator / divisor;
	fraction.denominator = fraction.denominator / divisor;
	cout << fraction.numerator << '/' << fraction.denominator;
}

void sumFractions(Fraction&f1,Fraction&f2) {
	int numerator_result, newdenominator1;
	if (f1.denominator != f2.denominator) {
		newdenominator1 = f1.denominator * f2.denominator;
		f1.numerator = f1.numerator * f2.denominator;
		f2.numerator = f2.numerator * f1.denominator;
		numerator_result = f1.numerator + f2.numerator;
		Fraction result = { numerator_result,newdenominator1 };
		reduceFraction(result);
	}
	else {
		numerator_result = f1.numerator + f2.numerator;
		Fraction result = { numerator_result,f1.denominator };
		reduceFraction(result);
	}
}

void difFractions(Fraction& f1, Fraction& f2) {
	int numerator_result, newdenominator1;
	if (f1.denominator != f2.denominator) {
		newdenominator1 = f1.denominator * f2.denominator;
		f1.numerator = f1.numerator * f2.denominator;
		f2.numerator = f2.numerator * f1.denominator;
		numerator_result = f1.numerator - f2.numerator;
		Fraction result = { numerator_result,newdenominator1 };
		reduceFraction(result);
	}
	else {
		numerator_result = f1.numerator - f2.numerator;
		Fraction result = { numerator_result,f1.denominator };
		reduceFraction(result);
	}
}

void multFractions(Fraction& f1, Fraction& f2) {
	int numerator_result, denominator_result;
	numerator_result = f1.numerator* f2.numerator;
	denominator_result = f1.denominator * f2.denominator;
	Fraction result = { numerator_result,denominator_result };
	reduceFraction(result);
}

void divFractions(Fraction& f1, Fraction& f2){
	int numerator_result, denominator_result;
	numerator_result = f1.numerator * f2.denominator;
	denominator_result = f2.numerator * f1.denominator;
	Fraction result = { numerator_result,denominator_result };
	reduceFraction(result);
}

int main() {
	int numerator1, denominator1,numerator2,denominator2;
	char fraction1, fraction2, op;
	bool a1, a2;
	cout << "fraction1 op fraction2:";
	cin >> numerator1 >> fraction1 >> denominator1 >> op >> numerator2 >> fraction2 >> denominator2;
	if (fraction1 == '/' && fraction2 == '/') {
		if (denominator1 == 0 || denominator2 == 0) {
			cout << "Invalid input";
		}
		else {
			Fraction f1 = { numerator1,denominator1 };
			Fraction f2 = { numerator2,denominator2 };
			a1 = readFraction(f1);
			a2 = readFraction(f2);
			if (a1 == 0 || a2 == 0) {
				cout << "Invalid input";
			}
			if (a1 == 1 && a2 == 1) {
				switch (op) {
				case '+':
					sumFractions(f1,f2);
					break;
				case '-':
					difFractions(f1,f2);
					break;
				case '*':
					multFractions(f1,f2);
					break;
				case '/':
					divFractions(f1,f2);
					break;
				}
			}
		}
	}
	else {
		cout << "Invalid input";
	}
	return 0;
}*/

/*5.7 a)
#include <iostream>
using namespace std;

typedef struct {
	unsigned int year, month, day;
}Date;

void readDate(Date* d) {
	char separator;
	cout << "Date:";
	cin >> d->year >> separator >> d->month >> separator >> d->day;
	cout << d->year;
}

int main() {
	Date d;
	readDate(&d);
	return 0;
}*/

/*5.7 b)
#include <iostream>
using namespace std;

typedef struct {
	unsigned int year, month, day;
}Date;

void writeDate(const Date* d) {
	cout << d->year << "/" << d->month << "/" << d->day;
}

void readDate(Date* d) {
	char separator;
	cout << "Date:";
	cin >> d->year >> separator >> d->month >> separator >> d->day;
	writeDate(d);
}

int main() {
	Date d;
	readDate(&d);
	return 0;
}*/

/*5.7 c)
#include <iostream>
using namespace std;

typedef struct {
	unsigned int year, month, day;
}Date;

void readDate(Date* d) {
	char separator;
	cout << "Date:";
	cin >> d->year >> separator >> d->month >> separator >> d->day;
}

int compareDates(const Date* d1, const Date* d2) {
	if (d1->year == d2->year && d1->month == d2->month && d1->day == d2->day) {
		return 0;
	}
	if (d1->year == d2->year && d1->month == d2->month && d1->day > d2->day) {
		return 1;
	}
	if (d1->year == d2->year && d1->month > d2->month && d1->day == d2->day) {
		return 1;
	}
	if (d1->year > d2->year && d1->month == d2->month && d1->day == d2->day) {
		return 1;
	}
	if (d1->year == d2->year && d1->month > d2->month && d1->day > d2->day) {
		return 1;
	}
	if (d1->year > d2->year && d1->month == d2->month && d1->day > d2->day) {
		return 1;
	}
	if (d1->year > d2->year && d1->month > d2->month && d1->day ==d2->day) {
		return 1;
	}
	if (d1->year > d2->year && d1->month > d2->month && d1->day > d2->day) {
		return 1;
	}
	if (d1->year == d2->year && d1->month == d2->month && d1->day < d2->day) {
		return -1;
	}
	if (d1->year == d2->year && d1->month < d2->month&& d1->day == d2->day) {
		return -1;
	}
	if (d1->year < d2->year&& d1->month == d2->month && d1->day == d2->day) {
		return -1;
	}
	if (d1->year == d2->year && d1->month < d2->month&& d1->day < d2->day) {
		return -1;
	}
	if (d1->year < d2->year&& d1->month == d2->month && d1->day < d2->day) {
		return -1;
	}
	if (d1->year < d2->year&& d1->month < d2->month&& d1->day == d2->day) {
		return -1;
	}
	if (d1->year < d2->year&& d1->month < d2->month&& d1->day < d2->day) {
		return -1;
	}
}

int main() {
	Date d1;
	Date d2;
	readDate(&d1);
	readDate(&d2);
	cout << compareDates(&d1, &d2);
	return 0;
}*/

/*5.7 d) & e)
#include <iostream>
using namespace std;

typedef struct {
	unsigned int year, month, day;
}Date;

void readDate(Date* d) {
	char separator;
	cout << "Date:";
	cin >> d->year >> separator >> d->month >> separator >> d->day;
}

void sortDates(Date* d1, Date* d2) {
	int result;
	if (d1->year == d2->year && d1->month == d2->month && d1->day == d2->day) {
		result=0;
	}
	if (d1->year == d2->year && d1->month == d2->month && d1->day > d2->day) {
		result=1;
	}
	if (d1->year == d2->year && d1->month > d2->month&& d1->day == d2->day) {
		result= 1;
	}
	if (d1->year > d2->year&& d1->month == d2->month && d1->day == d2->day) {
		result=1;
	}
	if (d1->year == d2->year && d1->month > d2->month&& d1->day > d2->day) {
		result=1;
	}
	if (d1->year > d2->year&& d1->month == d2->month && d1->day > d2->day) {
		result=1;
	}
	if (d1->year > d2->year&& d1->month > d2->month&& d1->day == d2->day) {
		result=1;
	}
	if (d1->year > d2->year&& d1->month > d2->month&& d1->day > d2->day) {
		result=1;
	}
	if (d1->year == d2->year && d1->month == d2->month && d1->day < d2->day) {
		result=-1;
	}
	if (d1->year == d2->year && d1->month < d2->month && d1->day == d2->day) {
		result=-1;
	}
	if (d1->year < d2->year && d1->month == d2->month && d1->day == d2->day) {
		result=-1;
	}
	if (d1->year == d2->year && d1->month < d2->month && d1->day < d2->day) {
		result=-1;
	}
	if (d1->year < d2->year && d1->month == d2->month && d1->day < d2->day) {
		result=-1;
	}
	if (d1->year < d2->year && d1->month < d2->month && d1->day == d2->day) {
		result=-1;
	}
	if (d1->year < d2->year && d1->month < d2->month && d1->day < d2->day) {
		result=-1;
	}
	if (result == 1) {
		Date newd2 = { d1->year,d1->month,d1->day };
		d1->year = d2->year;
		d1->month = d2->month;
		d1->day = d2->day;
		d2->year = newd2.year;
		d2->month = newd2.month;
		d2->day = newd2.day;
	}
	cout << d1->year << "/" << d1->month << "/" << d1->day;
	cout << d2->year << "/" << d2->month << "/" << d2->day;
}

int main() {
	Date d1;
	Date d2;
	readDate(&d1);
	readDate(&d2);
	sortDates(&d1, &d2);
	return 0;
}*/

/*5.8
#include <iostream>
#include <vector>
using namespace  std;

struct EuroMillionsBet {
	vector<unsigned>mainNumbers;
	vector<unsigned>luckyStars;
};

void swap(unsigned* xp, unsigned* yp)
{
	unsigned temp = *xp;
	*xp = *yp;
	*yp = temp;
}

vector <unsigned> removeDuplicates(vector <unsigned>& v) {
	int size = v.size(), i = 0;
	while (i != size) {
		for (int j = i + 1; j < size; j++) {
			if (v[j] == v[i]) {
				for (int k = j + 1; k < size; k++) {
					swap(v[k], v[k - 1]);
				}
				v.resize(size - 1);
				size -= 1;
			}
		}
		i += 1;
	}
	return v;
}

vector <unsigned> bubbleSort(vector <unsigned>& v) {
	for (int i = 0; i < v.size() - 1; i++) {
		for (int j = 0; j < v.size() - 2; j++) {
			if (v[j] > v[j + 1]) {
				swap(&v[j], &v[j + 1]);
			}
		}
	}
	return v;
}

EuroMillionsBet intersection(EuroMillionsBet bet,EuroMillionsBet real) {
	EuroMillionsBet result;
	vector<unsigned> resultn, resultstars;
	int count = 0;
	for (int i = 0; i < real.mainNumbers.size(); i++) {
		for (int j = 0; j < bet.mainNumbers.size(); j++) {
			if (real.mainNumbers[i] == bet.mainNumbers[j]) {
				resultn.push_back(bet.mainNumbers[j]);
				count += 1;
			}
		}
	}
	if (count == 0) {
		resultn.push_back(0);
	}
	count = 0;
	for (int i = 0; i < real.luckyStars.size(); i++) {
		for (int j = 0; j < bet.luckyStars.size(); j++) {
			if (real.luckyStars[i] == bet.luckyStars[j]) {
				resultstars.push_back(bet.luckyStars[j]);
				count += 1;
			}
		}
	}
	if (count == 0) {
		resultstars.push_back(0);
	}
	resultn = removeDuplicates(resultn);
	resultstars = removeDuplicates(resultstars);
	resultn = bubbleSort(resultn);
	for (int i = 0; i < resultn.size(); i++) {
		cout << resultn[i] << " ";
	}
	resultstars = bubbleSort(resultstars);
	result = { resultn,resultstars };
	return result;
}

vector <unsigned> randomnumbers() {
	vector<unsigned>nkey;
	unsigned n;
	for (int i = 0; i < 5; i++) {
		n = rand() % 50 + 1;
		nkey.push_back(n);
	}
	return nkey;
}

vector <unsigned> randomstars() {
	vector<unsigned>starkey;
	unsigned n;
	for (int i = 0; i < 2; i++) {
		n = rand() % 12 + 1;
		starkey.push_back(n);
	}
	return starkey;
}

int main() {
	vector<unsigned>nkey;
	vector<unsigned>nstar;
	nkey = randomnumbers();
	cout << "Real numbers:";
	for (int i = 0; i < nkey.size(); i++) {
		cout << nkey[i] << " ";
	}
	nstar = randomstars();
	cout << "Real stars:";
	for (int i = 0; i < nstar.size(); i++) {
		cout << nstar[i] << " ";
	}
	unsigned n;
	vector<unsigned> mainn;
	vector<unsigned>stars;
	cout << "Main numbers bet:";
	cin >> n;
	while (!(cin.eof())) {
		if (n >= 1 && n <= 50) {
			mainn.push_back(n);
			cin >> n;
		}
		else {
			cout << "Try again:";
			cin >> n;
		}
	}
	cin.clear();
	cout << "Stars bet:";
	cin >> n;
	while (!(cin.eof())) {
		if (n >= 1 && n <= 12) {
			stars.push_back(n);
			cin >> n;
		}
		else {
			cout << "Try again:";
			cin >> n;
		}
	}
	cin.clear();
	vector<unsigned>nbet = removeDuplicates(mainn);
	vector<unsigned>starbet = removeDuplicates(stars);
	EuroMillionsBet bet = { nbet,starbet };
	EuroMillionsBet real = { nkey,nstar };
	EuroMillionsBet result = intersection(bet, real);
	cout << "Numbers won:";
	if (result.mainNumbers.size() == 1) {
		if (result.mainNumbers[0] == 0) {
			cout << "You didn't get any numbers right";
		}
		else {
			cout << result.mainNumbers[0];
		}
	}
	else {
		for (int i = 0; i < result.mainNumbers.size(); i++) {
			cout << result.mainNumbers[i] << " ";
		}
	}
	cout << "Stars won:";
	if (result.luckyStars.size() == 1) {
		if (result.luckyStars[0] == 0) {
			cout << "You didn't get any stars right";
		}
		else {
			cout << result.luckyStars[0];
		}
	}
	else {
		for (int i = 0; i < result.luckyStars.size(); i++) {
			cout << result.luckyStars[i] << " ";
		}
	}
}
*/

/*5.9 a)
#include <string>
using namespace std;

struct Address {
	string street;
	int doorn;
	string city;
};
*/

/*5.9 b)
#include <string>
using namespace std;

struct Address {
	string street;
	int doorn;
	string city;
};

struct Person {
	string name;
	int age;
	char gender;
	Address a1;
};
*/

/*5.10 a)
#include <iostream>
#include <stdlib.h>
#include<vector>
using namespace std;

struct Point {
	double x;
	double y;
};

struct Polygon {
	int p;
	vector<Point>points;
};

Point readPoints() {
	Point p;
	cout << "x:";
	cin >> p.x;
	cout << "y:";
	cin >> p.y;
	return p;
}
int main() {
	Polygon polygon;
	int points;
	vector<Point>ps;
	double area = 0;
	cout << "How many points?";
	cin >> points;
	for (int i = 0; i < points; i++) {
		Point p = readPoints();
		ps.push_back(p);
	}
	polygon = { points,ps };
	for (int i = 1; i < ps.size(); i++) {
		area += abs(polygon.points[i - 1].x * polygon.points[i].y-polygon.points[i-1].y*polygon.points[i].x);
	}
	area = abs(area / 2);
	cout << area;
}
*/

/*5.10 b)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int ELEM = 100;

struct Point {
	double x[ELEM];
	double y[ELEM];

};

struct Polygon{
	int p;
	Point points;
};

Polygon polygon;

int main() {
	int pontos;
	double x, y;
	double area = 0;
	printf("How many points?");
	scanf_s("%d", &pontos);
	polygon.p = pontos;
	for (int i = 0; i < pontos; i++) {
		printf("x:");
		scanf_s("%lf", &x);
		printf("%lf", x);
		printf("y:");
		scanf_s("%lf", &y);
		polygon.points.x[i] = x;
		polygon.points.y[i] = y;
	}
	polygon.p = pontos;
	for (int i = 1; i < pontos; i++) {
		double a = 0;
		a = (polygon.points.x[i - 1] * polygon.points.y[i] - polygon.points.y[i - 1] * polygon.points.x[i]);
		if (a < 0) {
			a = a * (-1);
		}
		area += a;
	}
	if (area < 0) {
		area = (area / 2) * (-1);
	}
	else {
		area = area / 2;
	}
	printf("area=");
	printf("%lf\n", area);
}*/


/*5.9 c)
#include <iostream>
#include <vector>
#include <string.h>
#include <stdio.h>
using namespace std;

struct Address {
	char street[50];
	int doorn;
	char city[50];
};

struct Person {
	char name[100] = { 0 };
	int age;
	char gender;
	Address a1;
};

Person readPerson(Person* p) {
	Address a1;
	char name[100] = { 0 };
	int age;
	char gender;
	char street[100];
	int doorn;
	char city[100];
	Person pn;
	cout << "Name:";
	cin.getline(pn.name, 100, '\n');
	cout << name;
	cout << "Age:";
	cin >> pn.age;
	cout << "Gender:";
	cin >> pn.gender;
	cout << "Address\n";
	cout << "Street:";
	gets_s(pn.a1.street);
	cin.getline(pn.a1.street, 100, '\n');
	cout << "Door number:";
	cin >> pn.a1.doorn;
	cout << "City:";
	gets_s(pn.a1.city);
	cin.getline(pn.a1.city, 100, '\n');
	return pn;
}

int main() {
	char city2[50];
	std::string result;
	Person p1, p2, p3;
	p1 = readPerson(&p1);
	p2 = readPerson(&p2);
	p3 = readPerson(&p3);
	cout << "City:";
	cin.getline(city2, 50);
	if ((strcmp(p1.a1.city, city2)) == 0) {
		if ((strcmp(p2.a1.city, city2)) == 0) {
			if ((strcmp(p3.a1.city, city2)) == 0) {
				cout << "hello" << endl;
				if (strcmp(p1.a1.street, p2.a1.street) == 0) {
					cout << "holo" << endl;
					result += p1.name;
					result += " ";
					result += p2.name;
					if (strcmp(p1.a1.street, p3.a1.street) == 0) {
						cout << "hello" << endl;
						result += " ";
						result += p3.name;
					}
				}
				else {
					if ((strcmp(p1.a1.street, p3.a1.street)) == 0) {
						result += p1.name;
						result += " ";
						result += p3.name;
					}
					if ((strcmp(p2.a1.street, p3.a1.street)) == 0) {
						result += p2.name;
						result += " ";
						result += p3.name;
					}
				}
			}
		}
	}
	else {
		if ((strcmp(p1.a1.city, city2)) == 0) {
			if ((strcmp(p2.a1.city, city2)) == 0) {
				if ((strcmp(p1.a1.street, p2.a1.street)) == 0) {
					result += p1.name;
					result += " ";
					result += p2.name;
				}
			}
		}
		if ((strcmp(p1.a1.city, city2)) == 0) {
			if ((strcmp(p3.a1.city, city2)) == 0) {
				if ((strcmp(p1.a1.street, p3.a1.street)) == 0) {
					result += p1.name;
					result += " ";
					result += p3.name;
				}
			}
		}
		if ((strcmp(p3.a1.city, city2)) == 0) {
			if ((strcmp(p2.a1.city, city2)) == 0) {
				if ((strcmp(p3.a1.street, p2.a1.street)) == 0) {
					result += p2.name;
					result += " ";
					result += p3.name;
				}
			}
		}
	}
	cout << result;
}*/
/*5.11 a)
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void swap(string* xp, string* yp)
{
	string temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(vector <string>& v) {
	for (int i = 0; i < v.size() - 1; i++) {
		for (int j = 0; j < v.size() - 2; j++) {
			if (v[j] > v[j + 1]) {
				swap(&v[j], &v[j + 1]);
			}
		}
	}
	for (int k = 0; k < v.size(); k++) {
		cout << v[k] << endl;
	}
}

int main() {
	vector <string> v;
	string name;
	string filename;
	vector <string> names;
	cout << "Plz enter the data file name:";
	cin >> filename;
	ifstream infile;
	infile.open(filename);
	if (infile.fail()) {
		cerr << "Error opening" << filename << endl;
		return 1;
	}
	getline(infile, name);
	names.push_back(name);

	while (!infile.eof()) {
		getline(infile, name);
		names.push_back(name);
	}
	infile.close();
	bubbleSort(names);
}*/

/*5.11 b)
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

void swap(string* xp, string* yp)
{
	string temp = *xp;
	*xp = *yp;
	*yp = temp;
}

vector <string> bubbleSort(vector <string>& v) {
	for (int i = 0; i < v.size() - 1; i++) {
		for (int j = 0; j < v.size() - 2; j++) {
			if (v[j] > v[j + 1]) {
				swap(&v[j], &v[j + 1]);
			}
		}
	}
	return v;
}

int main() {
	vector <string> v;
	string name;
	string filename;
	vector <string> names;
	cout << "Plz enter the data file name:";
	cin >> filename;
	ifstream infile;
	ofstream outfile("names_sorted.txt");
	infile.open(filename);
	if (infile.fail()) {
		cerr << "Error opening" << filename << endl;
		return 1;
	}
	getline(infile, name);
	names.push_back(name);

	while (!infile.eof()) {
		getline(infile, name);
		names.push_back(name);
	}
	infile.close();
	names=bubbleSort(names);
	for (int k = 0; k < names.size(); k++) {
		outfile << names[k] << endl;
	}
}*/
//5.12 a)
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(string argc, char* argv[])
{
	ifstream f(argv[1]);
	ofstream outfile(argv[2]);
	string str;
	string hello, holo;
	int j = 0;
	while (!(f.eof())) {
		getline(f, str);
	}
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			j++;
		}
		if (j != 2) {
			hello += str[i];
		}
		else {
			if (str[i] != ' ')
				holo += str[i];
		}
	}
	f.close();
	outfile << hello << " ";
	int n = holo.length();
	for (int i = 0; i < n; i++) {

		// Count occurrences of current character 
		int count = 1;
		while (i < n - 1 && holo[i] == holo[i + 1]) {
			count++;
			i++;
		}

		// Print character and its count 
		outfile << count << holo[i];
	}
	outfile.close();
}
/*5.12 b)
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(string argc, char* argv[])
{
	ifstream f(argv[1]);
	ofstream outfile(argv[2]);
	string str;
	string hello, holo;
	int j = 0;
	while (!(f.eof())) {
		getline(f, str);
	}
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			j++;
		}
		if (j != 2) {
			hello += str[i];
		}
		else {
			if (str[i] != ' ')
				holo += str[i];
		}
	}
	f.close();
	string n,result;
	outfile << hello << " ";
	int i = 0;
	while (i < holo.size()) {
		if (holo[i] >= '0' && holo[i] <= '9') {
			n += holo[i];
		}
		else {
			for (int j = 0; j < stoi(n); j++) {
				result += holo[i];
			}
			n = ' ';
		}
		i++;
	}
	outfile << result;
	outfile.close();
}*/
/*5.13
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <stdio.h>
using namespace std;

struct EuroMillionsBet {
	vector<int>mainNumbers;
	vector<int>luckyStars;
};

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

vector <int> removeDuplicates(vector <int>& v) {
	int size = v.size(), i = 0;
	while (i != size) {
		for (int j = i + 1; j < size; j++) {
			if (v[j] == v[i]) {
				for (int k = j + 1; k < size; k++) {
					swap(v[k], v[k - 1]);
				}
				v.resize(size - 1);
				size -= 1;
			}
		}
		i += 1;
	}
	return v;
}

vector <int> bubbleSort(vector <int>& v) {
	for (int i = 0; i < v.size() - 1; i++) {
		for (int j = 0; j < v.size() - 2; j++) {
			if (v[j] > v[j + 1]) {
				swap(&v[j], &v[j + 1]);
			}
		}
	}
	return v;
}

EuroMillionsBet intersection(EuroMillionsBet bet, EuroMillionsBet real) {
	vector<int> resultn, resultstars;
	int count = 0;
	for (int i = 0; i < real.mainNumbers.size(); i++) {
		for (int j = 0; j < bet.mainNumbers.size(); j++) {
			if (real.mainNumbers[i] == bet.mainNumbers[j]) {
				resultn.push_back(bet.mainNumbers[j]);
				count += 1;
			}
		}
	}
	if (count == 0) {
		resultn.push_back(0);
	}
	count = 0;
	for (int i = 0; i < real.luckyStars.size(); i++) {
		for (int j = 0; j < bet.luckyStars.size(); j++) {
			if (real.luckyStars[i] == bet.luckyStars[j]) {
				resultstars.push_back(bet.luckyStars[j]);
				count += 1;
			}
		}
	}
	if (count == 0) {
		resultstars.push_back(0);
	}
	resultn = removeDuplicates(resultn);
	resultstars = removeDuplicates(resultstars);
	EuroMillionsBet result = { resultn,resultstars };
	return result;
}

int main() {
	vector<int>nkey;
	vector<int>nstar;
	int number;
	string bet;
	vector<int>nbets;
	vector<int>nstars;
	int i = 0;
	cout << "Numbers:" << endl;
	while (i != 5) {
		cin >> number;
		if (number >= 0 && number <= 50) {
			if (i != 0) {
				int j = 0;
				for (int k = 0; k < nkey.size(); k++) {
					if (number != nkey[k]) {
						j++;
					}
					if (j == nkey.size()) {
						nkey.push_back(number);
						i++;
					}
				}
			}
			else {
				nkey.push_back(number);
				i++;
			}
		}
	}
	i = 0;
	cout << "Stars:" << endl;
	while (i != 2) {
		cin >> number;
		if (number >= 0 && number <= 50) {
			if (i != 0) {
				int j = 0;
				for (int k = 0; k < nstar.size(); k++) {
					if (number != nstar[k]) {
						j++;
					}
					if (j == nstar.size()) {
						nstar.push_back(number);
						i++;
					}
				}
			}
			else {
				nstar.push_back(number);
				i++;
			}
		}
	}
	nkey = bubbleSort(nkey);
	nstar = bubbleSort(nstar);
	EuroMillionsBet real = { nkey,nstar };
	ifstream f;
	ofstream outfile("bets_result.txt");
	outfile << "KEY =  ";
	for (int i = 0; i < real.mainNumbers.size(); i++) {
		outfile << real.mainNumbers[i] << " ";
	}
	outfile << "-  ";
	for (int i = 0; i < real.luckyStars.size(); i++) {
		outfile << real.luckyStars[i] << " ";
	}
	outfile << endl;
	f.open("bets.txt");
	if (f.fail()) {
		cerr << "Error opening" << endl;
		return 1;
	}
	f.seekg(0, ios::beg);
	int yes = 0;
	int t = 0;
	while (getline(f, bet)) {
		size_t posHifen = bet.find('-');
		string numbers = bet.substr(0, posHifen);
		string stars = bet.substr(posHifen + 1);
		int n;
		istringstream iss(numbers);
		yes = 0;
		while (iss >> n) {
			yes = 1;
			nbets.push_back(n);
		}
		if (t == 0) {
			outfile << bet;
		}
		else {
			outfile << endl;
			outfile << bet;
		}
		t++;
		iss.clear();
		iss.str(stars);
		while (iss >> n) {
			if (n != 0) {
				nstars.push_back(n);
			}
		}
		EuroMillionsBet bet2 = { nbets,nstars };
		EuroMillionsBet result = intersection(bet2, real);
		nbets.clear();
		nstars.clear();
		int a, b;
		if (yes != 0) {
			if (result.mainNumbers[0] != 0) {
				a = result.mainNumbers.size();
			}
			else {
				a = 0;
			}
			if (result.luckyStars[0] != 0) {
				b = result.luckyStars.size();
			}
			else {
				b = 0;
			}
			outfile << " =>  " << bet2.mainNumbers.size() << "- " << bet2.luckyStars.size() << " |  " << a << "-  " << b;
		}
	}
	f.close();
}*/
