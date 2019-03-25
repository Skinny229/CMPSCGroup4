#pragma once
#ifndef LinkedList_H
#define LinkedList_H

#include <cstdlib>
#include "Node.h"

using namespace std;

namespace SpaghettiLizards 
{
	template<class ListType>
	class LinkedList 
	{
	private:
		Node<ListType>* head_ptr;
		size_t count;
		Node<ListType>* getTail();
		void headInsert(ListType&);
	public:
		LinkedList();
		Node<ListType>* at(size_t);
		void erase(size_t);
		void push_back(ListType&);
		void push_front(ListType&);
		size_t size();
		bool empty();
	};
}


#endif
