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
      cout << "confirm time " << Time << endl;
      string delimiter = ":";
      string StrHour = Time.substr (0, Time.find (delimiter));
      string StrMin = Time.substr (3, 4);
      cout << "Confirm SubStrings " << StrHour << " : " << StrMin << endl;
      hour = stoi (StrHour);
      min = stoi (StrMin);
      cout << "hour int = " << hour << "\nmin int = " << min <<endl;
    }
    else 
    {
      cout << "Invaild time format.\n";
      cout << "Please use 24 hour time format with leading zero and colon.\n    Example, 09:45\n"<<endl;
    }
    }
  while ((Time.length () <= 4) || (Time.length () >= 6));
  

  cout << "\nUsing minutes, how long was call?\n";
  cin >> duration;

  cout << "What day was the call placed?\n";
  cin >> Day;
  string SubDay = Day.substr (0, 2);
  cout << endl << SubDay << endl;
  
  if ((SubDay == "mo") || (SubDay == "Mo"));
  {
    cout << "\nCall on monday \n";
    
    if ((hour >= 8)&&(hour <= 18))
    {
        cout << "$0.40c/min\n";
        cost = duration * (0.40);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
    
    if ((hour < 8)||(hour > 18))
    {
        cout << "$0.25c/min\n";
        cost = duration * (0.25);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
  }
  
  if ((SubDay == "tu") || (SubDay == "Tu"));
  {
    cout << "\nCall on Tuesday \n";
    
    if ((hour >= 8)&&(hour <= 18))
    {
        cout << "$0.40c/min\n";
        cost = duration * (0.40);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
    
    if ((hour < 8)||(hour > 18))
    {
        cout << "$0.25c/min\n";
        cost = duration * (0.25);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
  }
  
  if ((SubDay == "we") || (SubDay == "We"));
  {
    cout << "\nCall on Wednesday \n";
    
    if ((hour >= 8)&&(hour <= 18))
    {
        cout << "$0.40c/min\n";
        cost = duration * (0.40);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
    
    if ((hour < 8)||(hour > 18))
    {
        cout << "$0.25c/min\n";
        cost = duration * (0.25);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
  }
  
  if ((SubDay == "th") || (SubDay == "Th"));
  {
    cout << "\nCall on Thursday \n";
    
    if ((hour >= 8)&&(hour <= 18))
    {
        cout << "$0.40c/min\n";
        cost = duration * (0.40);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
    
    if ((hour < 8)||(hour > 18))
    {
        cout << "$0.25c/min\n";
        cost = duration * (0.25);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
  }
  
  if ((SubDay == "fr") || (SubDay == "Fr"));
  {
    cout << "\nCall on monday \n";
    
    if ((hour >= 8)&&(hour <= 18))
    {
        cout << "$0.40c/min\n";
        cost = duration * (0.40);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
    
    if ((hour < 8)||(hour > 18))
    {
        cout << "$0.25c/min\n";
        cost = duration * (0.25);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
  }
  
  if (((SubDay == "sa") || (SubDay == "Sa"))||((SubDay == "su") || (SubDay == "Su")));
  {
    cout << "\nCall on saturday or sunday \n";
    
    if ((hour >= 8)&&(hour <= 18))
    {
        cout << "$0.15c/min\n";
        cost = duration * (0.15);
        cout << "$" << fixed << setprecision (2) << cost << ".\n";
    }
  }
  
  cout << "cost is $" << cost << endl;

  //cout << "First two letters of day = " << SubDay << endl << endl;

  return 0;
}
