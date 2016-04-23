#include "lib.h"
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <iostream>

using namespace rapidjson;

//********************************* MAIN *********************************
int main(int argc, char* args[]){
	char *json;
	stringstream temp;
	ifstream file ("test.json");
	if (file.is_open())  {
		temp << file.rdbuf();
		json = (char*)temp.str().c_str();
		file.close();

		Document d;
		d.Parse(json);
		int a;
		cin >> a;
		return 0;
	} 
}//*/
