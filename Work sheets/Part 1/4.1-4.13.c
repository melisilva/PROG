//4.1 a)
#include <iostream>
#include <iomanip>
using namespace std;
void  readArray(int a[], size_t nElem) {
	int input;
	for (int i = 0; i < nElem; i++) {
		cout << i<<":";
		cin >> a[i];
	}
	for (int i = 0; i < nElem; i++) {
		cout << i<< " " << a[i]<<endl;
	}
}

int main() {
	const int MAX_SIZE = 200;
	int a[MAX_SIZE];
	size_t nElem;
	cout << "How many elements?";
	cin >> nElem;
	readArray(a, nElem);
	return 0;
}

//4.1 b)
#include <iostream>
#include <iomanip>
using namespace std;

int findValueInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2) {
	size_t i = pos1;
	int result=-1;
	for (i; i <= pos2; i++) {
		if (a[i] == value) {
			result = i;
		}
	}
	return result;
}

int main() {
	const int MAX_SIZE = 200;
	int a[MAX_SIZE],input,value,result;
	size_t nElem,pos1,pos2;
	cout << "How many elements?";                                                                      
	cin >> nElem;
	for (int i = 0; i < nElem; i++) {
		cout << "input:";
		cin >> a[i];
	}
	for (int i = 0; i < nElem; i++) {
		cout << i << " " << a[i] << endl;
	}
	cout << "Value:";
	cin >> value;
	cout << "Position 1:";
	cin >> pos1;
	cout << "Position 2:";
	cin >> pos2;
	result = findValueInArray(a, nElem, value, pos1, pos2);
	cout << result;
	return 0;
}

//4.1 c)
#include <iostream>
#include <iomanip>
using namespace std;

int findValueInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2) {
	size_t i = pos1;
	int result = -1;
	for (i; i <= pos2; i++) {
		if (a[i] == value) {
			result = i;
		}
	}
	return result;
}

void  readArray(int a[], size_t nElem,int value,size_t pos1,size_t pos2) {
	int input,result;
	for (int i = 0; i < nElem; i++) {
		cout << i<<":";
		cin >> a[i];
	}
	for (int i = 0; i < nElem; i++) {
		cout << i << " " << a[i] << endl;
	}
	result = findValueInArray(a, nElem, value, pos1, pos2);
	cout << result;
}

int main() {
	const int MAX_SIZE = 200;
	int a[MAX_SIZE],value;
	size_t nElem,pos1,pos2;
	cout << "How many elements?";
	cin >> nElem;
	cout << "Value:";
	cin >> value;
	cout << "Position 1:";
	cin >> pos1;
	cout << "Position 2:";
	cin >> pos2;
	readArray(a, nElem,value,pos1,pos2);
	return 0;
}

//4.1 d)
#include <iostream>
#include <iomanip>
using namespace std;

int findValueInArray(const int a[], size_t nElem, int value, size_t pos1=0, size_t pos2=0) {
	size_t i = pos1;
	int result = -1;
	for (i; i <= pos2; i++) {
		if (a[i] == value) {
			result = i;
		}
	}
	return result;
}

int main() {
	const int MAX_SIZE = 200;
	int a[MAX_SIZE], input, value, result;
	size_t nElem, pos1, pos2;
	cout << "How many elements?";
	cin >> nElem;
	for (int i = 0; i < nElem; i++) {
		cout << i<<":";
		cin >> a[i];
	}
	for (int i = 0; i < nElem; i++) {
		cout << i << " " << a[i] << endl;
	}
	cout << "Value:";
	cin >> value;
	result = findValueInArray(a, nElem, value);
	cout << result;
	return 0;
}

//4.1 e)
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

size_t findMultiValuesInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2, size_t index[]) {
	size_t i = pos1;
	int result = -1, counter, id = 0;
	for (i; i <= pos2; i++) {
		if (a[i] == value) {
			result = i;
			index[id] = i;
			id += 1;
		}
	}
	return id;
}

//It's possible to have the same name, it occurs overload.

//4.1 f)
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

