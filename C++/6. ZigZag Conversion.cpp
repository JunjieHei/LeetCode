// 6. ZigZag Conversion.cpp : 
// m = numRows
// Characters in row 0 are located at indices [(2m-2)*0+i,(2m-2)*1+i,...]
// Characters in row numRows - 1 are located at indices [(2m-2)*0+i,(2m-2)*1+i,...]
// Characters in inner row i are located at indices [(2m-2)*0+i,(2m-2)*1-i, (2m-2)*1+i, (2m-2)*2+i, (2m-2)*2-i,...]
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

string convert(string s, int numRows) {

	if (numRows == 1) return s;

	string result;
	int n = s.size();
	int cycle = 2 * numRows - 2;

	for (int i = 0; i < numRows; i++) {
		for (int j = 0; j + i < n; j += cycle) {
			result += s[j + i];
			if (i != 0 && i != numRows - 1 && j + cycle - i < n)
				result += s[j + cycle - i];
		}
	
	}
	return result;
}
int main()
{
	string s = "PAYPALISHIRING";
	string result;
	int numRows = 4;
	
	result = convert(s, numRows);
	cout << "result:" << result << endl;
	
}

