#include <iostream>

using namespace std;

//declaring functions

int add(int a, int b);

int main() 
{
	
	cout << add(11, 5) << endl;
	
  return 0;
}

//defining functions

int add(int a, int b)
{
	int addition = a + b;
	return addition;
}