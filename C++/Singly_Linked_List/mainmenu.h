/*
 * mainmenu.h
 *
 *  Created on: 14-Dec-2019
 *      Author: Kartik
 */

#ifndef MAINMENU_H_
#define MAINMENU_H_

class main_menu {
	int option;
public:
	main_menu();
	virtual ~main_menu();
	virtual int main_menu_options();
};

#endif /* MAINMENU_H_ */
