#include <iostream>
#include <string>
#include <iomanip>
#include "Header.h"

using namespace std;

int main() {
	//We can do it functional as well but in this example will be hard coded
	CommissionEmployee employee("Michael", "Jackson", "123-45-6789", 1000000, .9);

	cout << fixed << setprecision(2);

	cout << "Employee information obtained by get functions: \n"
		<< "\nFirst Name is " << employee.getName()
		<< "\n Last Name is " << employee.getLastName()
		<< "\n Social Security Number is " << employee.getSocialSecurityNumber()
		<< "\n Gross Sales is " << employee.getGrossSales()
		<< "Commision rate is " << employee.getCommissionRate() << endl;

	cout << "\nUpdated employee information :\n" << endl;

	employee.print();

	cout << "\n Employee's earnings : $ " << employee.earnings() << endl;







}