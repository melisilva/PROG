//1.1
#include <iostream>
using namespace std;
int main()
{
	char character;
	cout << "character?";
	cin >> character;
	cout << "The ASCII value of " << character << " is " << int(character);

	return 0;
}

//1.2
#include <iostream>
using namespace std;
int main()
{
	long double A, B, C, mean;
	cout << "Please input 3 integer numbers\n";
	cout << "A?";
		cin >> A;
		cout << "B?";
		cin >> B;
		cout << "C?";
			cin >> C;
			mean = (A + B + C) / 3;  //compute mean
			//show results
				cout << "mean=" << mean << endl;
				cout << "A-mean=" << A - mean << endl;
				cout << "B-mean=" << B - mean << endl;
				cout << "C-mean=" << C - mean << endl;

				return 0;

}

//1.3
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	float mass_sphere, mass_material, radius;

	cout << "what's the specific mass of the material from which the sphere is made?";
	cin >> mass_material;
	cout << "what's the radius of the sphere?";
	cin >> radius;
	mass_sphere = (4.0 / 3.0) * M_PI * pow(radius,3);
	cout << mass_sphere << endl;
return 0;

}

//1.4
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

/*1.5 a)
#include <iostream>
using namespace std;

int main()
{
	int h1, m1, s1;	//first time
	int h2, m2, s2;	//second time
	int H, M, S,D;	//result

	cout << "Time1?";
	cin >> h1>> m1>> s1;
	cout << "Time2?";
	cin >> h2 >> m2 >> s2;

	S= s1 + s2;
	M = m1 + m2 + (S / 60);
	H = h1 + h2 + (M / 60);
	D = H / 24;
	H = H % 24;
	M = M % 60;	//remaining minutes
	S = S % 60;	//remaining seconds

	cout << "Time1 + Time2 ="<< D<< " days(s) "<< H << " hour(s) " << M << " minute(s) " << S << " second(s)" << endl;

	return 0;
}*/

1.5 b)
#include <iostream>
using namespace std;

int main()
{
	int h1, m1, s1;
	int h2, m2, s2;
	int D, H, M, S;
	char ch;
	cout << "Time1?";
	cout << "Time2?";
	cin >> h1>> ch>> m1>>ch>> s1;
	cin >> h2 >> ch >> m2 >> ch >> s2;
	S = s1 + s2;
	M = m1 + m2 + (S / 60);
	H = h1 + h2 + (M / 60);
	D = H / 24;
	H = H % 24;
	M = M % 60;	//remaining minutes
	S = S % 60;	//remaining seconds

	cout << "Time1 + Time2 =" << D << " days(s) " << H << " hour(s) " << M << " minute(s) " << S << " second(s)" << endl;

	return 0;
}


1.6
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int xp1, yp1,xp2,yp2,xp3,yp3; //points
	double s, a, b, c;
	cout << "What's the coordinates of point 1?" << endl;
	cout << "x?";
	cin >> xp1;
	cout << "y?";
	cin >> yp1;
	cout << "What's the coordinates of point 2?" << endl;
	cout << "x?";
	cin >> xp2;
	cout << "y?";
	cin >> yp2;
	cout << "What's the coordinates of point 3?" << endl;
	cout << "x?";
	cin >> xp3;
	cout << "y?";
	cin >> yp3;

	a = sqrt(pow(xp2 - xp1, 2) + pow(yp2 - yp1, 2)); //lenght side between point 1 and point 2
	b = sqrt(pow(xp3 - xp2, 2) + pow(yp3 - yp2, 2)); //lenght side between point 2 and point 3
	c = sqrt(pow(xp3 - xp1, 2) + pow(yp3 - yp1, 2)); //lenght side between point 1 and point 3
	s = (a + b + c) / 2;

	cout << "Area=" << sqrt(s * (s - a) * (s - b) * (s - c)) << endl;
	return 0;

}
