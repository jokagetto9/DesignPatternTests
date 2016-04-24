#include "lib.h"
#include "rapidxml/rapidxml_utils.hpp"
using namespace rapidxml;

void pause(){
	int a;
	cin >> a;
}

//********************************* MAIN *********************************
int main(int argc, char* args[]){
    file<> xmlFile("test.xml"); // Default template is char
    xml_document<> doc;
    doc.parse<0>(xmlFile.data());

	xml_node<> *node = doc.first_node();
	stringstream ss;
	ss << node->value();
	int i;
	ss >> i;
	cout << i + 7 << "\n";
	ss << node->first_attribute()->value();
	string s;
	ss >> s;
	cout << s << "\n";

	pause();
	return 0;
}//*/