#pragma once
#include "Reader.h"
#include<iostream>
class NewSiteReader : public Reader {
public:
	void parse(std::string& url) override;

};

