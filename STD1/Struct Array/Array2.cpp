// array of structures
#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;
struct tournament_t {
 
string title;
int year;
}
tournament [3];
void printtournament (tournament_t tournament);
int main ()
{

string mystr;
int n;
for (n=0; n<3; n++)  {
 cout << "Enter title: ";
 getline (cin,tournament[n].title);
 cout << "Enter year: ";
 getline (cin,mystr);
 stringstream(mystr) >> tournament[n].year;
 
 }
cout << "\nYou have entered these tournament:\n";
for (n=0; n<3; n++)
printtournament (tournament[n]);
return 0;

}

void printtournament (tournament_t tournament)

{
 
 cout << tournament.title;
 
 cout << " (" << tournament.year << ")\n";
 
}
