/*
 * SinglyLinkedList.cpp
 *
 *  Created on: 14-Dec-2019
 *      Author: Kartik
 */

#include "SinglyLinkedList.h"
#include <iostream>
using namespace std;

enum SLL_E{
	MAIN_MENU,
	ADD,
	DELETE,
	SHOW
};

Singly_Linked_List::Singly_Linked_List() {
	// TODO Auto-generated constructor stub
	head = 0;
}

Singly_Linked_List::~Singly_Linked_List() {
	// TODO Auto-generated destructor stub
}


SLL *Singly_Linked_List::create_node(){
	SLL *newnode = new SLL;
	if(newnode == NULL){
		return 0;
	}
	return newnode;
}

int Singly_Linked_List::add_node_to_the_first(int data){
	SLL *newnode = create_node();
	if(newnode == 0){
		return -1;
	}
	if(head == NULL){
		newnode->data = data;
		newnode->next = NULL;
		head = newnode;
		return 0;
	}
	newnode->data = data;
	newnode->next = NULL;
	newnode->next = head;
	head = newnode;
	return 0;
}

int Singly_Linked_List::count_node(){
	SLL *trav = head;
	int count = 0;
	while(trav != NULL){
		trav = trav->next;
		count ++;
	}
	return count;
}

int Singly_Linked_List::add_node_at_last(int data){
	SLL *newnode = create_node();
	if(newnode == 0){
		return -1;
	}
	SLL *trav = head;
	while(trav->next != NULL){
		trav = trav->next;
	}
	newnode->data = data;
	newnode->next = NULL;
	trav->next = newnode;
	return 0;
}

int Singly_Linked_List::add_node_to_the_specific_position(int data,int position){
	SLL *newnode = create_node();
	int count = 1;
	if(newnode == 0){
		return -1;
	}
	SLL *trav = head;
	while(count < position - 1){
		trav = trav->next;
		count ++;
	}
	newnode->data = data;
	newnode->next = NULL;
	newnode->next = trav->next;
	trav->next = newnode;
	return 0;
}

void Singly_Linked_List::show_list(){
	if(head->next == NULL){
		cout <<"Data :"<<head->data<<"\t"<<endl;
		return;
	}
	SLL *trav = head;
	while(trav != NULL){
		cout <<"Data :"<<trav->data<<"\t";
		trav = trav->next;
	}cout<<endl;
}

void Singly_Linked_List::add_to_the_list(int data,int position){
	if(head == NULL){
		add_node_to_the_first(data);
		return;
	}
	if(position == 1){
		add_node_to_the_first(data);
		return;
	}else if(position == count_node() + 1 || position > count_node() + 1){
		add_node_at_last(data);
		return;
	}else{
		add_node_to_the_specific_position(data,position);
	}
	return;
}

void Singly_Linked_List::delete_from_the_list(int position){
	if(position == 1){
		delete_node_from_the_first();
		return;
	}else if(position == count_node()){
		delete_node_from_last();
		return;
	}else{
		delete_node_from_specific_position(position);
	}
	return;
}

int Singly_Linked_List::delete_node_from_the_first(){
	SLL *temp = head;
	if(head == NULL){
		delete(head);
		head = NULL;
	}else{
		head = head->next;
		delete(temp);
	}
	return 0;
}

int Singly_Linked_List::delete_node_from_last(){
	SLL *temp = head;
	if(head == NULL){
		delete(head);
		head = NULL;
	}else{
		SLL *trav = head;
		while(trav->next->next != NULL){
			trav = trav->next;
		}
		temp = trav->next;
		trav->next = NULL;
		delete(temp);
	}
	return 0;
}

int Singly_Linked_List::delete_node_from_specific_position(int position){
	SLL *temp = head;
	int count = 1;
	if(head == NULL){
		delete(head);
		head = NULL;
	}else{
		SLL *trav = head;
		while(count < position - 1){
			trav = trav->next;
			count ++;
		}
		temp = trav->next;
		trav->next = temp->next;
		delete(temp);
	}
	return 0;
}

int Singly_Linked_List::main_menu_options(){
	int position = -1;
	int data = 0;
	int location = 0;
	cout <<"\t\tSLL OPTION\t\t"<<endl;
	cout <<"\t\t1.ADD NODE\t\t"<<endl;
	cout <<"\t\t2.DELETE NODE\t\t"<<endl;
	cout <<"\t\t3.SHOW LIST\t\t"<<endl;
	cout <<"\t\t0.MAIN MENU\t\t"<<endl;
	cin >> position;
	switch(position){
	case MAIN_MENU:
		return MAIN_MENU;
		break;
	case ADD:
		cout<<"Enter Data:"<<endl;
		cin>>data;
		cout<<"Enter Location"<<endl;
		cin>>location;
		add_to_the_list(data,location);
		break;
	case DELETE:
		cout<<"Enter Location"<<endl;
		cin>>location;
		delete_from_the_list(location);
		break;
	case SHOW:
		show_list();
		break;
	}
	return 0;
}
