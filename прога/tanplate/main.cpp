#include <stdio.h>
#include<math.h>
#include <iostream>
#include <ctime>
using namespace std;


    int main()
   {
       srand(time(NULL));
             
       char arr[] = "HowAreYou?";
       
       int i=0;
       while (arr[i] != '\0') {
           i++;
       }
       int size = i;
       
       for (int i = 0; i<size; i++) {
           cout<< i+1<< " - "<<arr[i]<<endl;
       }
       
       char arrayrez[size];
       
       for (int i =0; i<10; i++) {
           
       }
       
       
    return 0;
};