size_t findMultiValuesInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2, size_t index[]) {
	size_t i = pos1;
	int result = -1, counter, id = 0;
	for (i; i <= pos2; i++) {
		if (a[i] == value) {
			result = i;
			index[id] = i;
			id += 1;
		}
	}
	return id;
}

int findValueInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2) {
	size_t i = pos1;
	int result = -1,counter=0;
	for (i; i <= pos2; i++) {
		if (a[i] == value) {
			result = i;
		}
	}
	const int MAX = 200;
	size_t index[MAX];
	counter=findMultiValuesInArray(a, nElem, value, pos1, pos2, index);
	return counter;
}

void  readArray(int a[], size_t nElem, int value, size_t pos1, size_t pos2) {
	int input, result;
	for (int i = 0; i < nElem; i++) {
		cout << i<<":";
		cin >> a[i];
	}
	for (int i = 0; i < nElem; i++) {
		cout << i << " " << a[i] << endl;
	}
	result = findValueInArray(a, nElem, value, pos1, pos2);
	cout << result;
}

int main() {
	const int MAX_SIZE = 200;
	int a[MAX_SIZE], value;
	size_t nElem, pos1, pos2;
	cout << "How many elements?";
	cin >> nElem;
	cout << "Value:";
	cin >> value;
	cout << "Position 1:";
	cin >> pos1;
	cout << "Position 2:";
	cin >> pos2;
	readArray(a, nElem, value, pos1, pos2);
	return 0;
}

//4.2 a) 
#include <iostream>
#include <vector>
using namespace std;

void findMultValuesInVector(const vector <int>& v, int value, size_t pos1, size_t pos2, vector <size_t>& index) {
    size_t i = pos1;
    int result = -1, counter = 0;
    for (i; i <= pos2; i++) {
        if (v[i] == value) {
            result = i;
            index.push_back(i);
            counter += 1;
        }
    }
    cout << counter;
}

size_t findValueInVector(const vector <int>& v, int value, size_t pos1, size_t pos2) {
    size_t i = pos1;
    int counter;
    int result = -1;
    for (i; i <= pos2; i++) {
        if (v[i] == value) {
            result = i;
        }
    }
    return result;
}

void readVector(vector<int>& v, size_t nElem, int value, size_t pos1, size_t pos2) {
    int input;
    size_t result;
    vector <size_t> index;
    for (int i = 0; i < nElem; i++) {
        cout << i << ":";
        cin >> input;
        v.push_back(input);
    }
    for (int i = 0; i < nElem; i++) {
        cout << i << " " << v[i] << endl;
    }
    result = findValueInVector(v, value, pos1, pos2);
    cout << result << endl;
    findMultValuesInVector(v, value, pos1, pos2, index);
}

int main() {
    size_t nElem, pos1, pos2;
    int value, result;
    vector <int> v;
    cout << "How many elements?";
    cin >> nElem;
    cout << "Value:";
    cin >> value;
    cout << "Position 1:";
    cin >> pos1;
    cout << "Position 2:";
    cin >> pos2;
    readVector(v, nElem, value, pos1, pos2);
    return 0;
}

//4.2 b)
#include <iostream>
#include <vector>
using namespace std;

void readVector(vector<int>& v) {
    int input;
    cout << "input:";
    cin >> input;
    while(!(cin.eof())) {
        v.push_back(input);
        cout << "input:";
        cin >> input;
    }
    for (int i = 0; i < v.size(); i++) {
        cout << i << " " << v[i] << endl;
    }
}

int main() {
    vector <int> v;
    readVector(v);
}

//4.2 c)
#include <iostream>
#include <vector>
using namespace std;

vector <size_t> findMultValuesInVector(const vector <int> &v, int value, size_t pos1, size_t pos2, vector <size_t> &index) {
    size_t i = pos1;
    int result = -1, counter = 0;
    for (i; i <= pos2; i++) {
        if (v[i] == value) {
            result = i;
            index[counter] = i;
            counter += 1;
        }
    }
    return index;
}

