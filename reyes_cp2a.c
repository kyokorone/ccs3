/*
    Name: Angela Sol Henson
	Date Started: March 07, 2024
    Date Finished:
    Description: Program that simulates a grocery store's maintenance of item records.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <windows.h>

#define SIZE 20

typedef struct item_record // structure for the item record
{
  int item_number[SIZE];
  char item_name[SIZE];
  char item_company[SIZE];
  char item_type[SIZE];
  float selling_price;
  int item_stock;
  int item_reorder;
} record;

// functions to build
	//int EditRecord(/**/
	//int DeleteRecord(/**/);
	//int ReorderRecord(/**/);
	//int TypeFilter(/**/);
	//int CompanyFilter(/**/);
	//int DisplayAll(/**/);
	//int DisplayType(/**/);
	//int DisplayCompany(/***/);

int MainMenu(void);
int DataEntry(record itemrec[SIZE]);

int main (void)
{
	record item[SIZE];
	int i;

	do {
		printf("--- INVENTORY MAINTENANCE ---");
		puts("[1] Add an item record");
		puts("[2] Display all item records");
		puts("[3] Search for an item record");
		puts("[4] Search and edit an item record");
		puts("[5] Search and delete an item record");
		puts("[6] Display all item records equal to or below reorder point");
		puts("[7] Display all items by type");
		puts("[8] Display all item by company");
		puts("[9] Exit");

		printf("Select an option: ");
		scanf("%d", &i);
		if (i = 1)
			DataEntry(item);

	}while (i != 9);

}

int DataEntry(record itemrec[SIZE])
{
	int number [SIZE];
	char name [SIZE];
	char company [SIZE];
	char type [SIZE];
	float price;
	int stock;
	int reorder;

	puts("--- NEW ITEM RECORD ---");

	printf("Enter item number: ");
	gets(number);
	strcpy (item[number].item_number, number);

	printf("Enter item name: ");
	gets(name);
	strcpy (item[number].item_name, name);

	printf("Enter item company: ");
	gets(company);
	strcpy (item[number].item_company, company);

	printf("Enter item type: ");
	gets(type);
	strcpy (item[number].item_type, type);

	printf("Enter selling price: ");
	gets(price);
	strcpy (item[number].selling_price, price);

	printf("Enter item stock-on-hand: ");
	gets(stock);
	strcpy (item[number].item_stock, stock);

	printf("Enter item reorder point: ");
	gets(reorder);
	strcpy (item[number].item_reorder, reorder);
}

/*
	int sID;
	char LName [NAMESIZE];
	char FName [NAMESIZE];
	char College [COLLEGESIZE];
	char Degree [DEGREESIZE];
	int YrLevel;
	
	printf("\n Enter data for student %d: ", count + 1);
	printf("\n\n Student ID: ");
	scanf("%d", &sID);
	
	fflush (stdin);
		
	student [count].studID = sID;
	
	printf("\n Student Last Name: ");
	
	printf("\n Student First Name: ");
	gets(FName);
	strcpy (student[count].studFName, FName);
	
	printf("\n Student College: ");
	gets(College);
	strcpy (student[count].studCollege, College);
	
	printf("\n Student Degree: ");
	gets(Degree);
	strcpy (student[count].studDegree, Degree);
	
	printf("\n Student Year Level: ");
	scanf("%d", &YrLevel);
	student[count].studYearLevel = YrLevel;
	fflush (stdin);
	
	count++;
	
	return count;
*/
int EditRecord(/**/);
int DeleteRecord(/**/);
int ReorderRecord(/**/);
int TypeFilter(/**/);
int CompanyFilter(/**/);
int DisplayAll(/**/);
int DisplayType(/**/);
int DisplayCompany(/***/);