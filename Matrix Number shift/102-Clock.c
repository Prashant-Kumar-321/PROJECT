 // sleep()function... mentioned in <windows.h>
 #include<stdio.h>
 #include<windows.h> // Implementing sleep() function in program ;
 #include<unistd.h>

 int main()
 {
   int i;
   for(i=0; i<14; i++)
   {
     printf("      \ri = %d",i);
     sleep(1);
   }

   return 0;
 }
