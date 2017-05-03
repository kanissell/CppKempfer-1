
#ifndef TTime_h
    #define TTime_h TTime__h
    #include <ctime>
class  TTime{

    private:
        int secs;
        int minutes;
        int hour;
        time_t now;
        //std::string myTime;


    public:
       void setSecs(int s);
       void setMinutus(int m);
       void setHour(int h);

       int getSecs();
       int getMinutes();
       int getHour();

        TTime();
        TTime(int hour, int minutes);
        TTime(int hour, int minutes, int secs);

       void print();


    };

#endif
