#include <stdio.h>
#include <limits.h>

main()
{
	printf(" UCHAR: %d to %d\n", 0, UCHAR_MAX);
	printf(" SCHAR:%d to %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("  CHAR:%d to %d\n", CHAR_MIN, CHAR_MAX);
	printf("\n");
	printf("USHORT: %d to %d\n", 0, USHRT_MAX);
	printf("SSHORT:%d to %d\n", SHRT_MIN, SHRT_MAX);
	printf("\n");
	printf(" UINT: %d to %d\n", 0, UINT_MAX);
	printf(" SINT:%d to %d\n", INT_MIN, INT_MAX);
	printf("\n");
	printf("ULONG: %d to %d\n", 0, ULONG_MAX);
	printf("SLONG:%d to %d\n", LONG_MIN, LONG_MAX);
}