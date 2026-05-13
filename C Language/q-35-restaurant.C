#include <stdio.h>
#include <stdlib.h>
#define clrscr() system("cls")
#define getch() getchar()

main()
{
	int menu, qunty;
	float total, gst, grand;

	clrscr();
	printf("*********************************");
	printf("\n\n\tParadise Hotel\n\n");
	printf("*********************************");

	printf("\n\n\tPress 1 for South Indian Food");
	printf("\n\tPress 2 for Punjabi Food");
	printf("\n\tPress 3 for Gujarati Food");
	printf("\n\tPress 4 for chinese Food");
	printf("\n\tPress 5 for Italian Food");
	printf("\n\tPress 6 for Desserts");
	printf("\n\tEnter Your Choice :");
	scanf("%d", &menu);

	switch (menu)
	{
		case 1:
			clrscr();
			printf("\n\n\t*------\tSouth Indian Food\t------*");
			printf("\n\tPress 1 for Idli with Sambhar & Chutney");
			printf("\n\tPress 2 for Masala Dosa");
			printf("\n\tPress 3 for Uttapam");
			printf("\n\tPress 4 for Medu Vada");
			printf("\n\tPress 5 for Sambar Rice");
			printf("\n\tEnter your chice :");
			scanf("%d", &menu);

			switch (menu)
			{     	case 1:
					clrscr();
					printf("\n\n\tYour Order is Ready (Idli with Sambhar & Chutney)");
					printf("\n\tPrice : Rs. 60");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 60 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Idli with Sambhar & Chutney");
					printf("\n\tPrice : Rs. 60");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;
				case 2:
					clrscr();
					printf("\n\n\tYour Order is Ready (Masala Dosa)");
					printf("\n\tPrice : Rs. 120");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 120 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Masala Dosa");
					printf("\n\tPrice : Rs. 120");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 3:
					clrscr();
					printf("\n\n\tYour Order is Ready (Uttapam)");
					printf("\n\tPrice : Rs. 100");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 100 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Uttapam");
					printf("\n\tPrice : Rs. 100");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 4:
					clrscr();
					printf("\n\n\tYour Order is Ready (Medu Vada)");
					printf("\n\tPrice : Rs. 70");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 70 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Medu Vada");
					printf("\n\tPrice : Rs. 70");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;


				case 5:
					clrscr();
					printf("\n\n\tYour Order is Ready ( Sambar Rice)");
					printf("\n\tPrice : Rs. 90");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 90 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Sambhar Rice");
					printf("\n\tPrice : Rs. 90");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;
				}
				break;
			case 2:
			clrscr();
			printf("\n\n\t*------\tPunjabi Food\t------*");
			printf("\n\n\tPress 1 for Paneer Tikka");
			printf("\n\tPress 2 for Shahi Paneer");
			printf("\n\tPress 3 for Kaju Curry");
			printf("\n\tPress 4 for Dal Makhani");
			printf("\n\tPress 5 for Chole Bhature");
			printf("\n\tEnter your choice :");
			scanf("%d", &menu);
			switch (menu)
			{     	case 1:
					clrscr();
					printf("\n\n\tYour Order is Ready (Paneer Tikka)");
					printf("\n\tPrice : Rs. 180");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 180 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Paneer Tikka");
					printf("\n\tPrice : Rs. 180");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 2:
					clrscr();
					printf("\n\n\tYour Order is Ready (Shahi Paneer)");
					printf("\n\tPrice : Rs. 200");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 200 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Shahi Paneer");
					printf("\n\tPrice : Rs. 200");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;


				case 3:
					clrscr();
					printf("\n\n\tYour Order is Ready (Kaju Curry)");
					printf("\n\tPrice : Rs. 220");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 220 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Kaju Curry");
					printf("\n\tPrice : Rs. 220");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 4:
					clrscr();
					printf("\n\n\tYour Order is Ready (Dal Makhani)");
					printf("\n\tPrice : Rs. 160");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 160 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Dal Makhani");
					printf("\n\tPrice : Rs. 160");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 5:
					clrscr();
					printf("\n\n\tYour Order is Ready (Chole Bhature)");
					printf("\n\tPrice : Rs. 120");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 120 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Chole Bhature");
					printf("\n\tPrice : Rs. 120");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;
				}
				break;

		case 3:
			clrscr();
			printf("\n\n\t*------\tGujarati Food\t------*");
			printf("\n\n\tPress 1 for Undhiyu");
			printf("\n\tPress 2 for Gujarati Kadhi");
			printf("\n\tPress 3 for Dhokla");
			printf("\n\tPress 4 for Shrikhand");
			printf("\n\tPress 5 for Fafda and Jalebi");
			printf("\n\tEnter your choice :");
			scanf("%d", &menu);
			switch (menu)
			{     	case 1:
					clrscr();
					printf("\n\n\tYour Order is Ready (Undhiyu)");
					printf("\n\tPrice : Rs. 200");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 200 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Undhiyu");
					printf("\n\tPrice : Rs. 200");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 2:
					clrscr();
					printf("\n\n\tYour Order is Ready (Gujarati Kadhi)");
					printf("\n\tPrice : Rs. 140");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 140 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Gujarati Kadhi");
					printf("\n\tPrice : Rs. 140");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 3:
					clrscr();
					printf("\n\n\tYour Order is Ready (Dhokla)");
					printf("\n\tPrice : Rs. 100");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 100 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Dhokla");
					printf("\n\tPrice : Rs. 100");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 4:
					clrscr();
					printf("\n\n\tYour Order is Ready (Shrikhand)");
					printf("\n\tPrice : Rs. 120");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 120 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Shrikhand");
					printf("\n\tPrice : Rs. 120");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 5:
					clrscr();
					printf("\n\n\tYour Order is Ready (Fafda and Jalebi)");
					printf("\n\tPrice : Rs. 90");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 90 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Fafda and Jalebi");
					printf("\n\tPrice : Rs. 90");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;
				}
				break;

		case 4:
			clrscr();
			printf("\n\n\t*------\tChinese Food\t------*");
			printf("\n\n\tPress 1 for Veg Manchurian");
			printf("\n\tPress 2 for Chilli Paneer");
			printf("\n\tPress 3 for Hakka Noodles");
			printf("\n\tPress 4 for Veg Spring Rolls");
			printf("\n\tPress 5 for Schezwan Rice");
			printf("\n\tEnter your choice :");
			scanf("%d", &menu);
			switch (menu)
			{     	case 1:
					clrscr();
					printf("\n\n\tYour Order is Ready (Manchurian)");
					printf("\n\tPrice : Rs. 150");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 150 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Manchurian");
					printf("\n\tPrice : Rs. 150");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 2:
					clrscr();
					printf("\n\n\tYour Order is Ready (Chilli Paneer)");
					printf("\n\tPrice : Rs. 180");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 180 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Chilli Paneer");
					printf("\n\tPrice : Rs. 180");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 3:
					clrscr();
					printf("\n\n\tYour Order is Ready (Hakka Noodles)");
					printf("\n\tPrice : Rs. 130");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 130 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Hakka Noodles");
					printf("\n\tPrice : Rs. 130");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 4:
					clrscr();
					printf("\n\n\tYour Order is Ready (Veg Spring Rolls)");
					printf("\n\tPrice : Rs. 110");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 110 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Veg Spriing Rolls");
					printf("\n\tPrice : Rs. 110");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 5:
					clrscr();
					printf("\n\n\tYour Order is Ready (Schezwan Rice)");
					printf("\n\tPrice : Rs. 140");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 140 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Schezwan Rice");
					printf("\n\tPrice : Rs. 140");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;
				}
				break;

		case 5:
			clrscr();
			printf("\n\n\t*------\tItalian Food\t------*");
			printf("\n\n\tPress 1 for Cheese Garlic Bread");
			printf("\n\tPress 2 for Mergherita Pizza");
			printf("\n\tPress 3 for Cheese & Onion Pizza");
			printf("\n\tPress 4 for Lasagna");
			printf("\n\tPress 5 for Mix Sauce Pasta");
			printf("\n\tEnter your choice :");
			scanf("%d", &menu);
			switch (menu)
			{     	case 1:
					clrscr();
					printf("\n\n\tYour Order is Ready (Cheese Garlic Bread)");
					printf("\n\tPrice : Rs. 120");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 120 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Cheese Garlic Bread");
					printf("\n\tPrice : Rs. 120");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 2:
					clrscr();
					printf("\n\n\tYour Order is Ready (Mergherita Pizza)");
					printf("\n\tPrice : Rs. 180");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 180 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Mergherita Pizza");
					printf("\n\tPrice : Rs. 180");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 3:
					clrscr();
					printf("\n\n\tYour Order is Ready (Cheese & Onion Pizza)");
					printf("\n\tPrice : Rs. 200");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 200 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Cheese & Onion Pizza");
					printf("\n\tPrice : Rs. 200");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 4:
					clrscr();
					printf("\n\n\tYour Order is Ready (Lasagna)");
					printf("\n\tPrice : Rs. 220");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 220 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Lasagna");
					printf("\n\tPrice : Rs. 220");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 5:
					clrscr();
					printf("\n\n\tYour Order is Ready (Mix Sauce Pasta)");
					printf("\n\tPrice : Rs. 160");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 160 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Mix Sauce Pasta");
					printf("\n\tPrice : Rs. 160");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;
				}
				break;

		case 6:
			clrscr();
			printf("\n\n\t*------\tDessert Time\t------*");
			printf("\n\n\tPress 1 for Gulab Jamun");
			printf("\n\tPress 2 for Chocolate Brownie");
			printf("\n\tPress 3 for Caramel Custard");
			printf("\n\tPress 4 for Cheesecake");
			printf("\n\tPress 5 for Falooda");
			printf("\n\tPress 6 for Chocolate Mousse");
			printf("\n\tPress 7 for Tiramisu");
			printf("\n\tPress 8 for Gajar Halwa");
			printf("\n\tPress 9 for Brownie with Ice Cream");
			printf("\n\tPress 10 for Rasmalai");
			printf("\n\tEnter your choice :");
			scanf("%d", &menu);
			switch (menu)
			{     	case 1:
					clrscr();
					printf("\n\n\tYour Order is Ready (Gulab Jamun)");
					printf("\n\tPrice : Rs. 70");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 70 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Gualb Jamun");
					printf("\n\tPrice : Rs. 70");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 2:
					clrscr();
					printf("\n\n\tYour Order is Ready (Chocolate Brownie)");
					printf("\n\tPrice : Rs. 120");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 120 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Chocolate Brownie");
					printf("\n\tPrice : Rs. 120");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 3:
					clrscr();
					printf("\n\n\tYour Order is Ready (Caramel Custard)");
					printf("\n\tPrice : Rs. 100");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 100 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Caramel Custard");
					printf("\n\tPrice : Rs. 100");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 4:
					clrscr();
					printf("\n\n\tYour Order is Ready (Cheesecake)");
					printf("\n\tPrice : Rs. 150");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 150 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Cheesecake");
					printf("\n\tPrice : Rs. 150");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 5:
					clrscr();
					printf("\n\n\tYour Order is Ready (Falooda)");
					printf("\n\tPrice : Rs. 130");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 130 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Falooda");
					printf("\n\tPrice : Rs. 130");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 6:
					clrscr();
					printf("\n\n\tYour Order is Ready (Chocolate Mousse)");
					printf("\n\tPrice : Rs. 140");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 140 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Chocolate Mousse");
					printf("\n\tPrice : Rs. 140");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 7:
					clrscr();
					printf("\n\n\tYour Order is Ready (Tiramisu)");
					printf("\n\tPrice : Rs. 180");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 180 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Tiramisu");
					printf("\n\tPrice : Rs. 180");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 8:
					clrscr();
					printf("\n\n\tYour Order is Ready (Gajar Halwa)");
					printf("\n\tPrice : Rs. 110");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 110 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Gajar Halwa");
					printf("\n\tPrice : Rs. 110");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 9:
					clrscr();
					printf("\n\n\tYour Order is Ready (Brownie with Ice Cream)");
					printf("\n\tPrice : Rs. 160");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 160 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Brownie with Ice Cream");
					printf("\n\tPrice : Rs. 160");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs, %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				case 10	:
					clrscr();
					printf("\n\n\tYour Order is Ready (Rasmalai)");
					printf("\n\tPrice : Rs. 90");
					printf("\n\tEnter Quantity : ");
					scanf("%d", &qunty);
					total = 90 * qunty;
					gst = total * 0.05;
					grand = total + gst;
					clrscr();
					printf("\n\n\t--------- ORDER SUMMARY ---------");
					printf("\n\n\tItem : Rasmalai");
					printf("\n\tPrice : Rs. 90");
					printf("\n\tQuntity : %d", qunty);
					printf("\n\tGST : Rs. %.2f", gst);
					printf("\n\tTotal Payable : Rs. %.2f", grand);
					printf("\n\n\t---------------------------------");
					break;

				}
		}

	getch();
}
