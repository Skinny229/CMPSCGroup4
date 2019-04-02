#include "Node.h"

namespace SpaghettiLizards 
{

	template <class T>
	Node<T>::Node(T* data, Node* link, Node* prev)
	{
		this.data = data;
		this.link = link;
		this.prev = prev;
	}

	template <class T>
	T* Node<T>::getData()
	{
		return this.data;
	}

	template<class T>
	Node<T>* Node<T>::getLink()
	{
		return this.Link;
	}

	template<class T>
	Node<T>* Node<T>::getPrev()
	{
		return this.prev;
	}

	template<class T>
	void Node<T>::setData(T* newData)
	{
		data = newData;
	}

	template<class T>
	void Node<T>::setLink(Node* newLink)
	{
		link = newLink;
	}

	template<class T>
	void Node<T>::setPrev(Node* newPrev)
	{
		prev = newPrev;
	}

}