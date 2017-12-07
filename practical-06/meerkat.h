#ifndef MEERKAT_H
#define MEERKAT_H

using namespace std;
#include <string>

// Class definition for a meerkat
class meerkat
{
	public:
		string name;
		int age;
		meerkat() ;                      // no name or age is required to create a meerkat
		void setName(string meerName);   // change the meerkat's name
		string getName();
		void setAge(int meerAge);        // change the meerkat's age
		int getAge();
		~meerkat();
};
#endif //MEERKAT_H