size_t findValueInVector(const vector <int> &v, int value,size_t pos1,size_t pos2) {
    size_t i = pos1;
    int counter;
    int result = -1;
    vector <size_t> index;
    for (i; i <= pos2; i++) {
        if (v[i] == value) {
            result = i;
        }
    }
    cout << result;
    return result;
}

vector<int> readVector(vector<int>& v, size_t nElem, int value, size_t pos1, size_t pos2) {
    int input;
    size_t result,counter;
    for (int i = 0; i < nElem; i++) {
        cout << "input:";
        cin >> input;
        v.push_back(input);
    }
    for (int i = 0; i < nElem; i++) {
        cout << i << " " << v[i] << endl;
    }
    result=findValueInVector(v, value, pos1, pos2);
    return v;
}

//It's an advantage to save the values produced by the functions instead of simply displaying them on screen.However it wouldn't be possible to do the same in problem 4.1, because it's not possible to return arrays.

//4.3 a) & b)
#include <iostream>
#include <vector>
using namespace std;

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(vector <int>& v) {
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
	vector <int> v = { 1,2,3,4,5,6,7,8,9,10 };
	bubbleSort(v);
}

//4.3 c)
#include <iostream>
#include <vector>
using namespace std;

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(vector <int>& v) {
	int noswap = 0;
	for (int i = 0; i < v.size() - 1; i++) {
		for (int j = 0; j < v.size() - 2; j++) {
			if (v[j] > v[j + 1]) {
				swap(&v[j], &v[j + 1]);
				noswap += 1;
			}
		}
		if (noswap == 0) {
			break;
		}
	}
	for (int k = 0; k < v.size(); k++) {
		cout << v[k] << endl;
	}
}

int main() {
	vector <int> v;
	vector <int> v = { 1,2,3,4,5,6,7,8,9,10 };
	bubbleSort(v);
}

//4.3 d)
#include <iostream>
#include <vector>
using namespace std;

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(vector <int>& v, char x) {
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
    vector <int> v = { 1,2,3,4,6,5,8,7,9,10 };
    char order;
    cout << "Would you like to order them ascending or descending (a,d)?" << endl;
    cin >> order;
    bubbleSort(v, order);
}

//4.3 e)
#include <iostream>
#include <vector>
using namespace std;

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

bool ascending(int x, int y) {
    if (x > y) {
        return true;
    }
    else {
        return false;
    }
}

