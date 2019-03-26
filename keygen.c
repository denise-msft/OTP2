// This program creates a key file of specified length.
//The characters in the file generated will be any of the 27 allowed characters, generated using the standard UNIX randomization methods.
int main(int argc, char *argv[])
{
	if (argc < 2)
		printf("Not enough arguments, hippie");
}
//Do not create spaces every five characters, as has been historically done.
// Note that you specifically do not have to do any fancy random number generation : we’re not looking for cryptographically secure random number generation!rand() is just fine.
//The last character keygen outputs should be a newline.All error text must be output to stderr, if any.
//The syntax for keygen is as follows :
//keygen keylength
//Where keylength is the length of the key file in characters.keygen outputs to stdout.Here is an example run, which redirects stdout to a key file of 256 characters called “mykey”(note that mykey is 257 characters long because of the newline) :
//$ keygen 256 > mykey
