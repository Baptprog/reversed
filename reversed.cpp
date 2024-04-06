#ifndef REVERSED
#define REVERSED

#include <iostream>
#include <string>

// Renvoie le string "mot" a l'envers

void reversed(std::string mot){
	std::string n;
	for (int i=mot.size();i>=0;i--){
		n.push_back(mot[i]);
	}
	std::cout<<n<<std::endl;
}

#endif 