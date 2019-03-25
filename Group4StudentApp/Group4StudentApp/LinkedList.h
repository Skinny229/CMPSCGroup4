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
	public:
		LinkedList();
		void push_back(ListType&);
		void push_front(ListType&);
		size_t size();
	};
}


#endif
