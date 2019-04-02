#include "LinkedList.h"
#include <cstdlib>
#include "Node.h"

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
			head_ptr->setData(entry);
			head_ptr->setPrev = NULL;
		}
		else
		{
			Node<ListType>* newHead = new Node<ListType>(entry, head_ptr,NULL);
			head_ptr->setPrev(newHead);
			head_ptr = newHead;
		}

	}
	
	template<class ListType>
	void LinkedList<ListType>::push_back(ListType& entry)
	{
		if(empty())
		{
			push_front(entry);
			return;
		}

		Node<ListType>* tail = getTail();
		Node<ListType>* newTail = new Node<ListType>(entry,NULL,tail);
		tail->setLink(newTail);
		count++;
	}

	template<class ListType>
	void LinkedList<ListType>::push_front(ListType &entry)
	{
		headInsert(entry);
		count++;
	}

	template<class ListType>
	Node<ListType>* LinkedList<ListType>::at(size_t elem)
	{
		
		Node<ListType>* item = NULL;
		size_t loopCounter = 0;

		for (Node<ListType>* cursor = head_ptr; loopCounter < elem && cursor != NULL; cursor = cursor->getLink()) 
		{

		}


		return item;
	}

	template<class ListType>
	void LinkedList<ListType>::erase(size_t elem)
	{

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

	template<class ListType>
	Node<ListType>* LinkedList<ListType>::getTail()
	{
		Node<ListType>* cursor;
		for (cursor = head_ptr; cursor != NULL; cursor = cursor->getLink());
		return cursor;
	}



}