#pragma once
#include "Reader.h"
class SocialNetworkReader : public Reader {
public:
	void parse(std::string& url) override;
};


