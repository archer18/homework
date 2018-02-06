#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

main ()
{
  string ans;			// string answer able to accept Y or Yes

  cout << "===============================================\n";
  cout << "[------------ Call Cost Calculator -----------]\n";
  cout << "===============================================\n";
  cout << endl << "This program is designed to provide your total cost\nduring a call for any day of the week.\n" << endl;

  do // main do loop for repeating whole calculation
    {
      int hour, min, duration;	// Integers to hold hours, minutes, and the duration of call in minutes
      double cost;		// Final total of cost
      string Time, Day;		// Strings to hold the time and day, to be extracted later

      do // do loop for time confirmation
	{
	  cout << "Using 24-hour time and the following format, 00:00\n";
	  cout << "What time was the call placed?\n";
	  cin >> Time;		// time to be entered in specific format 00:00

	  if ((Time.length () > 4) && (Time.length () < 6))	// if the string length is exactly 5 char long = 00:00
	    {
	      string delimiter = ":";	// a break identifier in the middle of the string
	      string StrHour = Time.substr (0, Time.find (delimiter));	// extracting the HOUR from TIME string input 
	      string StrMin = Time.substr (3, 4);	// extracting the MIN from the TIME string input
	      hour = stoi (StrHour);	// HOUR string converted to int for calc
	      min = stoi (StrMin);	// MIN string converted to into for calc

	      if ((hour < 0) || (hour > 24))	// if user inputs HOUR outside of 0-24, error correction occurs
		{
		  cout << "\nInvalid Hour Input\n";
		  cout << "Hours only valid between 0-24\n" << endl;	// instructions for user
		}

	      if ((min < 0) || (min > 60))	// if user inputs MIN outside of 0-60, error correction occurs
		{
		  cout << "\nInvalid Minute Input\n";
		  cout << "Minutes only valid between 0-60\n" << endl;	// instructions for user
		}
	    }
	  else
	    {
	      cout << "Invaild time format.\n";	// user notification to adhere to time format
	      cout << "Please use 24 hour time format with leading zero and colon.\n    Example, 09:45\n"	// instructions for user
		<< endl;
	    }
	}
      while (((Time.length () <= 4) || (Time.length () >= 6)) || ((hour < 0) || (hour > 24)) || ((min < 0) || (min > 60)));	
      // loop will occur if user inputs any time format errors

      cout << endl;
      cout << "\nUsing minutes, how long was call?\n";	// asks user for duration of call
      cin >> duration;

      cout << endl << "What day was the call placed?\n";	// asks user for what day call was placed
      cin >> Day;
      string SubDay = Day.substr (0, 2);
      //cout << endl << "Day confirmation = " << SubDay << endl;
      
//IF MONDAY
      if ((SubDay == "mo") || (SubDay == "Mo")) // if user inputs M, m, monday,  Monday; if function will execute
	{
	  if ((hour >= 8) && (hour <= 18)) // if HOUR is between 0800-1800
	    {
	      cout << "\nCost $0.40c/min\n";
	      cost = duration * (0.40);
	      cout << "Total Cost: $" << fixed << setprecision (2) << cost << ".\n";
	    }

	  if (((hour >= 0) && (hour < 8)) || ((hour > 18) && (hour <= 24))) // if HOUR is between 0000-0800 & 1800-2400
	    {
	      cout << "\nCost $0.25c/min\n";
	      cost = duration * (0.25);
	      cout << "Total Cost: $" << fixed << setprecision (2) << cost << ".\n";
	    }
	}

//IF TUESDAY
      if ((SubDay == "tu") || (SubDay == "Tu"))
	{
	  if ((hour >= 8) && (hour <= 18))
	    {
	      cout << "\nCost $0.40c/min\n";
	      cost = duration * (0.40);
	      cout << "Total Cost: $" << fixed << setprecision (2) << cost << ".\n";
	    }

	  if (((hour >= 0) && (hour < 8)) || ((hour > 18) && (hour <= 24)))
	    {
	      cout << "\nCost $0.25c/min\n";
	      cost = duration * (0.25);
	      cout << "Total Cost: $" << fixed << setprecision (2) << cost << ".\n";
	    }
	}
	
// IF WEDNESDAY
      if ((SubDay == "we") || (SubDay == "We"))
	{
	  if ((hour >= 8) && (hour <= 18))
	    {
	      cout << "\nCost $0.40c/min\n";
	      cost = duration * (0.40);
	      cout << "Total Cost: $" << fixed << setprecision (2) << cost << ".\n";
	    }

	  if (((hour >= 0) && (hour < 8)) || ((hour > 18) && (hour <= 24)))
	    {
	      cout << "\nCost $0.25c/min\n";
	      cost = duration * (0.25);
	      cout << "Total Cost: $" << fixed << setprecision (2) << cost << ".\n";
	    }
	}

//IF THURSDAY
    if ((SubDay == "th") || (SubDay == "Th"))
	{
	  if ((hour >= 8) && (hour <= 18))
	    {
	      cout << "\nCost $0.40c/min\n";
	      cost = duration * (0.40);
	      cout << "Total Cost: $" << fixed << setprecision (2) << cost << ".\n";
	    }

	  if (((hour >= 0) && (hour < 8)) || ((hour > 18) && (hour <= 24)))
	    {
	      cout << "\nCost $0.25c/min\n";
	      cost = duration * (0.25);
	      cout << "Total Cost: $" << fixed << setprecision (2) << cost << ".\n";
	    }
	}

//IF FRIDAY
      if ((SubDay == "fr") || (SubDay == "Fr"))
	{
	  if ((hour >= 8) && (hour <= 18))
	    {
	      cout << "\nCost $0.40c/min\n";
	      cost = duration * (0.40);
	      cout << "Total Cost: $" << fixed << setprecision (2) << cost << ".\n";
	    }

	  if (((hour >= 0) && (hour < 8)) || ((hour > 18) && (hour <= 24)))
	    {
	      cout << "\nCost $0.25c/min\n";
	      cost = duration * (0.25);
	      cout << "Total Cost: $" << fixed << setprecision (2) << cost << ".\n";
	    }
	}
	
//IF SATURDAY OR SUNDAY
      if (((SubDay == "sa") || (SubDay == "Sa")) || ((SubDay == "su") || (SubDay == "Su"))) // if user inputs DAY substring as saturday or sunday
	{
	  cout << "\nCost $0.15c/min\n";
	  cost = duration * (0.15);
	  cout << "Total Cost: $" << fixed << setprecision (2) << cost << ".\n";
	}

      cout << endl << "Restart call cost calculation?\n";
      cin >> ans;
      cout << endl;

    }
  while ((ans == "Yes") || (ans == "y") || (ans == "Y") || (ans == "yes")); // call calculation will loop if user inputs Y, y, yes, or Yes 

  return 0;
}