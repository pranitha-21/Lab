#include<stdio.h>
int main()
{
   int sec=31558150,days,hours,mins;
   days=sec/86400;
   hours=(sec-(86400*days))/3600;
   mins=(sec-(86400*days)-(3600*hours))/60;
   printf("days:hours:mins-%d:%d:%d");
}
