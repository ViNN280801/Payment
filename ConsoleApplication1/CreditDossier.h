#pragma once
#include "Person.h"
#include "BankLoan.h"
#include <iostream>

using namespace std;

class CreditDossier
{
private: 
	Person name;
	int check;
	BankLoan credit[5];
public:
	CreditDossier();

	void setPerson(Person obj);
	void setLoan(BankLoan obj);
	void getLoanByName(BankLoan obj);
	void getLoanBySumm(BankLoan obj);
	void getLoanByRepaymentAmount(BankLoan obj);
	void getRepaymentSchedule(BankLoan obj);

	~CreditDossier();
};

