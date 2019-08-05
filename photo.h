//----------------------------------------------------------------
// STRUCT Photo
//----------------------------------------------------------------
typedef struct Photo
{
	char* Title;
	char* Description;
	void (*print)(struct Photo*);
}Photo;

//----------------------------------------------------------------
// FUNCTION PROTOTYPES
//----------------------------------------------------------------
void new_photo(Photo* photo, char* Title, char* Description);
void print_photo(struct Photo* photo);
