#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <string.h>



class Exception{
	
	protected:
		string message;
	public:
		Exception();
		Exception(string message);
		Exception(const Exception& E);

		//operateurs =

		Exception& operator=(const Exception& E);

		~Exception();
		void setMessage(string me);

		string getMessage()const;
		

};
#endif
