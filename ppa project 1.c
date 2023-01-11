#include <stdio.h>
int main()

{
int a;
int re;
int book;
printf("Dear User,\n");
printf("Greetings of the day!\n\n");
printf("Welcome to the Liberary Management System\n\n");
printf("Please Choose an Option: \n");
printf("Press 1 - If you want to issue a book\n");
printf("Press 2 - If you want to return a book\n");
printf("Press 3 - If you want to read the books in the library\n");
scanf("%d",&a);

switch (a)
{
case 1:
printf("Which book you would like to issue:\n");
printf("Enter 1 for Elementary Engineering Mathematics by 'BS Grewal'\n");
printf("Enter 2 for Let us C by 'Yashwant Kanitkar'\n");
printf("Enter 3 for Fundamentals of Computers by 'Sinha and Sinha'\n");
printf("Enter 4 for Principles & Practices of Management by 'Dr. L.M.Parasad';\n");
printf("Enter 5 for Effective Business Communication by 'Asha Kaul';\n");
printf("Enter 6 for Text book for Environment Studies,UGC by 'Erach Barucha';\n");
scanf("%d", &book);
printf("Dear User,\n");
printf("The following Book have been issued to you \n Please return the book at the given time... Thank you");
break;

case 2:
printf("Please Choose an Option:...\n");
printf("Enter 1 to return the book\n");
printf("Enter 2 to reissue the book\n");
scanf("%d",&re);

switch(re){
case 1: printf("The following Books have been Returned by you\n Thank You for Coming.");
break;
case 2: printf("The following book has been reissued to you\n Please return the book given time... Thank you!"); 
break;
}
break;

case 3: 
printf("Book available to read for BCA Course...\n\n");
printf("Let us C by 'Yashwant Kanitkar'\n");
printf("Text book for Environment Studies,UGC by 'Erach Barucha';\n");
printf("Fundamentals of Computers by 'Sinha and Sinha';\n");
printf("Principles & Practices of Management by 'Dr. L.M.Parasad'\n");
printf("Effective Business Communication by 'Asha Kaul'\n");
printf("\n Have a Good Day!\n");
default:
break;
}
return 0;
}
