#include "header.h"

int CheckValues(post *newItem)
{
    // GIA TO DATE

    if ((newItem->posted.year < 0 || newItem->posted.year > 2021) && (newItem->posted.day < 0 || newItem->posted.day > 31) && (newItem->posted.month < 0 || newItem->posted.month > 12))
    {
        printf("Error! Kai h mera kai o xronos kai o mhnas pou edwses einai lathos. Ksana kane newpost!\n");
        return 1;
    }
    else if ((newItem->posted.day < 0 || newItem->posted.day > 31) && (newItem->posted.month < 0 || newItem->posted.month > 12))
    {
        printf("Error! Kai h mera kai o mhnas pou edwses einai lathos. Ksana kane newpost!\n");
        return 1;
    }
    else if ((newItem->posted.year < 0 || newItem->posted.year > 2021) && (newItem->posted.month < 0 || newItem->posted.month > 12))
    {
        printf("Error! Kai o mhnas kai o xronos pou edwses einai lathos. Ksana kane newpost!\n");
        return 1;
    }
    else if ((newItem->posted.year < 0 || newItem->posted.year > 2021) && (newItem->posted.day < 0 || newItem->posted.day > 31))
    {
        printf("Error! Kai h mera kai o xronos pou edwses einai lathos. Ksana kane newpost!\n");
        return 1;
    }
    else if (newItem->posted.day < 0 || newItem->posted.day > 31)
    {
        printf("Error! H mera pou edwses einai lathos. Ksana kane newpost!\n");
        return 1;
    }
    else if (newItem->posted.month < 0 || newItem->posted.month > 12)
    {
        printf("Error! O mhnas pou edwses einai lathos. Ksana kane newpost!\n");
        return 1;
    }
    else if (newItem->posted.year < 0 || newItem->posted.year > 2021)
    {
        printf("Error! O xronos pou edwses einai lathos. Ksana kane newpost!\n");
        return 1;
    }

    // GIA TO TIME
    
    if ((newItem->posted.hour < 0 || newItem->posted.hour > 23) && (newItem->posted.minute < 0 || newItem->posted.minute > 59) && (newItem->posted.second < 0 || newItem->posted.second > 59))
    {
        printf("Error! Kai h wra kai ta lepta kai ta deuterolepta pou edwses einai lathos. Ksana kane newpost!\n");
        return 1;
    }
    else if ((newItem->posted.hour < 0 || newItem->posted.hour > 23) && (newItem->posted.minute < 0 || newItem->posted.minute > 59) )
    {
        printf("Error! Kai h wra kai ta lepta pou edwses einai lathos. Ksana kane newpost!\n");
        return 1;
    }
    else if ((newItem->posted.minute < 0 || newItem->posted.minute > 59) && (newItem->posted.second < 0 || newItem->posted.second > 59) )
    {
        printf("Error! Kai ta lepta kai ta deuterolepta pou edwses einai lathos. Ksana kane newpost!\n");
        return 1;
    }
    else if ((newItem->posted.hour < 0 || newItem->posted.hour > 23) && (newItem->posted.second < 0 || newItem->posted.second > 59) )
    {
        printf("Error! Kai h wra kai ta deuterolepta pou edwses einai lathos. Ksana kane newpost!\n");
        return 1;
    }
    else if (newItem->posted.hour < 0 || newItem->posted.hour > 23)
    {
        printf("Error! h wra pou edwses einai lathos. Ksana kane newpost!\n");
        return 1;
    }
    else if (newItem->posted.minute < 0 || newItem->posted.minute > 59)
    {
        printf("Error! Ta lepta pou edwses einai lathos. Ksana kane newpost!\n");
        return 1;
    }
    else if (newItem->posted.second < 0 || newItem->posted.second > 59)
    {
        printf("Error! Ta deuterolepta pou edwses einai lathos. Ksana kane newpost!\n");
        return 1;
    }

    return 0;
}