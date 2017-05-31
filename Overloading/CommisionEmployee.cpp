#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "Header.h"
using namespace std;

//constructor 
CommissionEmployee::CommissionEmployee(const string &first, const string &last, const string &ssn, double sales, double rate) {
	firstName = first;
	lastName = last;
	socialSecurityNumber = ssn;
	setGrossSales(sales);
	setCommissionRate(rate);

}

void CommissionEmployee::setFirstName(const string &first) {
	firstName = first;
}
string CommissionEmployee::getName()const {
	return firstName;
}

void CommissionEmployee::setLastName(const string &last) {
	lastName = last;
}
string CommissionEmployee::getLastName()const {
	return lastName;
}
void CommissionEmployee::setSocialSecurityNumber(const string &ssn) {
	socialSecurityNumber = ssn;
}
string CommissionEmployee::getSocialSecurityNumber() const{
	return socialSecurityNumber;
}
void CommissionEmployee::setGrossSales(double sales) {
	if (sales >= 0.0)
		grossSales = sales;
	else
		throw invalid_argument("Gross Sales must be more than 0.0");
}
double CommissionEmployee::getGrossSales()const
{
	return grossSales;
}
void CommissionEmployee::setCommissionRate(double rate) {
	if (rate > 0.0 && rate < 1.0)
		commisionRate = rate;
	else throw invalid_argument("Commision rate must be > 0.0 and 1.0");
}
double CommissionEmployee::getCommissionRate()const{
	return commisionRate;
}

double CommissionEmployee::earnings()const {
	return commisionRate * grossSales;
}
void CommissionEmployee::print()const {
	cout << "Commision employee :" << firstName << " " << lastName
	   	<< "\nSocial Security Number :" << socialSecurityNumber
		<< "\nGross Sales:" << grossSales
    	<< "\nCommission rate:" << commisionRate;
}

