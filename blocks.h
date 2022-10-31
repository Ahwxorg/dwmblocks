//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
  {" ", "/home/ah/.local/bin/mem", 6, 3 },
	{" ", "/home/ah/.local/bin/temp", 6, 3 },
	{" ", "/home/ah/.local/bin/volume",			 0,		          15},

	{" ", "/home/ah/.local/bin/battery",      20,            10},

/*	{" ", "echo -e $(date +\"%a, %B %d %l:%M%p\"| sed 's/  / /g')",			   60,		          0},*/
  {" ", "/usr/local/bin/clock", 1, 3},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
