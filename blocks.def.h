//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/			/*Update Interval*/	/*Update Signal*/
	{" ", 		"",				0,			0}, /* space between title and status monitor */
	{"Mem: ", 	"~/.config/status/getmem",	3,			0},
	{"Net: ", 	"~/.config/status/getping",	3,			0},
	{"Vol: ", 	"~/.config/status/getvol",	1,			44},
	/*{"Bat: ", 	"~/.config/status/getbat",	5,			0},*/
	{"Date: ", 	"~/.config/status/getdt",	10,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
