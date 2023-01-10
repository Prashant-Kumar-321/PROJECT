 // sleep()function... mentioned in <windows.h>

 #include<stdio.h>
 #include<windows.h> // Implementing sleep() function in program ;
 #include<unistd.h>  // Implementing sleep() function in program ;

 int main()
 {
   int i;
   for(i=0; i<11; i++)
   {
     printf("   i = %d",i);
     sleep(1);
     system("cls");
   }

   // Demonstrate sleep function in c to sleep
   // program for 10 second

   printf("\n\nThe line of code Executed Before 10 second \n\n");
   printf("  Program went in sleep Mode for 10 second \n");

   sleep(10); // requesting cpu to sleep program for 10 second

   printf("\nThis line will be executed after 10 second \n");

   return 0;
 }
