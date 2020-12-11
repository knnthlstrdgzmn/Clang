/*QUIZ 3 PROGRAM IN C*/
/*programmer:  DE GUZMAN, KENNETH LESTER D. DICT 1-3*/

#include <stdio.h>
#define p printf
#define s scanf


int main()
{
	char EmployeeName[30];
	int EmployeeNo;
	float BasicSalary, OTpay, Allowance, SSS, PagIbig, w_tax, grossPay, TotalDeduc, NetPay;

	p("\n EMPLOYEE NUMBER: ");
	s("%d", &EmployeeNo);
	p("\n EMPLOYEE NAME: ");
	s("%s", &EmployeeName);
	p("\n BASIC SALARY: ");
	s("%f", &BasicSalary);
	p("\n OVERTIME PAY: ");
	s("%f", &OTpay);
	p("\n ALLOWANCE: ");
	s("%f", &Allowance);
	p("\n SSS: ");
	s("%f", &SSS);
	p("\n PAG-IBIG: ");
	s("%f", &PagIbig);
	p("\n WITHHOLDING TAX: ");
	s("%f", &w_tax);

	grossPay = BasicSalary + OTpay + Allowance;
	TotalDeduc = SSS + PagIbig + w_tax;
	NetPay = grossPay - TotalDeduc;

	p("\n ----------------------------------------------------");
	p("\n GROSS PAY: %f                            -", grossPay);
	p("\n TOTAL DEDUCTION: %f                       -", TotalDeduc);
	p("\n NET PAY: %f                               -", NetPay);
	p("\n ----------------------------------------------------\n");

	return 0;

}
