/*QUIZ 3 PROGRAM IN C*/
/*programmer:  DE GUZMAN, KENNETH LESTER D. DICT 1-3*/

#include <stdio.h>
#define p printf
#define s scanf


int main()
{
	int ornum, quantity;
	char customerName[30], Item_Desc[20];
	float UnitPrice, TotalSales;

	p("\n O.R. No.:  ");
	s("%d", &ornum);

	p("\n Customer Name:    ");
	s("%s", &customerName);

	printf("\n Item Description:  ");
	scanf("%s", &Item_Desc);

	p("\n Quantity:  ");
	s("%d", &quantity);

	p("\n Unit Price:  ");
	s("%f", &UnitPrice);

	TotalSales = quantity * UnitPrice;

	p("\n ----------------------------------------------------");

	p("\n Total Sales:  %f \n", TotalSales);

    p("\n ----------------------------------------------------");


	return 0;

}

