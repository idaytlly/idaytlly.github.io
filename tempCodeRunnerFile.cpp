#include <iostream>
using  namespace std;

int main(){
const int NUM_COUNTRY = 4;
const int NUM_MEDALS = 3;
int highest = medals [0][0];
int lowest = medals [0][0];
int total, totalbronze;
int medals [NUM_COUNTRY] [NUM_MEDALS] =
{  {129, 257, 590},
    {120, 279, 396},
    {115, 290, 123},
    {98, 209, 112},
};

for (int row = 0; row < NUM_COUNTRY; row++)
{
    for (int col = 0 ; col < NUM_MEDALS; col++){
    if (row == 2)
    total += medals[row][col];
    }
    for (int col = 1; col < NUM_MEDALS; col++){
    if (medals [row][col] > highest)
        highest = medals [row][col];
    }
    for (int col = 1; col < NUM_MEDALS; col++){
    if  (medals [row][col] < lowest)
        lowest = medals [row][col];
    }
    for (int col = 0; col < NUM_MEDALS; col++ ){
    totalbronze = medals [row][3];
    } 
}
cout << "Number of medals won by country 3 is " << total << endl;
cout << "The highest number of medals won is " << highest << endl;
cout << "The lowest number of medals won is " << lowest << endl;
cout << "The total number of bronze medal won is " << totalbronze << endl;

return 0;
}