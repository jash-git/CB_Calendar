#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,m,n,q;
    int year, month, first_space, feb_days;

    printf("�п�J�褸");
    scanf("%d",&year);

    printf("�п�J���");
    scanf("%d",&month);


    if(month<=12 && month>=1)
    {
        for(first_space=1,q=0;q<(year-1900);q++)
        {
            if(q%4==0 && q%100!=0 || q%400==100)
            {
                 first_space=(first_space+366)%7;
            }
            else
            {
                first_space=(first_space+365)%7;
            }
        }

        //�p��2��Ѽ�
        if(year%4==0 && year%100!=0 || year%400==0)
        {
            feb_days =29;
        }
        else
        {
            feb_days =28;
        }



        int space[13]={0,first_space,0,0,0,0,0,0,0,0,0,0,0};
        int days[13]={0,31,feb_days,31,30,31,30,31,31,30,31,30,31};



        for(i=1;i<month;i++)
        {
            space[i+1]=(space[i]+days[i])%7;
        }



        printf("             %d�~%d��\n\n",year,month);
        printf("     ��  �@  �G  �T  �|  ��  �� \n   ");
        for(m=1;m<=space[i];m++)
        {
            printf("    ");
        }

        for(n=1;n<=days[i];n++)
        {
            printf(" %3d",n);

            if(n%7==(7-space[i])%7)
            {
                printf("\n   ");
            }
        }

        printf("\n");
     }
     system("pause");
     return 0;

}
