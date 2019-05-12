#pragma once

class pageTable 
{
private:
	int table;
	bool validity;
public:
	void fillPT();
	void setValidity();
};
