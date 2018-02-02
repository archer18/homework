#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <iomanip>

using namespace std;

main ()
{
  int hour, min, duration;
  double cost;
  char day;
  string Time, Day;
  
  do
  {
  cout << "What time was the call placed?\n";
  cin >> Time;

  if ((Time.length () > 4) && (Time.length () < 6))
    {
      cout << "time confirm = " << Time << endl;
      string delimiter = ":";
      string StrHour = Time.substr (0, Time.find (delimiter));
      string StrMin = Time.substr (3, 4);
      cout << "SubStrings confirm = " << StrHour << " : " << StrMin << endl;
      hour = stoi (StrHour);
      min = stoi (StrMin);
      cout << "hour int = " << hour << "\nmin int = " << min <<endl;
      
      if ((hour < 0)||(hour > 24))
      {
          cout << "\nInvalid Hour Input\n";
          cout << "Hours only valid between 0-24";
      }
      
      if ((min < 0)||(min > 60))
      {
          cout << "\nInvalid Minute Input\n";
          cout << "Minutes only valid between 0-60\n";
      }
    }
    else 
    {
      cout << "Invaild time format.\n";
      cout << "Please use 24 hour time format with leading zero and colon.\n    Example, 09:45\n"<<endl;
    }
    }
  while (((Time.length () <= 4) || (Time.length () >= 6))||((hour < 0)||(hour > 24))||((min < 0)||(min > 60)));
  
  cout << endl;
  cout << "\nUsing minutes, how long was call?\n";
  cin >> duration;

  cout << "What day was the call placed?\n";
  cin >> Day;
  string SubDay = Day.substr (0, 2);
  cout << endl << "Day confirmation = " << SubDay << endl;
  
  if ((SubDay == "mo")||(SubDay == "Mo"))
  {
    cout << "\nCall on monday \n";
    
    if ((hour >= 8)&&(hour <= 18))
    {
        cout << "$0.40c/min\n";
        cost = duration * (0.40);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
    
    if (((hour >= 0)&&(hour < 8))||((hour > 18)&&(hour <= 24)))
    {
        cout << "$0.25c/min\n";
        cost = duration * (0.25);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
  }
  
  if ((SubDay == "tu")||(SubDay == "Tu"))
  {
    cout << "\nCall on Tuesday \n";
    
    if ((hour >= 8)&&(hour <= 18))
    {
        cout << "$0.40c/min\n";
        cost = duration * (0.40);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
    
    if (((hour >= 0)&&(hour < 8))||((hour > 18)&&(hour <= 24)))
    {
        cout << "$0.25c/min\n";
        cost = duration * (0.25);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
  }
  
  if ((SubDay == "we")||(SubDay == "We"))
  {
    cout << "\nCall on Wednesday \n";
    
    if ((hour >= 8)&&(hour <= 18))
    {
        cout << "$0.40c/min\n";
        cost = duration * (0.40);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
    
    if (((hour >= 0)&&(hour < 8))||((hour > 18)&&(hour <= 24)))
    {
        cout << "$0.25c/min\n";
        cost = duration * (0.25);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
  }
  
  if ((SubDay == "th")||(SubDay == "Th"))
  {
    cout << "\nCall on Thursday \n";
    
    if ((hour >= 8)&&(hour <= 18))
    {
        cout << "$0.40c/min\n";
        cost = duration * (0.40);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
    
    if (((hour >= 0)&&(hour < 8))||((hour > 18)&&(hour <= 24)))
    {
        cout << "$0.25c/min\n";
        cost = duration * (0.25);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
  }
  
  if ((SubDay == "fr")||(SubDay == "Fr"))
  {
    cout << "\nCall on monday \n";
    
    if ((hour >= 8)&&(hour <= 18))
    {
        cout << "$0.40c/min\n";
        cost = duration * (0.40);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
    
    if (((hour >= 0)&&(hour < 8))||((hour > 18)&&(hour <= 24)))
    {
        cout << "$0.25c/min\n";
        cost = duration * (0.25);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
  }
  
  if (((SubDay == "sa") || (SubDay == "Sa"))||((SubDay == "su") || (SubDay == "Su")))
  {
    cout << "\nCall on saturday or sunday \n";
    
        cout << "$0.15c/min\n";
        cost = duration * (0.15);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    
  }
  
  cout << endl << "cost is $" << cost << endl;

  return 0;
}