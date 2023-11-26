// PROJECT[0] : TO MAKE A CUSTOMER BILL.

#include<stdio.h>
int main()
{
	int cust_no,i;
	char prod_name[50],name[10];
	double pur_amt[20],dis[20],bill_amt[20],total_bill;
	
	printf("Enter Customer Number : ");
	scanf("%d",&cust_no);
	
	printf("Enter Product Name : ");
	for(i=0;i<5;i++)
	{
		scanf("%s",&prod_name[i]);
	}	
	
	printf("Enter Purchase Amount : ");
	for(i=0;i<5;i++)
	{
		scanf("%.2lf",&pur_amt[i]);
		
		if(pur_amt[i]<=5000)
		{
			dis[i]=pur_amt[i]*0.03;
			bill_amt[i]=pur_amt[i]-dis[i];
		}
		
		if(pur_amt[i]>5000 && pur_amt[i]<=10000)
		{
			dis[i]=pur_amt[i]*0.06;
			bill_amt[i]=pur_amt[i]-dis[i];
		}
		
		else if(pur_amt[i]>10000 && pur_amt[i]<=15000)
		{
			dis[i]=pur_amt[i]*0.09;
			bill_amt[i]=pur_amt[i]-dis[i];
		}
		
		else
		{
			dis[i]=pur_amt[i]*0.12;
			bill_amt[i]=pur_amt[i]-dis[i];
		}
	}
	
	printf("\n\nOUTPUT :--\n\n");
	printf("\n-----------------------------------------------------------------------\n");
	printf("                                BILL                                         ");
	printf("\n-----------------------------------------------------------------------\n");
	printf("Customer ID : %d",cust_no);
	printf("\n-----------------------------------------------------------------------\n");
	printf("\nProduct Name \t Purchase Amount \t Discount \t Bill Amount ");
	printf("\n-----------------------------------------------------------------------\n");

	for(i=0;i<5;i++)
	{	
		printf("\n%s \t %.2lf \t %.2lf \t %.2lf\n",prod_name[i],pur_amt[i],dis[i],bill_amt[i]);
	
	}
	
	printf("-----------------------------------------------------------------------");
	total_bill=bill_amt[0]+bill_amt[1]+bill_amt[2]+bill_amt[3]+bill_amt[4];
	printf("                                        Total Bill : %lf",total_bill);
	printf("-----------------------------------------------------------------------");

	return 0;
}
