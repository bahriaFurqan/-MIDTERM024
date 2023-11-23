#include<iostream>
using namespace std;

int main()
{
	for (;;)
	{
		double amount,total_amount ;
		int points,option,discount ;
		char Press;
		cout << "Enter the total amount of a purchase: $";
		cin >> amount;
		points = amount / 10;
		cout << "Your loyalty points are :" << points<<endl;

		cout << "Press 1 if you want to redeem your loyalty points ." << endl;
		cout << "press 2 if you don't want to calculate the points ." << endl;
		cin >> option;
		if (option == 1)
		{
			cout << "You choose to redeem your loyalty points." << endl;
			cout << "you have purchased of :$" << amount << endl;
			discount = (points / 10) * 5;
			cout << "you got discount of :$" << discount<<endl;
			total_amount = amount - discount;
			cout << "Your total bill is of :$" << total_amount<<endl<<endl;
		}
		if (option == 2)
		{
			cout << "Your total bill is " << amount<<endl;
			cout << "Your total loyalty points are:" << points<<endl<<endl;
		}
		cout << "Press Y if want to continue shopping.\n";
		cout << "Press X if don't want to continue shopping.\n";
		cin >> Press;

		if (Press == 'Y' || Press == 'y')
		{
			continue;
		}
		else if (Press == 'X' || Press == 'x')
		{
			break;
		}
	}
	system("pause");
	return 0;
}