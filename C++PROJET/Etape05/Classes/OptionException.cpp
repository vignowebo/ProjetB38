#include <iostream>
#include <string.h>
using namespace std;

#include "OptionException.h"

/***********************************************/
/*************Constructeur et destructeur*******/
/***********************************************/

OptionException::OptionException():Exception(){}

OptionException::OptionException(string message):Exception(mes){}
	

OptionException::OptionException(const OptionException& O):Exception(O){}
	

OptionException& OptionException::operator=(const OptionException& O){
	Exception::operator=(O);
	return(*this)}


OptionException::~OptionException(){
	cout<<"destructeur OptionException"<<endl;
}

