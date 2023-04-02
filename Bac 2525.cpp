#include <iostream>

using namespace std;

int main(void) {
	int a, b, c;
	
	cin >> a >> b >> c;
	
	int min = 60 * a + b; // ½Ã -> ºĞ 
	min += c;
	
	int hour = (min / 60) % 24;
	int minute = min % 60;
	
	cout << hour << " " << minute;
	
	return 0;
}
