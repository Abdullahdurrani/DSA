#pragma once
#include"node.h"

class List
{

	Node * headenode;
	Node * currentnode;
	int size;


public:
	void insert();          //1
	void del();				//2
	void update();			//3
	void start();			//4	
	void next();			//5			
	void back();			//6
	void tail();			//7

	int find();				//8
	void get();				//9
	void length();			//10
	void display();			//11
	void exit();			//12
	void insertafter();		//13
	void insertbefore();	//14


	List()
	{
		headenode = nullptr;
		currentnode = nullptr;
		size = 0;
	}

	~List()
	{

	}

};



