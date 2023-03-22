#include "ResourseReader.h"

ResourceReader::ResourceReader(Reader* r) : reader(r) {};

ResourceReader::~ResourceReader() { delete reader; }

void ResourceReader::setStretedy(Reader* r) {
	if (reader != nullptr) delete reader;
	reader = r;
}

void ResourceReader::read(std::string& url) {
	reader->parse(url);
}