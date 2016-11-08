/*Kerrie-Ann Sutton
14378311
Declares functions in header file
*/
#ifndef _DIE_H
#define _DIE_H


class die{
	public:
		die(int sides_);
		void roll();
		int getValue();
		int getNumsides();
	private:
		int max_;
		int total_;
		int sides_;
		float num_;
};

#endif //_DIE_H
