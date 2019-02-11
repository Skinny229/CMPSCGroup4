#ifndef DATE_H
#define DATE_H
namespace SpaghettiLizards
{
	class Date
	{
	  private:
		int month;
	   	int day;
		int year;
	  public:
		Date(int=7, int=4, int=94);  // constructor
		void setdate(int, int, int); // member function to assign a date
		void showdate( );            // member function to display a date
	};
}
#endif
