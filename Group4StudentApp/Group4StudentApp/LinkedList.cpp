#include "LinkedList.h"
#include <cstdlib>
#include <iostream>

using namespace std;

namespace SpaghettiLizards
{

	template<class ListType>
	LinkedList<ListType>::LinkedList()
	{
		head_ptr = NULL;
		count = 0;
	}

	template <class ListType>
	void LinkedList<ListType>::headInsert(ListType& entry) 
	{
		
		if (count == 0) 
		{
			head_ptr = new Node;
			head_ptr->link = NULL;
			head_ptr->data = entry;
			head_ptr->prev = NULL;
		}
		else
		{
			Node* newHead = new Node;
			newHead->data = entry;
			newHead->prev = NULL;
			newHead->link = head_ptr;
			head_ptr->prev = newHead;
			head_ptr = newHead;
		}

	}
	
	template<class ListType>
	void LinkedList<ListType>::push_back(ListType& entry)
	{
		if(empty())
		{
			headInsert(entry);
		}
		else {
			Node* cursor;

			for (cursor = head_ptr; cursor->link != NULL; cursor = cursor->link);

			Node* newTail = new Node;
			newTail->prev = cursor;
			newTail->data = entry;
			newTail->link = NULL;
			cursor->link = newTail;
		}
		count++;

	}

	template<class ListType>
	ListType LinkedList<ListType>::at(size_t elem)
	{
		
		Node* item = NULL;
		size_t loopCounter = 0;

		for (Node* cursor = head_ptr; loopCounter <= elem && cursor != NULL; cursor = cursor->link) 
		{
			if (elem == loopCounter)
			{
				item = cursor;
				break;
			}
			loopCounter++;

		}
		return item->data;
	}
	
	template<class ListType>
	void LinkedList<ListType>::replace(size_t elem, ListType& entry) 
	{
		Node* item = NULL;
		size_t loopCounter = 0;

		for (Node* cursor = head_ptr; loopCounter <= elem && cursor != NULL; cursor = cursor->link)
		{
			if (elem == loopCounter)
			{
				item = cursor;
				break;
			}
			loopCounter++;

		}
		item->data = entry;
	}

	template<class ListType>
	void LinkedList<ListType>::erase(size_t elem)
	{
		if (elem >= count)
			return;
		else if (elem == 0) 
		{
			Node* oldHead = head_ptr;
			Node* newHead = head_ptr->link;
			if (newHead != NULL) {
				newHead->prev = NULL;
			}
			oldHead = NULL;
			delete oldHead;
			head_ptr = newHead;

		}
		else
		{
			Node* before = NULL;
			Node* toDelete = NULL;
			Node* after = NULL;
			size_t i = 0;
			for (Node* cursor = head_ptr; i < count && cursor != NULL; cursor = cursor->link)
			{
				if (i == elem)
				{
					before = cursor->prev;
					toDelete = cursor;
					after = toDelete->link;
					break;
				}
				i++;
			}
			before->link = after;
			if(after != NULL)
				after->prev = before;
			toDelete = NULL;
		}
		count--;
	}

	template<class ListType>
	size_t LinkedList<ListType>::size()
	{
		return count;
	}

	template <class ListType>
	bool LinkedList<ListType>::empty() 
	{
		return count == 0;
	}




}