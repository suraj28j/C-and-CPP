
#include<stdio.h>
#include<conio.h>
#include<limits.h>

void main()
{
    char char_min=SCHAR_MIN; // Signed Char Min
    char char_max=SCHAR_MAX; // Signed Char Max
    char uChar_min=0; // // Unsigned Char Min
    char uChar_max=UCHAR_MAX; // Unsigned Char Max
    printf("Signed Char Negative Value = %d",char_min);
    printf("\nSigned Char Positive Value = %d",char_max);
    printf("\nUnsigned Char Min Value = %hhu",uChar_min);
    printf("\nUnsigned Char Max Value = %hhu",uChar_max);

    short int short_int_min=SHRT_MIN; // Short Int Min
    short int short_int_max=SHRT_MAX; // Short Int Max
    short int uShort_int_min=0; // Unsigned Int Min
    short int uShort_int_max=USHRT_MAX; // Unsigned Int Max
    printf("\n\nSigned Short Integer Negative Value = %hi",short_int_min);
    printf("\nSigned Short Integer Positive Value = %hi",short_int_max);
    printf("\nUnsigned Short Integer Min Value = %hu",uShort_int_min);
    printf("\nUnsigned Short Integer Max Value = %hu",uShort_int_max);

    int int_min=INT_MIN;
    int int_max=INT_MAX;
    int uInt_min=0;
    int uInt_max=UINT_MAX;
    printf("\n\nSigned Integer Negative Value = %d",int_min);
    printf("\nSigned Integer Positive Value = %d",int_max);
    printf("\nUnsigned Integer Min Value = %u",uInt_min);
    printf("\nUnsigned Integer Max Value = %u",uInt_max);

    long int long_int_min=LONG_MIN;
    long int long_int_max=LONG_MAX;
    long int uLong_int_min=0;
    long int uLong_int_max=ULONG_MAX;
    printf("\n\nLong Signed Integer Negative Value = %li",long_int_min);
    printf("\nLong Signed Integer Positive Value = %li",long_int_max);
    printf("\nLong Unsigned Integer Min Value = %lu",uLong_int_min);
    printf("\nLong Unsigned Integer Max Value = %lu",uLong_int_max);

    long long int LL_int_min=LONG_LONG_MIN;
    long long int LL_int_max=LONG_LONG_MAX;
    long long int uLL_int_min=0;
    long long int uLL_int_max=ULONG_LONG_MAX;
    printf("\n\nLong Long Signed Integer Negative Value = %lli",LL_int_min);
    printf("\nLong Long Signed Integer Positive Value = %lli",LL_int_max);
    printf("\nLong Long Unsigned Integer Min Value = %llu",uLL_int_min);
    printf("\nLong Long Unsigned Integer Max Value = %llu",uLL_int_max);

    getch();
}
