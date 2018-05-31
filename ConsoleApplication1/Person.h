#pragma once
#include <string>
#include<ctime>

using namespace std;

/*
����� ������������ ��� �������� ������������ ������ ��������.
� ������ ������ ������ ������� ��� ��������, ��� ��������, ���
� ������ ��� ��������� �������� � ��������� ������ �������.
version 0.0.001
author
*/

class Person
{
public:
	// ����������� ����
	const int MALE = 0;
	const int FEMALE = 1;

private:
	string lastName;	// ������� 
	string firstName;	// ���
	string patronymic;	// ��������

	int yearOfBirth;	// ��� ��������

	int gender;			// ���

public:
	// ����������� �� ���������
	Person();
	// ����������� ������������� �������, ����� � ��������
	Person(string lName, string fName, string pName);

	//  ----------- ���������  -----------
	/*
	����� ������������� �������� ���� ��������.
	���������:
	int year - ��� ��������
	������������ �������� - void
	*/
	void setYearOfBirth(const int year);
	/*
	����� ������������� �������� ����.
	���������:
	int intGender - �������� ���� � ���� 0 - ���, 1 - ���
	������������ �������� - void
	*/
	void setGender(const int intGender);

	/*
	����� ���������� �������� ���� � ���� �����.
	���������:
	void
	������������ �������� - int ��� � ���� 0 - ���, 1 - ���
	*/
	int getGender();

	//  ----------- ������������ -----------
	/*
	����� ���������� ���������� ��� � ���� �����.
	���������:
	void
	������������ �������� - int ���������� ���
	*/
	inline int getAge();

	//  ----------- ����������  -----------
	/*
	����� ���������� �������, ���, ��������, ���, ��� ��������.
	���������:
	void
	������������ �������� void
	*/
	void toString();
	Person operator=(const Person obj);
	// ����������
	virtual ~Person();
};

