#include <iostream>
#include <string>
#include "Reader.h"
#include "ResourseReader.h"
#include "NewSiteReader.h"
#include "SocialNetworkReader.h"
#include "TelegramChannelReader.h"
using namespace std;



int main() {

	ResourceReader* resourceReader = new  ResourceReader(new NewSiteReader);

	string url = "https://new.com";

	resourceReader->read(url);

	url = "https://facebook.com";

	resourceReader->setStretedy(new SocialNetworkReader);
	resourceReader->read(url);


	url = "@news_channel_telegram";

	resourceReader->setStretedy(new TelegramChannelReader);
	resourceReader->read(url);
}