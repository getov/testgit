#include <iostream>
using namespace std;

int newCall[] = { 11, 22, 33 };

// can change VALUE of p
void pointer_param(int* p)
{ 
	//*p = 0;  // changes the value
	//p = newCall; // doesnt change the address
	//++p;

	// OK
	for (int i = 0; i < 20; ++i)
	{
		*p = 0;
		++p;
	}
} 

// can change ADDRESS and VALUE of p
void ref_to_pointer(int*& p)
{
	//*p = 0; // changes the value
	//p = newCall; // changes the address
	//++p;

	// OPS NOT !!!!! not WORKING
	for (int i = 0; i < 20; ++i)
	{
		*p = 0;
		++p;
	}
}

int main()
{
	int coll[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
				   11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };

	int* pRGB = coll;

	for (int i = 0; i < 20; ++i)
	{
		cout << pRGB[i] << " ";
	}

	cout << endl;

	cout << "Value   BEFORE: " << *pRGB << endl;
	cout << "Address BEFORE: " << pRGB << endl;

	// the value of pRGB can be changed
	// doesn't change the address of pRGB
	//pointer_param(pRGB); 
	//cout << "Value   AFTER: " << *pRGB << endl;
	//cout << "Address AFTER: " << pRGB << endl;
	cout << "AFTER\n";
	for (int i = 0; i < 20; ++i)
	{
		cout << pRGB[i] << " ";
	}

	// the value of pRGB can be changed
	// the address of pRGB can be changed
	//ref_to_pointer(pRGB);
	//cout << "Value   AFTER: " << *pRGB << endl;
	//cout << "Address AFTER: " << pRGB << endl;
	/*for (int i = 0; i < 20; ++i)
	{
		cout << pRGB[i] << " ";
	}*/
}