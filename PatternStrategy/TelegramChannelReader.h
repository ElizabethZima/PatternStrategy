#pragma once
#include "Reader.h"
class TelegramChannelReader : public Reader {
public:
	void parse(std::string& url) override;
};
