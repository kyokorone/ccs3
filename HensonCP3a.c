/*
	Name: Angela Sol Henson
	Date Started: March 07, 2024
	Date Finished:
	Description: Program that simulates a grocery store's maintenance of item records.
*/

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

#define SIZE 20
#define NUM 5

typedef struct item_record // structure for the item record 
{
	int item_number [NUM];
	char item_name [SIZE];
	char item_company [SIZE];
	char item_type [SIZE];
	float selling_price;
	int stock;
	int reorder;
} record;

int DataEntry (record, );
int EditRecord (/**/);
int DeleteRecord (/**/);
int ReorderRecord (/**/);
int TypeFilter (/**/);
int CompanyFilter (/**/);
int DisplayAll (/**/);
int DisplayType (/**/);
int DisplayCompany (/***/);

int main (void)
{
	record item[SIZE];
	int count = 0;

	/*
		do {
		count = DataEntry(student, count);
	} while (count < 10);
	
	honestly need to study lol wa ko ka g very much
	*/

	return 0;
}
int MainMenu(void)
{
	printf("--- INVENTORY MAINTENANCE ---");
	puts("[1] Add an item record");
	puts("[2] Display all item records");
	puts("[3] Search for an item record");
	// Should I just make 3-5 into one option?
	puts("[4] Search and edit an item record");
	puts("[5] Search and delete an item record");
	puts("[6] Display all item records equal to or below reorder point");
	puts("[7] Display all items by type");
	puts("[8] Display all item by company");
	puts("[9] Exit");
}