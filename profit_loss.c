
#include <stdio.h>
 
int main()
{
	int cost_price,selling_price,l,p;
	printf("enter cost price:");
	scanf("%d",&cost_price);
	printf("enter selling price:");
	scanf("%d", & selling_price);
	if (selling_price>cost_price)
	{
		printf( "seller has made profit");
		p=selling_price-cost_price;
		printf(" profit of %d rupees",p);
    }
	else
	{
		printf(" seller has loss ");
		l= cost_price-selling_price;
		printf("loss of %d rupees",l);
	}
	return 0;
}