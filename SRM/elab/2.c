// Problem Description:

//  A passenger's journey on a train from Chennai to Delhi experienced a delay upon arrival. Given the total delay time in minutes, determine the exact delay in terms of hours and minutes.


#include <stdio.h>
int main()
{
    int tot_mins, hrs, mins; 
#define MINaHOUR 60
    scanf("%d", &tot_mins);
    if (!(0 <= tot_mins && tot_mins <= 550)) {
        printf("Invalid input");
    } else {
        hrs = (tot_mins / MINaHOUR);
        mins = (tot_mins % MINaHOUR);
        printf("%d Hours and %d Minutes", hrs, mins);
	}
	return 0;
}