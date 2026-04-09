#include <iostream>  // this is needed because of
using namespace std; // the "cout" below.

//The Clock class definition starts here. 
// Again, given here as one unit for clarity where 
// as normally this definition would be divided 
// into two parts: specification and implementation
// and written in separate files.  

class Clock 
{ 
  private:
    //declarations of data members that are private
    int hour;          //an hour in the range 1 - 12
    int minute;        //a minute in the range 0 - 59
    int second;        //a second in the range 0 - 59
    string meridian;   //is the time AM or PM

  public: 
    // publically accessible methods, i.e., the public interface 

    //Set the clock to the specified time 
    void setClock (int h, int m, int s, string mer)
    {
       hour = h;
       minute = m;
       second = s; 
       meridian = mer;
    }

    //Display the time in standard notation
    void displayStandard()
    {
      cout << hour<<':'<<minute<<':'<<second<<' ' << meridian ;
    }

    //Display the time in military notation
    void displayMilitary()
    {
      int militaryHour = hour;
  
      //if it is pm and it isn't 12:00 noon, then add 
      //12 hours to the time
      if (meridian == "PM" && hour != 12)
          militaryHour += 12;

      //if it is 12:00 midnight, then subtract 12 hours
      if (meridian == "AM" && hour == 12)
          militaryHour -= 12;

      cout << militaryHour << ':' << minute <<  ':' << second;		  
    }

};

int main()
{
  Clock laikrodis; //sukurti laikrodį

  //nustatyti laikrodį į 2:30:45 PM
  laikrodis.setClock(2, 30, 45, "PM");

  cout <<"=============================="<< endl;

  cout << "The time in standard notation is: ";
  laikrodis.displayStandard(); //paroditi laiką standartiniu formatu

  cout << endl; 

  cout << "The time in military notation is: ";
  laikrodis.displayMilitary(); //paroditi laiką militarišku formatu

  cout << endl;

  cout << "==============================" << endl;
  
  return 0;
}