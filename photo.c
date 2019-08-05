
#include<stdlib.h>
#include<stdio.h>

#include"photo.h"

//----------------------------------------------------------------
// FUNCTION print_photo
//----------------------------------------------------------------
void print_photo(struct Photo* photo)
{
	printf("Title:       %s\n", photo->Title);
	printf("Description: %s\n", photo->Description);
}

//----------------------------------------------------------------
// FUNCTION NewPhoto
//----------------------------------------------------------------
void new_photo(Photo* photo, char* Title, char* Description)
{
	// Properties
	photo->Title = Title;
	photo->Description = Description;

	// Methods
	photo->print = print_photo;
}
