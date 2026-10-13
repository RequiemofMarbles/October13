#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int hitChanceD20()
{
	return rand() % 20 + 1;
}
int damageD4()
{
	return rand() % 4 + 1;
}
int main()
{
	srand(static_cast<unsigned int>(time(0)));

	int d20Result = hitChanceD20();
	int d4Result = damageD4();
	int count = 0;

	// Keep rolling the d20 and d4 until both roll a 1
	do {

		d20Result = hitChanceD20();
		d4Result = damageD4();
		count++;

	} while (d20Result != 1 || d4Result != 1);
	// Output the number of attempts it took to roll a 1 on both the d20 and d4
	cout << "It took " << count << " attempts to roll a 1 on both the d20 and d4." << endl;

	return 0;
}