#ifndef OPTIONEXCEPTION_H
#define OPTIONEXCEPTION_H
#include <string.h>

include "Exception.h"

class OptionException: public Exception{
	

	public:
		OptionException();
		OptionException(string message);
		OptionException(const OptionException& O);

		//operateurs =

		OptionException& operator=(const OptionException& O);

		~OptionException();

};
#endif
