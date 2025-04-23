/* next_arrival.c */

int is_leap(int year)
{
    /* A leap year if divisible by 400, or divisible by 4 but not by 100 */
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

int day_of_year(int year, int month, int day)
{
    int mdays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, total = 0;
    
    if(is_leap(year))
        mdays[1] = 29;  /* February has 29 days in a leap year */
    
    for(i = 0; i < month - 1; i++)
    {
        total += mdays[i];
    }
    total += day;
    
    return total;
}

int next_arrival(int year, int month, int day)
{
    int target_year, target_month = 12, target_day = 6;
    
    /* Determine if the next visit is in the current year or the next */
    if(month < 12 || (month == 12 && day <= 6))
        target_year = year;
    else
        target_year = year + 1;
    
    if(target_year == year)
    {
        /* Both dates in the same year */
        return day_of_year(year, target_month, target_day) - day_of_year(year, month, day);
    }
    else
    {
        /* Compute remaining days in the current year */
        int total_days_this_year = is_leap(year) ? 366 : 365;
        int days_remaining = total_days_this_year - day_of_year(year, month, day);
        
        /* And days from the beginning of target_year to December 6th */
        int days_in_target_year = day_of_year(target_year, target_month, target_day);
        return days_remaining + days_in_target_year;
    }
}
