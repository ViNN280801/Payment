#include "stdafx.h"
#include "CreditDossier.h"
#include "Person.h"

CreditDossier::CreditDossier()
{
	check = 0;
}

//Метод регистрации человека
void CreditDossier::setPerson(Person obj)
{
	name = obj;
}

//Метод установки суммы кредита
void CreditDossier::setLoan(BankLoan obj)
{
	credit[check] = obj;
	check++;
}

//Метод сортировки по имени
void CreditDossier::getLoanByName(BankLoan obj)
{
	for (short int i = 0; i < check; i++)
		for (short int j = check; j >= i; j--)
			if (credit[j].getLoanName() < credit[j - 1].getLoanName())
				swap(credit[j], credit[j - 1]);

	for (short int i = 0; i < check; i++) {
		cout << "Name: " << credit[i].getLoanName();
		cout << "     Loans" << endl;
		cout << "---------- ---------- ---------- " << endl;
		cout << "Name     Credit amount   Amount of payment     " << endl;
		cout << credit[i].getContent() << "     " << credit[i].getSum() << "   " << credit[i].getKoef_An() << endl;
		cout << "--------------------------------------" << endl;
	}
}

//Метод сортировки по сумме
void CreditDossier::getLoanBySumm(BankLoan obj)
{
	for (short int i = 0; i < check; i++)
		for (short int j = check; j >= i; j--)
			if (credit[j].getSum() < credit[j - 1].getSum())
				swap(credit[j], credit[j - 1]);

	for (short int i = 0; i < check; i++) {
		cout << "Name: " << credit[i].getLoanName();
		cout << "     Loans" << endl;
		cout << "---------- ---------- ---------- " << endl;
		cout << "Name     Credit amount   Amount of payment     " << endl;
		cout << credit[i].getContent() << "     " << credit[i].getSum() << "   " << credit[i].getKoef_An() << endl;
		cout << "--------------------------------------" << endl;
	}
}

void CreditDossier::getLoanByRepaymentAmount(BankLoan obj)
{
	for (short int i = 0; i < check; i++)
		for (short int j = check; j >= i; j--)
			if (credit[j].getKoef_An() < credit[j - 1].getKoef_An())
				swap(credit[j], credit[j - 1]);

	for (short int i = 0; i < check; i++) {
		cout << "Name: " << credit[i].getLoanName();
		cout << "     Loans" << endl;
		cout << "---------- ---------- ---------- " << endl;
		cout << "Name     Credit amount   Amount of payment     " << endl;
		cout << credit[i].getContent() << "     " << credit[i].getSum() << "   " << credit[i].getKoef_An() << endl;
		cout << "--------------------------------------" << endl;
	}
}

void CreditDossier::getRepaymentSchedule(BankLoan obj)
{
	float summa = 0;
	cout << "Name: ";
	obj.getLoanName();
	cout << "---------------------------------- " << endl;
	cout << "Months        Amount        Descriprion of payment" << endl;

	if(check > 1)
		for (short int month = 1; month <= credit[check - 1].getDate(); month++) {
			summa += credit[check - 1].getKoef_An();
			cout << month << "        " << credit[check - 1].getKoef_An() << "        " << credit[check - 1].getSum() << endl;

			cout << "---------------------------------- " << endl;
			cout << "Overpayment = " << summa - credit[check - 1].getSum() << endl;
		}
}

CreditDossier::~CreditDossier()
{
}
