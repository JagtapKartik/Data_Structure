/*
 * main.cpp
 *
 *  Created on: 14-Dec-2019
 *      Author: Kartik
 */


#include "SinglyLinkedList.h"
#include "mainmenu.h"

Singly_Linked_List sll;
main_menu menu;

enum OPTION{
	MAIN_MENU,
	SLL_E,
	SCLL_E,
	DLL_E,
	DCLL_E,
	SHOW
};

int main(){
	int option = MAIN_MENU;
	while(1){
		switch(option){
		case SLL_E:
			option = sll.main_menu_options();
			break;
		case SCLL_E:
			break;
		case DLL_E:
			break;
		case DCLL_E:
			break;
		case MAIN_MENU:
			option = menu.main_menu_options();
			break;
		default:
			break;
		}
	}
	return 0;
}



