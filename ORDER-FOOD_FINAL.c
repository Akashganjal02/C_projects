//C program for creating & simulating a food order scenario.
// Coded by: Akash Mahesh Ganjal. /\('-')/\ 

#include<stdio.h>
int input();

void main(){
	
	int n,ch,cd=0,ci=0,cp=0,orderT=0,itemid,choice,qty;

	while(1)
	{	A:printf("-----<Food Order for Akash Restaurant>-----\n");
		printf("\n\n\t***** Main Menu *****\n");
		printf("\t1.Create order\n");
		printf("\t2.Modify Order\n");
		printf("\t3.Generate bill\n");
		printf("\t4.Cancel order\n");
		printf("\t5.Exit\n");
		ch=input();
		system("cls"); 				//Clear screen in DEV-C++ 5.11 v
		switch(ch)
		{
			case 1:D:printf("\n\nSelect the food item\n");
					printf("Item Name 	Price(Inclusive of all Taxes)\n");
					printf("-----------------------\n");
					printf("1.Dosa          35rs\n2.Idli          25rs\n3.Puri          40rs\n4.Return to Main Menu\n");
					n=input();
					switch(n)
					{
						case 1:cd++;orderT++;
						system("cls");
						printf("Dosa is ordered: Qty=%d\n",cd);
						goto D;
							
						break;
						case 2:ci++;orderT++;
						system("cls");
						printf("Idli is ordered: Qty=%d\n",ci);
						goto D;						
						break;
						case 3:cp++;orderT++;
						system("cls");
						printf("Puri is ordered: Qty=%d\n",cp);
						goto D;	
						break;
						case 4:system("cls");
						goto A;
						default:printf("Invalid option\n");
						scanf("%*s");         //Prevents the possibility of infinite loop when "."(dot) is entered as input for the switch case.
						goto D;
						
						
						
					}
					break;
			case 2:if(orderT>0)
					{
						printf("\n\nCurrent Order Details\n");
						printf("Item_id Item_Description	Qty\n");
						printf("-----------------------------------\n");
						if(cd>0)
				{
						printf("111       DOSA			%d\n",cd);
				}
						if(ci>0)
				{
						printf("112       IDLI			%d\n",ci);
				}
						if(cp>0)
				{
						printf("113  	  PURI			%d\n",cp);
				}
				
				B:while(1)
				{	printf("\nEnter your choice\n");
					printf("1.Alter order\n");
					printf("2.Return to Main Menu\n");
					choice=input();	
					
				switch(choice)
				{
				
			case 1:	printf("Enter both item_id & qty to be cancelled\n");
					scanf("%d%d",&itemid,&qty);
					system("cls");
					switch(itemid)
					{
					
				case 111:if(qty<=cd && qty>=0)
					{cd=cd-qty;
					printf("Dosa item deleted: %d \n",qty);
					}
					else {
						printf("Quantity Limit is exceeded or invalid.Try Again\n");
						goto B;
					}
					break;
				case 112:if(qty<=ci && qty>=0)
					{ci=ci-qty;
					printf("Idli item deleted: %d \n",qty);
					}
					else{
						printf("Quantity Limit is exceeded or invalid.Try Again\n");
						goto B;
					}
					break;
				case 113:if(qty<=cp && qty>=0)
					{cp=cp-qty;
					printf("Puri item deleted: %d\n ",qty);
					}
					else{
						printf("Quantity Limit is exceeded or invalid.Try Again\n");
						goto B;
					}
					break;
				default:printf("Invalid Item id.Try again\n");
				goto B;	
				}
					break;
			case 2:system("cls");
			goto A;
			break;
			default:printf("Invalid choice!!!\n");
			scanf("%*s");
					goto B;		
				}
				}
						
					}
					else{
						printf("Please order First and then try again...");
					goto A;
					}
					break;
			case 3:if(orderT>0)
					{
				printf("			Akash Restaurant\n		MG ROAD,Chikmagaluru, KAR-577101\n			Tel: +918904671545\n\n");
				printf("Item Description	Qty		  Price(Rs)	  Total(Rs)\n");
				printf("-------------------------------------------------------------------\n");
				if(cd>0)
				{
				printf("   DOSA			%d	 X  	  35		   %d\n",cd,cd*35);
				}
				if(ci>0)
				{
				printf("   IDLI			%d	 X  	  25		   %d\n",ci,ci*25);
				}
				if(cp>0)
				{
				printf("   PURI			%d	 X  	  40		   %d\n",cp,cp*40);
				}
				printf("===================================================================\n");
				printf("					     SUB TOTAL:    %d Rs\n\n",cd*35+ci*25+cp*40);
				printf("\t\t<---THANK YOU FOR YOUR VISIT--->\n");
				}
				else
				{
					printf("Please order First and then try again...");
					goto A;
				}
				break;
			case 4:if(orderT>0)
				{cd=0;ci=0;cp=0;orderT=0;
				printf("Order is cancelled, Thank You.\n");
				}
				else{
				printf("Please order First and then try again...");
				goto A;
				}
				break;
			case 5:
				cd=0;cp=0;ci=0;orderT=0;
				printf("Have a Good Day!!!");
				exit(0);
			default:printf("Invalid Entry.Please try again.!!!\n");
			scanf("%*s");
			goto A;
			break;
			}		
		}
	}
	int input() 
{ 
    int number; 
    scanf("%d", &number); 
    return (number); 
} 
