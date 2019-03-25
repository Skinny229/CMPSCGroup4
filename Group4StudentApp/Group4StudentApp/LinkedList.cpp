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

	
	template<class ListType>
	void LinkedList<ListType>::push_back(ListType& entry)
	{

		count++;
	}

	template<class ListType>
	void LinkedList<ListType>::push_front(ListType &entry)
	{

		count++;
	}

	template<class ListType>
	size_t LinkedList<ListType>::size()
	{
		return count;
	}

	template<class ListType>
	Node<ListType>* LinkedList<ListType>::getTail()
	{
		Node<ListType>* cursor;
		for (cursor = head_ptr; cursor != NULL; cursor = cursor.getLink());
		return cursor;
	}



}