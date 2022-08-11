#include <stdio.h>
#include <stdlib.h>
/*
 * Set the price of an item and simulate purchasing with a one dollar note.
 * You will receive change resulting in the smallest amount of coins being issued. 
 * Change in 50c, 20c, 10c, 5c, 2c, 1c. 
 * 
 * @Author Matthew Masel(20518121)
 */

double setPrice() 
{
	double price;
	printf("%s", "Please enter a price between 0.00 and 1.00 for your imaginary item: ");
	scanf("%lf", &price);
	return price;
}

double getDiff(double price)
{
	return 1 - price;
}

void getChange(double change)
{
	int remains = change * 100;
	
	while (remains > 0) {	
		if (remains >= 50) {
			remains -= 50;
			printf("%s\n", "Fifty cents");
			continue;
		}
		if (remains >= 20) {
			remains -= 20;
			printf("%s\n", "twenty cents");
			continue;
		}
		if (remains >= 10) {
			remains -= 10;
			printf("%s\n", "ten cents");
			continue;
		}
		if (remains >= 5) {
			remains -= 5;
			printf("%s\n", "5 cents");
			continue;
		}
		if (remains >= 2) {
			remains -= 2;
			printf("%s\n", "2 cents");
			continue;
		}
		if (remains >= 1) {
			remains -= 1;
			printf("%s\n", "1 cents");
			continue;
		}
	}
}

int main(void)
{
	double price = setPrice();
	
	if (price > 1.0 || price < 0.0) {
		puts("Invalid price input");
	}
	
	price = setPrice();

	printf("%s%.2lf\n%s%.2lf\n","your item costs: ", price, "Your change is: ",getDiff(price));
	getChange(getDiff(price));

	return 0;
}