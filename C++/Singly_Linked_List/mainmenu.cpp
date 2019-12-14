/*
 * mainmenu.cpp
 *
 *  Created on: 14-Dec-2019
 *      Author: Kartik
 */

#include "mainmenu.h"
#include <iostream>
using namespace std;

main_menu::main_menu() {
	// TODO Auto-generated constructor stub
	option = -1;
}

main_menu::~main_menu() {
	// TODO Auto-generated destructor stub
}

int main_menu::main_menu_options(){
	cout<<endl;
	cout<<endl;
	cout <<"\t\tMain Menu\t\t"<<endl;
	cout <<"\t\t1.SLL\t\t"<<endl;
	cout <<"\t\t2.SCLL\t\t"<<endl;
	cout <<"\t\t3.DLL\t\t"<<endl;
	cout <<"\t\t3.DCLL\t\t"<<endl;
	cin >>option;
	return option;
}

