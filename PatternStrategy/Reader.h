#pragma once

#include <iostream>
#include <string>

class Reader {
public:
	virtual ~Reader() {}
	virtual void parse(std::string & url) = 0;
};

