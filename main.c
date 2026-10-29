#include <stdio.h>

int main()
{
char supplierName[50];
double price;
double budget;
int registered;
int documentsComplete;

printf("TENDER EVALUATION\n");
printf("-----------------\n");

printf("Enter supplier name: ");
scanf("%49s", supplierName);

printf("Enter tender price: ");
scanf("%lf", &price);

printf("Enter available budget: ");
scanf("%lf", &budget);

printf("Is the supplier registered? (1=Yes, 0=No): ");
scanf("%d", &registered);

printf("Are all documents complete? (1=Yes, 0=No): ");
scanf("%d", &documentsComplete);

if (registered == 0 || documentsComplete == 0)
{
printf("\nStatus: Disqualified\n");
}
else if (price > budget)
{
printf("\nStatus: Disqualified\n");
}
else
{
printf("\nStatus: Qualified\n");
}

return 0;
}