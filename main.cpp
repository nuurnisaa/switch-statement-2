#include <iostream>

using namespace std;


string dayweek (int daynum){
string dayname;

 switch (daynum){
     case 0:
     dayname="Sunday";
    break;
     case 1:
     dayname="Monday";
    break;
     case 2:
     dayname="Tuesday";
    break;
     case 3:
     dayname="Wednesday";
    break;
     case 4:
     dayname="Thursday";
    break;
     case 5:
     dayname="Friday";
    break;
     case 6:
     dayname="Saturday";
    break;
     default:
        dayname="Invalid";

     }
     return dayname;
}
     int main()
     {
         cout<<dayweek(8);
     return 0;
}

