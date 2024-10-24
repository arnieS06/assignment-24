//main
#include <string>
#include <iostream>
#include "customer.h"
#include "printInfo.h"
using namespace std;

int main() {
	Customer customer;

	cout << "user name: ";
	getline(cin, customer.userName);

	cout << "user ID: ";
	cin >> customer.userID;

	cout << "user email: ";
	cin >> customer.userEmail;

	printInfo(customer.userName, customer.userID, customer.userEmail);

	return 0;
}