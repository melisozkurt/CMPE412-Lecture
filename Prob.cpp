#include <iostream>
#include <queue>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {


    const int apartmentCapacity = 365; 
    priority_queue<int, vector<int>, greater<int>> birthdays; 

    int daysCount = 1; 
    bool isBirthdayFound = false; 

    int newBirthday;

    while (!isBirthdayFound) {
        newBirthday = rand() % apartmentCapacity + 1; 
        cout << daysCount<<"- bday: "<< newBirthday <<"-" ;
        

      if(!birthdays.empty() && newBirthday == birthdays.top() ) {
            if(newBirthday < daysCount || birthdays.top()<daysCount) {
                if(newBirthday < daysCount){
                  newBirthday += 365; 
                  cout << "Double birthdays are celebrated on the " << newBirthday << ". day." << endl;
                  isBirthdayFound = true;                 
                }else if (birthdays.top()<daysCount) {
                  int a = birthdays.top();
                  a=a+365;
                  cout << "Double birthdays are celebrated on the " << a << ". day." << endl;
                  isBirthdayFound = true;  
                }
            }else{
              cout << "Double birthdays are celebrated on the " << daysCount << ". day." << endl;
              isBirthdayFound = true;
            }
        }else {
          
          birthdays.push(newBirthday);
      }
        cout << birthdays.top() <<endl;
        daysCount++; 
    }

    cout << "Number of people attending the building: " << daysCount << endl; 

    return 0;
}
