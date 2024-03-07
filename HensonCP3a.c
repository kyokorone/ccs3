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

int MainMenu(void)
{
	printf("--- INVENTORY MAINTENANCE ---");
	puts("[1] Add an item record");
	puts("[2] Display all item records");
	puts("[3] Search for an item record");
	puts("[4] Search and edit an item record");
	puts("[5] Search and delete an item record");
	puts("[6] Display all item records equal to or below reorder point");
}