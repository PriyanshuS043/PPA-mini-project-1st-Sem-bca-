#include <stdio.h>
#include <conio.h>

int main()

{

    int units;
	int i;

    float total_bill;


    printf("\n\n\t\t WELLCOME TO DELHI ELECTRTICITY DEPARTMENT\n\n");

    printf("\t       ELECTRICITY TARIFF FOR HOUSEHOLDS (Rates/Unit)\n\n");

  for(i=0;i<70;i++)
		printf("=");
    printf("\n\tUpto 20 Units .............................. =Php.3/Unit      |\n\n");

    printf("\t21 To 30 Units .............................. =Php.7/Unit     |\n\n");

    printf("\t31 To 50 Units .............................. =Php.8.5/Unit   |\n\n");

    printf("\t51 To 150 Units ..............................=Php.10/Unit    |\n\n");

    printf("\t151 To 250 Units .............................. =Php.11/Unit  |\n\n");

    printf("\t251 To 400 Units .............................. =Php.12/Unit  |\n\n");

    printf("\t400+ Units ................................. =Php.13/Unit     |\n\n");

	for(i=0;i<70;i++)

		printf("=");

    printf("\nPlease Enter Your Total Units Consumed : \n\n");

    scanf("%d", & units);
    
    if (units <= 20)

    total_bill = units * 3;

    else if (units <= 30)

    total_bill = units * 7;

    else if (units <= 50)

    total_bill = units * 8.5;

    else if (units <= 150)

    total_bill = units * 10;

    else if (units <= 250)

    total_bill = units * 11;

    else if (units <= 400)

    total_bill = units * 12;

    else total_bill = units * 13;

    printf("\n\nYour Total Bill Is Php.%f", total_bill);

    getch();

}
