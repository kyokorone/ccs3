#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 20

typedef struct item_record
{
	int item_number;
	char item_name[SIZE];
	char item_company[SIZE];
} record;

int DataEntry(record item[SIZE], int count);
void DisplayRecord(record item[SIZE], int count);
int SearchRecord(record item[SIZE], int count); 
int EditRecord(record item[SIZE], int count);
int DeleteRecord(record item[SIZE], int count); 
int DisplayReorder(record item[SIZE], int count);
int DisplayType (record item[SIZE], int count); 
int DisplayCompany (record item[SIZE], int count);

int main (void)
{
	record item[SIZE];
	int count = 0;
	int i;
	
	// menu
	do {
		system("cls");
		puts("--- inventory maintenance ---");
		puts("[1] add an item record");
		puts("[2] display all item records");
		puts("[3] search for an item record");
		puts("[4] search and edit an item record");
		puts("[5] search and delete an item record");
		puts("[6] display all item records equal to or below reorder point");
		puts("[7] display all items by type");
		puts("[8] display all item by company");
		puts("[9] exit");
	
		printf("\nselect an option: ");
		scanf("%d", &i);
		
		// directory to functions
		switch (i){ 
			case 1: count = DataEntry(item, count); break;
			case 2: DisplayRecord(item, count); break;
			case 3: SearchRecord(item, count); break;
			case 4: EditRecord(item, count); break;
			case 5: DeleteRecord(item, count); break;
			case 6: DisplayReorder(item, count); break;
			case 7: DisplayType (item, count); break;
			case 8: DisplayCompany (item, count); break;
			case 9: printf("thank you! now exiting."); break;
			default: {printf("invalid option. please try again.\n\n");
			getch();}
		} 
	}while (i != 9);
	return 0;
}

int DataEntry(record item[SIZE], int count) // user enters the data for an item record in this function
{
	int number;
	char name[SIZE];
	char company [SIZE];
	
	system("cls");
	puts("--- add an item record --- ");
	
	puts("Enter item number: ");
	scanf("%d", &number);
	item[count].item_number = number;

	puts("Enter item name: ");
	getchar();
	fgets(name, SIZE, stdin);
	name[strcspn(name, "\n")] = 0;
	strcpy(item[count].item_name, name);
	
	printf("Enter item company: ");
	getchar();
	fgets(company, SIZE, stdin);
	company[strcspn(name, "\n")] = 0;
	strcpy(item[count].item_company, company);

	return count + 1;
}

void DisplayRecord(record item[SIZE], int count)
{
	int i;
	
	system("cls");
	puts("--- all item records ---\n ");
	printf("item number     item name     item company");
	
	for(i = 0; i < count; i++)
	{
		printf("\n%d\t\t%s\t\t%s", item[i].item_number, item[i].item_name,item[i].item_company);
	}
	
	printf("\npress any key to exit");
	getch();
	                      
}
	
int SearchRecord(record item[SIZE], int count)
{
	puts("--- search for an item record ---\n ");
}

int EditRecord(record item[SIZE], int count)
{
	puts("--- edit an item record ---\n ");
}

int DeleteRecord(record item[SIZE], int count)
{
	puts("--- delete an item record ---\n ");
}

int DisplayReorder(record item[SIZE], int count)
{
	puts("--- item stock equal to or below the reorder point ---\n ");;
}
int DisplayType (record item[SIZE], int count)
{
	puts("--- items sorted by item type ---\n ");
}

int DisplayCompany (record item[SIZE], int count)
{
	puts("--- items sorted by item company ---\n ");
}
