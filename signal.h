#ifndef XV6_SIGNAL
#define XV6_SIGNAL

#define SIGKILL	0
#define SIGFPE	1

// BEGIN CHANGES
#define SIGSEGV 14
// END CHANGES



// BEGIN CHANGES
typedef struct 
{
	uint addr;
	uint type;
} siginfo_t;
// END CHANGES

//typedef void (*sighandler_t)(int);
typedef void (*sighandler_t)(int, siginfo_t);


#endif
