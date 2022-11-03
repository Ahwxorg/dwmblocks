//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
  {" ", "/home/ahwx/.local/bin/mem", 6, 3 },
	{" ", "/home/ahwx/.local/bin/wlan", 6, 3 },
	{" ", "/home/ahwx/.local/bin/volume",			 0,		          15},
	{" ", "/home/ahwx/.local/bin/battery",      20,            10},
  {" ", "/home/ahwx/.local/bin/clock", 1, 3},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
