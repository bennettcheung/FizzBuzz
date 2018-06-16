//
//  main.c
//  FizzBuzz
//
//  Created by Bennett on 2018-06-15.
//  Copyright © 2018 Bennett. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int bMultiples;
    for (int i=1; i<=100; i++)
         {
             
             bMultiples= 0;
             if (i % 3 == 0) //multiples of 3
             {
                 printf("Fizz");
                 bMultiples = 1;
             }
             if (i % 5 == 0)  //multiples of 5
             {
                 printf("Buzz");
                 bMultiples = 1;
             }
             
             if (!bMultiples)
             {
                printf("%d", i);
             }
             printf("\n");
         }
    
    return 0;
}
