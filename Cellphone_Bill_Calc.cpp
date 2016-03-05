// Calculate the customer's monthly cell phone bill

//Includes and namespace
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	char plan; // Character to store the plan type

	int num_minutes, // Variable to store the total number of minutes used
		extra_minutes; // Variable to store the minutes used over the fixed monthly plan

	double extra_bill, // Variable to store the extra bill amount generated due to overuse beyond the fixed monthly plan
		   total_bill; // Variable to store the total bill after adding the extra bill and the fixed monthly bill

	cout << "Enter the Package Type: A, B or C ?" << endl;
	cin >> plan; // Capture the plan type

	if (plan == 'A' || plan == 'a' || plan == 'B' || plan == 'b' || plan == 'C' || plan == 'c') // Validating the input
	{
		cout << "Enter the number of minutes utlizied this month: ";
		cin >> num_minutes; // Capture the minutes used

		// Condition to check plan type and calculate the total bill
		if (plan == 'A' || plan == 'a')
		{
			if (num_minutes > 450) // Condition to check if total minutes exceed the fixed 450 minutes a month
			{
				extra_minutes = num_minutes - 450; // Calculate the minutes exceeded
				extra_bill = extra_minutes * 0.45; // Calculate the extra charge for the minutes exceeded
				total_bill = 39.99 + extra_bill; // Calculate the final amount to be paid
			}
			else
				total_bill = 39.99; // The bill if calling was under the included minutes
		}

		else if (plan == 'B' || plan == 'b')
		{
			if (num_minutes > 900) // Condition to check if total minutes exceed the fixed 900 minutes a month
			{
				extra_minutes = num_minutes - 900; // Calculate the minutes exceeded
				extra_bill = extra_minutes * 0.40; // Calculate the extra charge for the minutes exceeded
				total_bill = 59.99 + extra_bill; // Calculate the final amount to be paid
			}
			else
				total_bill = 59.99; // The bill if calling was under the included minutes
		}

		else if (plan == 'C' || plan == 'c')
		{
			total_bill = 69.99; // Irrespective of the minutes used, this is the bill as plan has unlimited calling
		}

		// Displaying the final bill statement
		cout << "Amount due for this month is $" << fixed << setprecision(2) << total_bill;
	}
	else // Error shown if user inputs anything other than 'A', 'a', 'B', 'b', 'C', 'c'
		cout << "Invalid Input";

	return 0;
} // The End
