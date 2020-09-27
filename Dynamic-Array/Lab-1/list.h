#pragma once

class List
{
	int * A;
	
	int max;
	
	int size;

	int CI;
	

public:
	void createlist();
	void insert();
	void del();
	void update();
	void start();
	void next();
	void back();
	void tail();
	int find();
	void copy();
	void get();
	void length();
	void display();
	void deallocatelist();
	void zero();
	void exit();
	void menu();
	void line();
	int findlocation();
	void insertatlocation();
	int prime(int num);

	List()
	{
		A = nullptr;

		max = 0;

		size = 0;

		CI = 0;

	}

	~List()
	{

	}
};