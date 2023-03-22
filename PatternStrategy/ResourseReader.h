#pragma once
#include "Reader.h"
#include <iostream>
#include <string>
class ResourceReader {
private:
	Reader* reader;
public:
	ResourceReader(Reader* r);
	~ResourceReader();

	void setStretedy(Reader* r);

	void read(std::string& url);
};

