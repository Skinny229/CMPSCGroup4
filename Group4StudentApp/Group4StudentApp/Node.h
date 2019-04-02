#pragma once
#ifndef NODE_H
#define NODE_H

#include <cstdlib>

using namespace std;

namespace SpaghettiLizards 
{
	template <class T>
	class Node 
	{
	private:
		Node<T>* link;
		Node<T>* prev;
		T* data;
	public:
		Node(T* = NULL, Node<T>* = NULL, Node<T>* = NULL);

		T* getData();
		Node<T>* getLink();
		Node<T>* getPrev();

		void setData(T*);
		void setLink(Node<T>*);
		void setPrev(Node<T>*);
	};
}
#endif