/*
 * LinkedLIstOperation.h
 *
 *  Created on: 14-Dec-2019
 *      Author: Kartik
 */

#ifndef LINKEDLISTOPERATION_H_
#define LINKEDLISTOPERATION_H_

class LinkedLIstOperation {
public:
	LinkedLIstOperation();
	virtual ~LinkedLIstOperation();
	virtual void add_to_the_list(int data,int position) = 0;
	virtual int add_node_to_the_first(int data) = 0;
	virtual int add_node_at_last(int data) = 0;
	virtual int add_node_to_the_specific_position(int data,int position) = 0;
	virtual void delete_from_the_list(int position) = 0;
	virtual int delete_node_from_the_first() = 0;
	virtual int delete_node_from_last() = 0;
	virtual int delete_node_from_specific_position(int position) = 0;
	virtual void show_list() = 0;
};

#endif /* LINKEDLISTOPERATION_H_ */
