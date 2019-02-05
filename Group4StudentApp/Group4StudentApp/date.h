#ifndef DATE_H
#define DATE_H
namespace dimperio_1
{
	class date
	{
	  private:
		int month;
	   	int day;
		int year;
	  public:
		date(int=7, int=4, int=94);  // constructor
		void setdate(int, int, int); // member function to assign a date
		void showdate( );            // member function to display a date
	};
}
#endif
