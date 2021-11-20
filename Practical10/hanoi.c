#include<stdio.h>
#include<stdlib.h>

// Problem definition
// ROD 1 = A
// ROD 2 = B
// ROD 3 = C

// n disks = 2

// Disk 1 from A to B
// Disk 2 form A      to C
// Disk 3 from      B to C

// - Shift 'n-1' disks from Source (A) to Middle (B)
// - Shift one disk from Source (A) to Destination (C)
// - Shift 'n-1' disks from Middle(B) to Destination (C)

// These steps will keep on repeating so we need to use a recursive function

 void hanoi(int n, int source, int dest, int midd) {
 // We set that when n=1 the rodis moved from sourse A to C
     if (n == 1) {
       printf("Moved disk %d from rod %d to rod %d\n", n, source, dest);
      }
 // When n=!1 the rod is moved from the source A to B
      else{
        hanoi(n-1, source, midd, dest);
        printf("Moved disk %d from rod %d to rod %d\n", n, source, dest);
        hanoi(n-1, midd, dest, source);
     }
   }
//set the main function
void main () {

  int h;
    printf("Enter number of disks: \n");
    scanf("%d", &h);
    printf("Tower of Hanoi solution for %d disks:\n", h);
// As we defined before, 1 is the source, 3 is the destination and 2 is the middle rod

  hanoi(h, 1, 3, 2);
}

