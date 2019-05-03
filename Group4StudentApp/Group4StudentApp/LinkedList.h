#pragma once
#ifndef LinkedList_H
#define LinkedList_H

#include <cstdlib>

using namespace std;

namespace SpaghettiLizards 
{
	template<class ListType>
	class LinkedList 
	{
	
	public:
		
		struct Node
		{
			Node* link;
			ListType data;
			Node* prev;
		};
		LinkedList();
		ListType at(size_t);
		void erase(size_t);
		void replace(size_t, ListType&);
		void push_back(ListType&);
		size_t size();
		bool empty();

	private:
		Node* head_ptr;
		size_t count;
		void headInsert(ListType&);
	};
}


#endif
