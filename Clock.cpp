class Clock {
};

int main() {
  Clock ck;
  ck.tick;
  ck.show();
  ck.adjust(16,45,00);
  ck.show();
  return 0;
}

#include<iostream>

#include<ctime>

#include<windows.h>

using namespace std;

class Clock

{

    private:

        int H,M,S;

    public:

        void SetTime(int h,int m,int s)

        {

            H=(h>=0&&h<24)?h:0;

            M=(m>=0&&m<60)?m:0;

            S=(s>=0&&s<60)?s:0;

        }

        Clock(int h=0,int m=0,int s=0)//结构函数

        {

            H=(h>=0&&h<24)?h:0;

            M=(m>=0&&m<60)?m:0;

            S=(s>=0&&s<60)?s:0;

        }

        void ShowTime()

        {

            cout<<H<<":"<<M<<":"<<S<<endl;

        }

        void run(int s)

        {

            int k(0),t;

            SYSTEMTIME sys;

            GetLocalTime(&sys);//获取机器时间秒s数

            t=sys.wSecond;

            while(k<s)

            {

                GetLocalTime(&sys);

                if(sys.wSecond!=t)

                {

                    t=sys.wSecond;

                    ShowTime();

                    S++;

                    k++;

                    if(S>=60)

                    {

                        M++;

                        k=0;

                        S=0;

                        if(M>=60)

                        {

                            M=0;

                            H++;

                            if(H>=24)

                            {

                                H=0;

                            }

                        }

                    }

                }

            }

        }

 

};

int main()

{

    Clock MyClock(10,50,50);

    MyClock.ShowTime();

    MyClock.SetTime(8,30,30);

    MyClock.run(60);

    return 0;

}
