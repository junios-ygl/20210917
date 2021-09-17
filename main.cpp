#include <iostream>

using namespace std;

int main()
{
	int First = 0; 
	int Second = 0;
	int Sum = 0;

	//cout << "첫번재 숫자를 넣어주세요. ?";
	cin >> First;
	//cout << "두번재 숫자를 넣어주세요. ?";
	cin >> Second;

	Sum = First + Second;
	//cout << First << " + " << Second << " = ";
	cout << Sum;

	return 0;
}