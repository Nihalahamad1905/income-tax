#include<stdio.h>

int main()
{
	int ch=0;
	float income,investment,applicable_amount,tax;
	
	printf("************** Welcome Income Tax Calculation System *********** ");
	
	do{
		
		printf("\n 1. Income Tax Slab ");
		printf("\n 2. Calculator");
		printf("\n 3. Exit");
		printf("\n Enter Your Choice : - ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					printf("\n\n ########## Income Tax Slab ##########");
					printf("\n\n \tIncome Range \t\tTax Rate");
					printf("\n\n \tUpto 2,50,000 \t\tNil");
					printf("\n\n \t2,50,001 - 5,00,000  \t5%% above 2,50,000");
					printf("\n\n \t5,00,001 - 7,50,000  \t12,500 + 10%% above 5,00,000");
					printf("\n\n \t7,50,001 - 10,00,000 \t37,500 + 15%% above 7,50,000");
					printf("\n\n \t10,00,001 - 12,50,000 \t75,000 + 20%% above 10,00,000");
					printf("\n\n \t12,50,001 - 15,00,000 \t1,25,000 + 25%% above 12,50,000");
					printf("\n\n \tAbove 15,00,000 \t1,87,500 + 30%% above 15,00,000");
					printf("\n\n");					
					break;
			case 2:
					
					printf("\n Enter Income : - ");
					scanf("%f",&income);
					
					printf("\n Enter Investment : - ");
					scanf("%f",&investment);
					
					
					
					if(investment>150000)
					{
						applicable_amount=income-150000;
					}
					else
					{
						applicable_amount=income-investment;
					}
					
					if(applicable_amount>250000)
					{
						
						if(applicable_amount>500000)
						{
							if(applicable_amount>750000)
							{
								if(applicable_amount>1000000)
								{
									if(applicable_amount>1250000)
									{
										if(applicable_amount>1500000)
										{
											tax=((applicable_amount-1500000)*30)/100;
											tax=tax+187500;
										}
										else
										{
											tax=((applicable_amount-1250000)*25)/100;
											tax=tax+125000;
										}
									}
									else
									{
										tax=((applicable_amount-1000000)*20)/100;
										tax=tax+75000;
									}
								}
								else
								{
									tax=((applicable_amount-750000)*15)/100;
									tax=tax+37500;
								}
							}
							else
							{
								tax=((applicable_amount-500000)*10)/100;
								tax=tax+12500;
							}
						}
						else
						{
							tax=((applicable_amount-250000)*5)/100;
						}
						
					}
					else
					{
						tax=0;
					}
					
					printf("\n\n -> Income Tax Calculation Result <- ");
					printf("\n Income \t: - %.2f  Rs.",income);
					printf("\n Investment \t: - %.2f  Rs.",investment);
					printf("\n Applicable Tax : - %.2f  Rs.",tax);
					printf("\n\n");
					break;
			case 3:
					printf("\n\n ---- >  THANK YOU   < ------- ");
					break;
			default:
					printf("\n Enter Correct Choice");
		}
		
	}while(ch!=3);
	
	return 0;
}
