#include "stdafx.h"
#include "Person.h"
#include<iostream>
#include<ctime>

Person::Person() : gender(0)
{
	struct tm newtime;
	__time64_t seconds = __time64_t(NULL);
	_time64(&seconds);
	errno_t err;
	err = _localtime64_s(&newtime, &seconds);

	yearOfBirth = 1900 + rand() % 116;
}
Person::Person(string lName, string fName, string pName) : Person()
{
	lastName = lName;
	firstName = fName;
	patronymic = pName;
}

Person Person::operator=(Person obj)
{
	this->lastName = obj.lastName;
	this->firstName = obj.firstName;
	this->patronymic = obj.patronymic;

	this->yearOfBirth = obj.yearOfBirth;
	this->gender = obj.gender;

	return *this;
}

void Person::setYearOfBirth(int year)
{
	yearOfBirth = year;
}

void Person::setGender(const int intGender)
{
	gender = intGender;
}

int Person::getGender()
{
	return gender;
}

inline int Person::getAge()
{
	struct tm newtime;
	__time64_t seconds = __time64_t(NULL);
	_time64(&seconds);
	errno_t err;
	err = _localtime64_s(&newtime, &seconds);

	return  2018 - yearOfBirth;
}

void Person::toString()
{
	cout << "Surname - " << patronymic << endl;
	cout << "Name - " << lastName << endl;
	cout << "Patronymic - " << firstName << endl << endl;
	cout << "Year of birth: " << yearOfBirth << endl << endl;
	cout << "Age = " << getAge() << endl;

	if (gender == 0)
		cout << "Gender - man" << endl;
	else if (gender == 1)
		cout << "Gender - woman" << endl;
}

Person::~Person()
{
}