bool descending(int x, int y) {
    if (x < y) {
        return true;
    }
    else {
        return false;
    }
}
void bubbleSort(vector <int>& v, bool f(int x, int y) ){
    for (int i = 0; i < v.size() - 1; i++) {
        for (int j = 0; j < v.size() - 1; j++) {
            if (ascending) {
                if (v[j] > v[j + 1]) {
                    swap(&v[j], &v[j + 1]);
                }
            }
            if(descending) {
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
    vector <int> v = { 2,1,3,4,5,6,7,8,9,10 };
    char order;
    bubbleSort(v,descending);
}

//4.4 a) & b)
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& v, int value) {
    int first = 0, last = v.size() - 1, middle;
    bool found = false;
    while (first <= last) {
        middle = (first + (last - 1)) / 2;
        if (v[middle] == value) {
            found = true;
            return middle;
        }
        if (v[middle] < value) {
            first = middle + 1;
        }
        else {
            last = middle - 1;
        }
    }
    return -1;
}

int main() {
    vector <int> v = { 1,2,3,4,5,6,7,8,9,10 };
    int value = 3;
    int index;
    index=binarySearch(v, value);
    cout << index;
}

//4.5 a) & b)
#include <iostream>
#include <vector>
using namespace std;

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void removeDuplicates(vector <int>& v) {
    int size = v.size(),i=0;
    while (i != size) {
        for (int j = i + 1; j < size; j++) {
            if (v[j] == v[i]) {
                for (int k = j+1; k < size; k++) {
                    swap(v[k], v[k - 1]);
                }
                v.resize(size - 1);
                size -= 1;
            }
        }
        i += 1;
    }
    for (int k = 0; k < v.size(); k++) {
        cout << v[k] << " ";
    }
}

int main() {
    vector <int> v = { 2,2,5,4,6,5,3 };
    removeDuplicates(v);
}

//4.6 a) & b)
#include <iostream>
#include <vector>
using namespace std;

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

void union1(const vector<int> &v1, const vector<int> &v2, vector<int> &v3) {
    for (int i = 0; i < v1.size(); i++) {
        v3.push_back(v1[i]);
    }
    for (int j = 0; j < v2.size(); j++) {
        v3.push_back(v2[j]);
    }
    v3 = removeDuplicates(v3);
    v3 = bubbleSort(v3);
    cout << "Union: ";
    for (int k = 0; k < v3.size(); k++) {
        cout << v3[k] << " ";
    }
}

void intersection(const vector<int>& v1, const vector<int>& v2, vector<int>& v4) {
    for (int i = 0; i < v1.size(); i++) {
        for (int j = 0; j < v2.size(); j++) {
            if (v1[i] == v2[j]) {
                v4.push_back(v1[i]);
            }
        }
    }
    V4 = removeDuplicates(v4);
    V4 = bubbleSort(v4);
    cout << "Intersection: ";
    for (int k = 0; k < v4.size(); k++) {
        cout << v4[k] << " ";
    }
}

int main() {
    vector <int> v1 = { 10,20,30,34 };
    vector <int> v2 = { 30,12,34 };
    vector<int> v3;
    vector <int> v4;
    union1(v1, v2, v3);
    intersection(v1, v2, v4);
}

//4.7 a) & b)
#include <iostream>
using namespace std;

const int NE = 5;

void localMax(const int a[][NE]) {
    for (int j = 1; j < NE - 1; j++) {
        for (int i = 1; i < NE - 1; i++) {
            if (a[j][i] > a[j - 1][i - 1] && a[j][i] > a[j - 1][i] && a[j][i] > a[j - 1][i + 1] && a[j][i] > a[j][i - 1] && a[j][i] > a[j][i + 1] && a[j][i] > a[j + 1][i - 1] && a[j][i] > a[j + 1][i] && a[j][i] > a[j + 1][i + 1]) {
                cout << "local maxima=" << a[j][i] << endl;
            }
        }
    }
}

int main() {
    int a[5][5] = { {7,3,4,1,3},{2,9,6,2,1},{1,3,5,1,4},{6,5,2,7,5},{4,2,1,3,6} };
    int NE = 5;
    localMax(a);
}

//4.7 c)
#include <iostream>
#include <vector>
using namespace std;

void localMax(vector <vector<int>>& matrix, int NE, bool minn) {
	if (minn == false) {
		for (int j = 1; j < NE - 1; j++) {
			for (int i = 1; i < NE - 1; i++) {
				if (matrix[j][i] > matrix[j - 1][i - 1] && matrix[j][i] > matrix[j - 1][i] && matrix[j][i] > matrix[j - 1][i + 1] && matrix[j][i] > matrix[j][i - 1] && matrix[j][i] > matrix[j][i + 1] && matrix[j][i] > matrix[j + 1][i - 1] && matrix[j][i] > matrix[j + 1][i] && matrix[j][i] > matrix[j + 1][i + 1]) {
					cout << "local maxima=" << matrix[j][i] << endl;
				}
			}
		}
	}
	else {
		for (int j = 1; j < NE - 1; j++) {
			for (int i = 1; i < NE - 1; i++) {
				if (matrix[j][i] > matrix[j - 1][i - 1] && matrix[j][i] > matrix[j - 1][i] && matrix[j][i] > matrix[j - 1][i + 1] && matrix[j][i] > matrix[j][i - 1] && matrix[j][i] > matrix[j][i + 1] && matrix[j][i] > matrix[j + 1][i - 1] && matrix[j][i] > matrix[j + 1][i] && matrix[j][i] > matrix[j + 1][i + 1]) {
					cout << "local maxima=" << matrix[j][i] << endl;
				}
			}
		}
		for (int i = 0; i < NE - 1; i++) {
			if (matrix[i][0] > matrix[i][1] && matrix[i][0] > matrix[i + 1][0] && matrix[i][0] > matrix[i + 1][1]) {
				cout << "local maxima=" << matrix[i][0] << endl;
			}
		}
		for (int i = 0; i < NE - 1; i++) {
			if (matrix[i][NE - 1] > matrix[i][NE - 2] && matrix[i][NE - 1] > matrix[i + 1][NE - 1] && matrix[i][NE - 1] > matrix[i + 1][NE - 2]) {
				cout << "local maxima=" << matrix[i][NE-1] << endl;
			}

		}
	}
}

int main(){
	bool minn;
	string input;
	int NE = 5;
	cout << "Do you want to consider that any element of the matrix can be a local maximum?(Y|N)" << endl;
	cin >>input;
	if (input == "Y") {
		minn = true;
	}
	if (input == "N") {
		minn = false;
	}
	vector<vector<int> > matrix{ {7,3,4,1,3},{2,9,6,2,1},{1,3,5,1,4},{6,5,2,7,5},{4,2,1,3,6} };
	localMax(matrix, NE, minn);
}

//4.8
#include <vector>
#include <iostream>
#include <cmath>
#include <string>
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

size_t daysofmonth(size_t& month, int& year) {
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

double dailyavf(vector<vector<int>>& pluviosity,int year) {
    double sum = 0;
    double dailyav;
    int totaldays;
    for (size_t month = 0; month < 12; month++) {
        size_t month1 = month + 1;
        size_t days = daysofmonth(month1, year);
        if (!leapyear(year)) {
            totaldays = 365;
        }
        else {
            totaldays = 366;
        }
        for (int day = 0; day < days; day++) {
            sum = sum + pluviosity[month][day];
        }
    }
    dailyav=(sum / totaldays);
    return dailyav;
}

vector<string>adailyav(vector<vector<int>>& pluviosity, double dailyav, int year, vector <string>& adatas) {
    vector<int>maxvalues;
    for (size_t month = 0; month < 12; month++) {
        size_t month1 = month + 1;
        size_t days = daysofmonth(month1, year);
        for (int day = 0; day < days; day++) {
                if (pluviosity[month][day] > dailyav) {
                    maxvalues.push_back(pluviosity[month][day]);
                }
            }
        }
    for (int i = 0; i < maxvalues.size(); i++) {
        for (size_t month = 0; month < 12; month++) {
            size_t month1 = month + 1;
            size_t days = daysofmonth(month1, year);
            for (int day = 0; day < days; day++) {
                if (pluviosity[month][day] == maxvalues[i]) {
                    string m = to_string(month1);
                    string d = to_string(day + 1);
                    string data = d + "/" + m;
                    adatas.push_back(data);
                }
            }
        }
    }
    return adatas;
}

vector<double> monthlyavf(vector<vector<int>>& pluviosity, vector <double>& monthlyav, int year) {
    double sum = 0;
    for (size_t month = 0; month < 12; month++) {
        size_t month1 = month + 1;
        size_t days = daysofmonth(month1, year);
        for (int day = 0; day < days; day++) {
            sum = sum + pluviosity[month][day];
        }
        monthlyav.push_back(sum / days);
    }
    return monthlyav;
}

vector<string> maxpluviosity(vector<vector<int>>& pluviosity, int year, vector<string>& maxdatas) {
    vector<int>maxvalues = { 0 };
    for (size_t i = 1; i < 13; i++) {
        size_t day = daysofmonth(i, year);
        for (int j = 0; j < day; j++) {
            if (pluviosity[i - 1][j] > maxvalues[0]) {
                maxvalues[0] = pluviosity[i - 1][j];
            }
        }
    }
    for (size_t i = 1; i < 13; i++) {
        size_t day = daysofmonth(i, year);
        for (int j = 0; j < day; j++) {
            if (pluviosity[i - 1][j] == maxvalues[0]) {
                string m = to_string(i);
                string d = to_string(j+1);
                string data = d + "/" + m;
                maxdatas.push_back(data);
            }
        }
    }
    return maxdatas;
}

vector<vector<int>> readpluviosity(vector<vector<int>>& pluviosity, int year) {
    for (size_t month = 0; month < 12; month++) {
        size_t month1 = month + 1;
        size_t days = daysofmonth(month1, year);
        for (int day = 1; day <= days; day++) {
            int rain = (rand() % 400) + 300;
            pluviosity[month].push_back(rain);
        }
    }
    return pluviosity;
}


int main() {
    vector<vector<int>> pluviosity;
    double dailyav;
    vector <double> monthlyav;
    vector<string> maxdatas;
    vector<string>adatas;
    int year;
    size_t days;
    size_t months = 12;
    year = rand() % 30 + 1985;
    for (size_t month = 0; month < months; month++) {
        size_t month1 = month + 1;
        size_t days = daysofmonth(month1, year);
        vector<int>myRow(month, days);
        pluviosity.push_back(myRow);
    }
    pluviosity = readpluviosity(pluviosity, year);
    cout << "Pluviosity daily" << endl;
    for (size_t i = 1; i < 13; i++) {
        size_t day = daysofmonth(i, year);
        for (int j = 0; j < day; j++) {
            cout << j+1<<"/"<<i<<":"<<pluviosity[i-1][j] << endl;
        }
    }
    cout << endl;
    cout << "Monthly average" << endl;
    monthlyav = monthlyavf(pluviosity, monthlyav, year);
    for (int i = 0; i < monthlyav.size(); i++) {
        cout << i+1<<":"<< monthlyav[i] << endl;
    }
    cout << endl;
    dailyav = dailyavf(pluviosity,year);
    cout << "Daily average:"<<dailyav << endl;
    cout << endl;
    cout << "Maximum pluviosity days:" << endl;
    maxdatas = maxpluviosity(pluviosity, year, maxdatas);
    for (int i = 0; i < maxdatas.size(); i++) {
        cout << maxdatas[i] << endl;
    }
    cout << endl;
    cout << "Days above average pluviosity" << endl;
    adatas=adailyav(pluviosity, dailyav,year, adatas);
    for (int i = 0; i < adatas.size(); i++) {
        cout << adatas[i] << endl;
    }
    return 0;
}

//4.9
//x and y share a reference now, so there values are the same (first fragment)
//x and y have pointers that point to the same place, in this case where x is stored so, ptr_x and ptr_y have the same value and so does the duo *ptr_x and *ptr_y but x and y don't have the same value

//4.10
#include <iostream>
using namespace std;

int main() {
	int values[] = { 2,3,5,7,11,13 };
	int *p = values + 1;
	cout << values[1] << endl; //element on index 1
	cout << values << endl; //memory reference of first element
	cout << values + 1 << endl; //memory reference of second element (plus 4 then memory reference of first element, int type elements have a size of 4 bytes)
	cout << *p << endl; //element on index 1
	cout << *(values + 3) << endl; //element on index 3 (values is on index 0, 0+3=3)
	cout << p + 1 << endl; //memory reference of third element
	cout << p[1] << endl; //element on index 2
	cout << p - values << endl; //difference between element on index 1 minus element on index 0
	return 0;
}

//4.11 a)
#include <iostream>
#include <stdlib.h>
using namespace std;

int comparator(const void* n1, const void* n2) {
	return (*(int*)n1 - *(int*)n2);
}


int main() {
	const int ELEM = 10;
	int a[ELEM], number, num;
	for (int i = 0; i < 10; i++) {
		cout << "Number:";
		cin >> num;
		a[i] = num;
	}
	num = sizeof(a) / sizeof(a[0]);
	qsort(a, num, sizeof(int), comparator);
	for (int i = 0; i < num; i++) {
		cout << a[i] << " ";
	}
	return 0;
}

//4.11 b)
#include <iostream>
#include <stdlib.h>
using namespace std;

int comparator(const void* n1, const void* n2) {
	return (*(int*)n2 - *(int*)n1);
}


int main() {
	const int ELEM = 10;
	int a[ELEM], number, num;
	for (int i = 0; i < 10; i++) {
		cout << "Number:";
		cin >> num;
		a[i] = num;
	}
	num = sizeof(a) / sizeof(a[0]);
	qsort(a, num, sizeof(int), comparator);
	for (int i = 0; i < num; i++) {
		cout << a[i] << " ";
	}
	return 0;
}

//4.11 c)
#include <iostream>
#include <stdlib.h>
using namespace std;

int comparator(const void* n1, const void* n2) {
	return (*(int*)n1 - *(int*)n2);
}

int main() {
	const int ELEM = 10;
	int a[ELEM], number, num;
	for (int i = 0; i < 10; i++) {
		cout << "Number:";
		cin >> num;
		a[i] = num;
	}
	num = sizeof(a) / sizeof(a[0]);
	num = num / 2;
	qsort(a, num, sizeof(int), comparator);
	for (int i = 0; i < num; i++) {
		cout << a[i] << " ";
	}
	int* b = a + num;
	qsort(b, num, sizeof(int), comparator);
	for (int i = 0; i < num; i++) {
		cout << b[i] << " ";
	}
	return 0;
}

//4.12 a)
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

size_t findMultValuesInArray(const int*a, size_t nElem, int value, size_t pos1, size_t pos2, size_t*index) {
    size_t i = pos1;
    int result = -1, counter, id = 0;
    for (i; i <= pos2; i++) {
        if (a[i] == value) {
            result = i;
            index[id] = i;
            id += 1;
        }
    }
    return id;
}

int findValueInArray(const int*a, size_t nElem, int value, size_t pos1, size_t pos2) {
    size_t i = pos1;
    int result = -1, counter = 0;
    for (i; i <= pos2; i++) {
        if (a[i] == value) {
            result = i;
            counter += 1;
        }
    }
    size_t* index;
    index = new size_t[counter];
    counter = findMultValuesInArray(a, nElem, value, pos1, pos2, index);
    return counter;
}

void  readArray(int*a, size_t nElem) {
    for (int i = 0; i < nElem; i++) {
        cout << "input:";
        cin >> a[i];
    }
    for (int i = 0; i < nElem; i++) {
        cout << i << " " << a[i] << endl;
    }
}

int main() {
    int* a;
    int value,result;
    size_t nElem, pos1, pos2;
    cout << "How many elements?";
    cin >> nElem;
    a = new int[nElem];
    cout << "Value:";
    cin >> value;
    cout << "Position 1:";
    cin >> pos1;
    cout << "Position 2:";
    cin >> pos2;
    readArray(a, nElem);
    result = findValueInArray(a, nElem, value, pos1, pos2);
    cout << result;
    return 0;
}

//4.12 b)
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

size_t findMultValuesInArray(const int*pos1,const int*pos2,int value,size_t*index) {
    int i=0,result = -1, counter, id = 0;
    while (pos1[i] != pos2[0]) {
        if (pos1[i] == value) {
            result = i;
            index[id] = i;
            id += 1;
        }
    }
    return id;
}

int findValueInArray(const int *pos1,const int *pos2,int value) {
    int i = 0,result=-1,counter=0;
    while (pos1[i] != pos2[0]) {
        if (pos1[i] == value) {
            result = i;
            counter += 1;
        }
        i += 1;
    }
    size_t* index;
    index = new size_t[counter];
    size_t repeat = findMultValuesInArray(pos1, pos2, value, index);
    return result;
}

void  readArray(int* a, size_t nElem) {
    int input;
    for (int i = 0; i < nElem; i++) {
        cout << "input:";
        cin >> a[i];
    }
    for (int i = 0; i < nElem; i++) {
        cout << i << " " << a[i] << endl;
    }
}

int main() {
    int* a;
    int value, * newpos1, * newpos2,result;
    size_t nElem, pos1, pos2;
    cout << "How many elements?";
    cin >> nElem;
    a = new int[nElem];
    cout << "Value:";
    cin >> value;
    cout << "Position 1:";
    cin >> pos1;
    cout << "Position 2:";
    cin >> pos2;
    readArray(a, nElem);
    newpos1 = &a[pos1];
    cout << newpos1 << endl;
    newpos2 = &a[pos2];
    cout << newpos2 << endl;

    result = findValueInArray(newpos1, newpos2, value);
    result = pos1 + result;
    return 0;
}

//4.13
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
void fill_grades(int **grade, int NUMBER_STUDENTS, int NUMBER_QUIZZES);
void compute_st_ave(int**grade, double *st_ave, int NUMBER_STUDENTS, int NUMBER_QUIZZES);
void compute_quiz_ave(int **grade, double
	*quiz_ave, int NUMBER_STUDENTS, int NUMBER_QUIZZES);
void display(int **grade, double *st_ave,
	const double *quiz_ave, int NUMBER_STUDENTS, int NUMBER_QUIZZES);
//------------------------------------------------------------------------
int main()
{
	int NUMBER_STUDENTS, NUMBER_QUIZZES;
	cout << "Number of students:" << endl;
	cin >> NUMBER_STUDENTS;
	cout << "Number of quizzes:" << endl;
	cin >> NUMBER_QUIZZES;
	int** grade = new int* [NUMBER_STUDENTS];
	for(int i=0;i<NUMBER_STUDENTS;i++)
		grade[i]=new int[NUMBER_QUIZZES] ;
	double* st_ave;
	st_ave=new double[NUMBER_STUDENTS] ;
	double* quiz_ave;
	quiz_ave=new double[NUMBER_QUIZZES] ;
	fill_grades(grade, NUMBER_STUDENTS, NUMBER_QUIZZES);
	compute_st_ave(grade, st_ave, NUMBER_STUDENTS, NUMBER_QUIZZES);
	compute_quiz_ave(grade, quiz_ave, NUMBER_STUDENTS, NUMBER_QUIZZES);
	display(grade, st_ave, quiz_ave, NUMBER_STUDENTS, NUMBER_QUIZZES);
	return 0;
}
//------------------------------------------------------------------------
void fill_grades(int **grade, int NUMBER_STUDENTS, int NUMBER_QUIZZES)
{for (int st_num = 0; st_num < NUMBER_STUDENTS; st_num++)
	for (int quiz_num = 0; quiz_num < NUMBER_QUIZZES; quiz_num++)
		grade[st_num][quiz_num] = 10 + rand() % 11;
}
//------------------------------------------------------------------------
void compute_st_ave(int **grade, double *st_ave, int NUMBER_STUDENTS, int NUMBER_QUIZZES)
{
	for (int st_num = 0; st_num < NUMBER_STUDENTS; st_num++)
	{
		double sum = 0;
		for (int quiz_num = 0; quiz_num < NUMBER_QUIZZES; quiz_num++)
			sum = sum + grade[st_num][quiz_num];
		st_ave[st_num] = sum / NUMBER_QUIZZES;
	}
}
//------------------------------------------------------------------------
void compute_quiz_ave(int **grade, double *quiz_ave, int NUMBER_STUDENTS, int NUMBER_QUIZZES)
{
	for (int quiz_num = 0; quiz_num < NUMBER_QUIZZES; quiz_num++)
	{
		double sum = 0;
		for (int st_num = 0; st_num < NUMBER_STUDENTS; st_num++)
			sum = sum + grade[st_num][quiz_num];
		quiz_ave[quiz_num] = sum / NUMBER_STUDENTS;
	}
}
//------------------------------------------------------------------------
void display(int **grade, double *st_ave,
	const double *quiz_ave, int NUMBER_STUDENTS, int NUMBER_QUIZZES)
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	cout << setw(10) << "Student"
		<< setw(5) << "Ave"
		<< setw(15) << "Quizzes\n";
	for (int st_num = 0; st_num < NUMBER_STUDENTS; st_num++)
	{
		cout << setw(10) << st_num + 1
			<< setw(5) << st_ave[st_num] << " ";
		for (int quiz_num = 0; quiz_num < NUMBER_QUIZZES; quiz_num++)
			cout << setw(5) << grade[st_num][quiz_num];
		cout << endl;
	}
	cout << "Quiz averages = ";
	for (int quiz_num = 0; quiz_num < NUMBER_QUIZZES; quiz_num++)
		cout << setw(5) << quiz_ave[quiz_num];
	cout << endl;
}
