#include <iostream>
using namespace std;

int main()
{
	float r = 0.6;
	float g = 0.0;
	float b = 0.4;

	float D = 0.25;

	float multR = (1 - D) * 0.299f;
	float multG = (1 - D) * 0.587f;
	float multB = (1 - D) * 0.114f;

	cout << "multR = " << multR << endl;
	cout << "multG = " << multG << endl;
	cout << "multB = " << multB << endl;

	cout << endl;

	r = r*(D + multR) + g*multG + b*multB;
	g = g*(D + multG) + r*multR + b*multB;
	b = b*(D + multB) + r*multR + g*multG;

	cout << "r = r*" << (D + multR) << " + " << "g*" << multG << " + " << "b*" << multB << endl;
	cout << "g = g*" << (D + multG) << " + " << "r*" << multR << " + " << "b*" << multB << endl;
	cout << "b = b*" << (D + multB) << " + " << "r*" << multR << " + " << "g*" << multG << endl;

	//cout << "[ " << r << ", " << g << ", " << b << " ]" << endl;
}
