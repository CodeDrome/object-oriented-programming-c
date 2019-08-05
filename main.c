
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<locale.h>
#include<stdlib.h>

#include"photo.h"

//--------------------------------------------------------
// FUNCTION main
//--------------------------------------------------------
int main(int argc, char* argv[])
{
    puts("------------------------------------");
    puts("| codedrome.com                    |");
    puts("| Object Oriented Programming in C |");
    puts("------------------------------------\n");

    Photo p1;
	new_photo(&p1, "Thing", "Photograph of a thing");
	p1.print(&p1);

	Photo p2;
	new_photo(&p2, "Another Thing", "Photograph of another thing");
	p2.print(&p2);

	Photo p3;
	new_photo(&p3, "Yet Another Thing", "Photograph of yet another thing");
	p3.print(&p3);

    return EXIT_SUCCESS;
}
