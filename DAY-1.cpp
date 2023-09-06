#include <iostream>
#include <map>
int dataTypes(string type) {
	// Write your code here
	 std::map<std::string, int> mp;

	mp["Integer"]=4;
	mp["Long"]=8;
	mp["Float"]=4;
	mp["Double"]=8;
	mp["Character"]=1;

	return mp[type];
}
