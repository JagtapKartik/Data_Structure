/*;;
 * SinglyLinkedList.h
 *
 *  Created on: 14-Dec-2019
 *      Author: Kartik
 */

#ifndef SINGLYLINKEDLIST_H_
#define SINGLYLINKEDLIST_H_

#include "LinkedLIstOperation.h"
#include "mainmenu.h"

typedef struct SLL_S{
	int data;
	struct SLL_S *next;
}SLL;

class Singly_Linked_List : public LinkedLIstOperation,main_menu {
private:
	SLL *head;
	SLL *create_node();
	int count_node();
	void add_to_the_list(int data,int position) override;
	int add_node_to_the_first(int data) override;
	int add_node_at_last(int data) override;
	int add_node_to_the_specific_position(int data,int position) override;
	void delete_from_the_list(int position) override;
	int delete_node_from_the_first() override;
	int delete_node_from_last() override;
	int delete_node_from_specific_position(int position) override;
	void show_list() override;
public:
	Singly_Linked_List();
	virtual ~Singly_Linked_List();
	int main_menu_options();
};

#endif /* SINGLYLINKEDLIST_H_ */
