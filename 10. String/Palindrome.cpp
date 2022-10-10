#include<iostream>
using namespace std;
int main()
{
	char arr[20];
	int length;
	bool flag = true;
	cout << "Enter a string\n";
	cin >> arr;
	length = strlen(arr);
	for (int i = 0; i < length; i++)
	{
		if (arr[i] != arr[length - i - 1])
		{
			flag = false;
			break;
		}
	}
	if (flag)
	{
		cout << "String is palindrome\n";
	}
	else {
		cout << "String is not a palindrome\n";
	}
	return 0;
}