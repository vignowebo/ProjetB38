#include <iostream>
#include <string.h>
using namespace std;

#include "Exception.h"

/***********************************************/
/*************Constructeur et destructeur*******/
/***********************************************/

Exception::Exception(){
	setMessage("Pas message");
}

Exception::Exception(string message){
	setMessage(message);
}
	

Exception::Exception(const Exception& E){
	setMessage(E.message);
}

Exception& Exception::operator=(const Exception& E){
	setMessage(E.message);
	return(*this);
}


Exception::~Exception(){
	cout<<"destructeur Exception"<<endl;

}

/***********************************************/
/*************Autre methodes getters setters*******************/
/***********************************************/
void Exception:: setMessage(string me){
	message=me;
}

string Exception:: getMessage()const{
	return message;
}
