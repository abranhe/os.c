#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "os.h"

static int assertionCount = 0;
static int errorCount = 0;

// Should return something
static void
test_funcionality()
{
	const char *os = operating_system();
	printf("  Your operating system is: %s\n\n", os);

	if (strlen(os) <= 0)
	{
		errorCount++;

	  fprintf(stderr, "\033[31m");
	  fprintf(stderr,"  (✖) Error, should display the operating system.");
	  fprintf(stderr, "\n\033[0m");
	  fprintf(stderr, "\n");
  } else
  {
    printf("\033[32m  (✓) Test passed\033[0m\n");
  }
  assertionCount++;
}

int
main()
{
	// If it has an output it should work :(
	test_funcionality();

  // Log total errors.
  printf("\n");

  if (errorCount != 0) {
    printf("\033[31m");
    printf("(✖) Failed on %d of %d assertions", errorCount, assertionCount);
    printf("\033[0m");
    printf("\n");
    exit(EXIT_FAILURE);
  }

  // Or, log total successes.
  printf("\033[32m");
  printf("(✓) Passed %d assertions without errors", assertionCount);
  printf("\033[0m");
  printf("\n");

  return 0;
}
