#ifndef TDate_h
    #define TDate_h TDate_h

    class TDate{
    private:
        int days;
        int months;
        int year;
        time_t now;


    public:
       void setDays(int d);
       void setMonths(int m);
       void setYears(int y);

       int getDays();
       int getMonths();
       int getYears();

       TDate();
       TDate(int days, int months, int yaer);

       void print();



    };
#endif
