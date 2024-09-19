// Adjust recipe to yield desired number of cookies

#include <iostream>
using namespace std;

int main()
{
	//setting up variables
	int recipeCookies = 48;
	double cupsSugarR, cupsButterR, cupsFlourR, cupsMod, cupsSugar, cupsButter, cupsFlour, userCookies;
	cupsSugarR = 1.5;
	cupsButterR = 1;
	cupsFlourR = 2.75;

	//getting input
	cout << "How many cookies would you like to make?" << endl;
	cin >> userCookies;

	//calculations
	cupsMod = userCookies / recipeCookies;
	cupsSugar = cupsSugarR * cupsMod;
	cupsButter = cupsButterR * cupsMod;
	cupsFlour = cupsFlourR * cupsMod;

	//display adjusted recipe
	cout << "You will need " << cupsSugar << " cups of sugar, " << cupsButter << " cups of butter, and " << cupsFlour << " cups of flour.";

	return 0;
}