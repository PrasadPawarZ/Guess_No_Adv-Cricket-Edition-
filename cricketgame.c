#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int batting(int a); 
int bowling(int b);
void userwintoss();
int finalresult(int p, int q);
void rules();

int main()
{
    int run, n, out, userno;
    char y, t, cont_game_or_no;
    int tossr, comptoswin;
    char tossresult, comptosswin;

    system("cls");
    printf("********************************************************************************\n");
    printf("*                                                                              *\n");
    printf("*              ***********************************************************     *\n");
    printf("*              *       This is a number game you might have played       *     *\n");
    printf("*              *           This game also known as hand cricket          *     *\n");
    printf("*              ***********************************************************     *\n");
    printf("*                                                                              *\n");
    printf("********************************************************************************\n");
    printf("*                                                                              *\n");
    printf("*                                                                              *\n");
    printf("*                        *****************************************             *\n");
    printf("*                        *       Enter any key  to play          *             *\n");
    printf("*                        *        'Q' to quit the game           *             *\n");
    printf("*                        *     'H' for help regarding game       *             *\n");
    printf("*                        *****************************************             *\n");
    printf("*                                                                              *\n");
    printf("*                                                                              *\n");
    printf("********************************************************************************\n");
    printf("Enter your choice : ");
    scanf("%c", &y);
    if (y == 'q' || y == 'Q')
    {
        goto exit;
    }
    else if (y == 'h' || y == 'H')
    {
        rules();
    }
    system("cls");
game:

    printf("\n      **********************************************************************\n");
    printf("      *                                                                    *\n");
    printf("      *                                                                    *\n");
    printf("      *                                WELCOME                             *\n");
    printf("      *                                                                    *\n");
    printf("      *                                                                    *\n");
    printf("      **********************************************************************\n");
    printf("      *                                                                    *\n");
    printf("      *                        Created by Prasad S. Pawar                  *\n");
    printf("      *                                                                    *\n");
    printf("      **********************************************************************\n");
    Sleep(4000);
    do
    {

        srand(time(0));
        tossr = rand() % 2 + 1;

        if (tossr == 1)
        {
            tossresult = 'h';
        }
        else
        {
            tossresult = 't';
        }
        system("cls");
        printf("**********************************************************************\n");
        printf("*                                                                    *\n");
        printf("*                       Select game type                             *\n");
        printf("*                                                                    *\n");
        printf("**********************************************************************\n");

        system("cls");
        printf("      **********************************************************************\n");
        printf("      *                                                                    *\n");
        printf("      *                           Its toss time                            *\n");
        printf("      *                                                                    *\n");
        printf("      **********************************************************************\n");
        printf("      *                                                                    *\n");
        printf("      *    Enter :                'h' for heads                            *\n");
        printf("      *                           't' for tails                            *\n");
        printf("      *                                                                    *\n");
        printf("      **********************************************************************\n");
        printf("Enter your choice : ");
        scanf("%s", &t);
        system("cls");
        if (t == tossresult)
        {
            printf("**********************************************************************\n");
            printf("*                                                                    *\n");
            printf("*                       You win the toss                             *\n");
            printf("*                                                                    *\n");
            printf("**********************************************************************\n");
            Sleep(2000);
            userwintoss();
        }
        else
        {
            printf("**********************************************************************\n");
            printf("*                                                                    *\n");
            printf("*                       You loss the toss                            *\n");
            printf("*                                                                    *\n");
            printf("**********************************************************************\n");
            Sleep(2000);
            srand(time(0));
            comptoswin = rand() % 2 + 1;
            if (comptoswin == 1)
            {
                printf("**********************************************************************\n");
                printf("*                                                                    *\n");
                printf("*                  Computer choose to Bat First                      *\n");
                printf("*                                                                    *\n");
                printf("**********************************************************************\n");
                batting(2);
            }
            else
            {
                printf("**********************************************************************\n");
                printf("*                                                                    *\n");
                printf("*                 Computer choose to ball First                      *\n");
                printf("*                                                                    *\n");
                printf("**********************************************************************\n");
                bowling(2);
            }
        }
        printf("\nWant to play again ? (y/n) \n");
        scanf("%c", &cont_game_or_no);
    } while (cont_game_or_no != 'n' || cont_game_or_no != 'N');
exit:
    return 0;
}

void userwintoss()
{
    char x;
    printf("**********************************************************************\n");
    printf("*                                                                    *\n");
    printf("*              Enter b to bat or any other key to bowl               *\n");
    printf("*                                                                    *\n");
    printf("**********************************************************************\n");
    printf("Enter your choice : ");
    scanf("%s", &x);
    if (x == 'b' || x == 'B')
    {
        batting(1);
    }
    else
    {
        bowling(1);
    }
}

int batting(int a)
{
    int f = 0;
    int i, j, r = 0, z = 0, b = 0, c = 0;
    int computerno;
    int computerno1;
    if (a == 1)
    {

        while (f != 2)
        {
            while (f != 1)
            {

                while (i != computerno)
                {
                    system("cls");
                    srand(time(0));
                    computerno = rand() % 10 + 1;
                    printf("Enter your number : ");
                    scanf("%d", &i);
                    r = r + i;
                    b++;
                    if (i < 1 || i > 10)
                    {
                        printf("You are banned for restricting rules\n");
                        goto banned;
                    }
                    printf("**********************************************************************\n");
                    printf("*   Your no   *   Computer no   *   Total run   *   No. of balls     *\n");
                    printf("*      %2d     *       %2d        *      %3d      *     %2d             *\n", i, computerno, r, b);
                    printf("**********************************************************************\n");
                }
                r = r - i;
                printf("**********************************************************************\n");
                printf("*                        Thats out!                                  *\n");
                printf("**********************************************************************\n");
                printf("*                   Starting 2nd inning                              *\n");
                printf("           Total run you made %d in %d balls                         *\n", r, b);
                printf("**********************************************************************\n");
                f++;
            }
            while (f != 2)
            {
                printf("Now Computers batting and your bowling\n");
                while (j != computerno1)
                {
                    srand(time(0));
                    computerno1 = rand() % 10 + 1;
                    printf("Enter your number\n");
                    scanf("%d", &j);
                    z = z + computerno1;
                    c++;
                    if (j < 1 || j > 10)
                    {
                        printf("You are banned for restricting rules\n");
                        goto banned;
                    }
                    printf("**********************************************************************\n");
                    printf("*   Your no  *  Computer no  * Computer Total run  *  No. of balls   *\n");
                    printf("*      %2d    *       %2d      *      %3d            *        %2d       *\n", j, computerno1, z, c);
                    printf("**********************************************************************\n");

                    if (z > r)
                    {
                        break;
                    }
                    else if (j == computerno1)
                    {
                        z = z - computerno1;
                        printf("\n\n\n\n\n\nThats out!\n");
                    }
                }
                printf("\n\n\n\n\n\nTotal run computer made %d in %d balls \n", z, c);

                f++;
            }
        }
        finalresult(r, z);
    }
    else
    {
        while (f != 2)
        {
            while (f != 1)
            {

                while (i != computerno)
                {
                    srand(time(0));
                    computerno = rand() % 10 + 1;
                    printf("Enter your no\n");
                    scanf("%d", &i);
                    z = z + computerno;
                    c++;
                    if (i < 1 || i > 10)
                    {
                        printf("You are banned for restricting rules\n");
                        goto banned;
                    }
                    printf("**********************************************************************\n");
                    printf("*   Your no  *  Computer no  * Computer Total run  *  No. of balls   *\n");
                    printf("*      %2d    *       %2d      *      %3d            *        %2d       *\n", i, computerno, z, c);
                    printf("**********************************************************************\n");
                }
                z = z - computerno;
                printf("\n\n\n\n\nThats out!\n");
                printf("\n\n\n\n\n\nStarting 2nd inning \n");
                printf("\n\n\n\n\n\nTotal run computer made %d in %d balls \n", z, c);
                f++;
            }
            while (f != 2)
            {
                printf("\nNow Your batting and computers bowling\n");
                while (j != computerno1)
                {
                    srand(time(0));
                    computerno1 = rand() % 10 + 1;
                    printf("Enter your no\n");
                    scanf("%d", &j);
                    r = r + j;
                    b++;
                    if (j < 1 || j > 10)
                    {
                        printf("You are banned for restricting rules\n");
                        goto banned;
                    }
                    printf("**********************************************************************\n");
                    printf("*   Your no   *   Computer no   *   Total run   *   No. of balls     *\n");
                    printf("*      %2d     *       %2d        *      %3d      *     %2d             *\n", j, computerno1, r, b);
                    printf("**********************************************************************\n");
                    if (r > z)
                    {
                        break;
                    }
                    else if (j == computerno1)
                    {
                        r = r - j;
                        printf("\n\n\n\n\n\nThats out!\n");
                    }
                }
                printf("\n\n\n\n\n\nTotal run you made %d in %d balls \n", r, b);

                f++;
            }
        }
        finalresult(r, z);
    }
banned:
    return 0;
}

int bowling(int a)
{
    int f = 0;
    int i, j, r = 0, z = 0, b = 0, c = 0;
    int computerno;
    int computerno1;
    if (a == 1)
    {

        while (f != 2)
        {
            while (f != 1)
            {

                while (i != computerno)
                {
                    srand(time(0));
                    computerno = rand() % 10 + 1;
                    printf("Enter your no\n");
                    scanf("%d", &i);
                    z = z + computerno;
                    c++;
                    if (i < 1 || i > 10)
                    {
                        printf("You are banned for restricting rules\n");
                        goto banned;
                    }
                    printf("**********************************************************************\n");
                    printf("*   Your no  *  Computer no  * Computer Total run  *  No. of balls   *\n");
                    printf("*      %2d    *       %2d      *      %3d            *        %2d       *\n", i, computerno, z, c);
                    printf("**********************************************************************\n");
                }
                z = z - computerno;
                printf("\n\n\n\n\nThats out!\n");
                printf("\n\n\n\n\n\nStarting 2nd inning \n");
                printf("\n\n\n\n\n\nTotal run computer made %d in %d balls \n", z, c);
                f++;
            }
            while (f != 2)
            {
                printf("Now Your batting and Computers bowling\n");
                while (j != computerno1)
                {
                    srand(time(0));
                    computerno1 = rand() % 10 + 1;
                    printf("Enter your no\n");
                    scanf("%d", &j);
                    r = r + j;
                    b++;
                    if (i < 1 || i > 10)
                    {
                        printf("You are banned for restricting rules\n");
                        goto banned;
                    }
                    printf("**********************************************************************\n");
                    printf("*   Your no   *   Computer no   *   Total run   *   No. of balls     *\n");
                    printf("*      %2d     *       %2d        *      %3d      *     %2d             *\n", j, computerno1, r, b);
                    printf("**********************************************************************\n");
                    if (r > z)
                    {
                        break;
                    }
                    else if (j == computerno1)
                    {
                        r =r - j;
                        printf("\n\n\n\n\nThats out!\n");
                    }
                }
                printf("\n\n\n\n\n\nTotal run you made %d in %d balls \n", r, b);

                f++;
            }
        }
        finalresult(r, z);
    }
    else
    {
        while (f != 2)
        {
            while (f != 1)
            {

                while (i != computerno)
                {
                    srand(time(0));
                    computerno = rand() % 10 + 1;
                    printf("Enter your no\n");
                    scanf("%d", &i);
                    r = r + computerno;
                    b++;
                    if (i < 1 || i > 10)
                    {
                        printf("You are banned for restricting rules\n");
                        goto banned;
                    }
                    printf("**********************************************************************\n");
                    printf("*   Your no   *   Computer no   *   Total run   *   No. of balls     *\n");
                    printf("*      %2d     *       %2d        *      %3d      *     %2d             *\n", i, computerno, r, b);
                    printf("**********************************************************************\n");
                }
                r = r - computerno;
                printf("\n\n\n\n\nThats out!\n");
                printf("\n\n\n\n\n\nStarting 2nd inning \n");
                printf("\n\n\n\n\n\nTotal run you made %d in %d balls \n", r, b);
                f++;
            }
            while (f != 2)
            {
                printf("\nNow Computers batting and your bowling\n");
                while (j != computerno1)
                {
                    srand(time(0));
                    computerno1 = rand() % 10 + 1;
                    printf("Enter your no\n");
                    scanf("%d", &j);
                    z = z + computerno1;
                    c++;
                    if (i < 1 || i > 10)
                    {
                        printf("You are banned for restricting rules\n");
                        goto banned;
                    }
                    printf("**********************************************************************\n");
                    printf("*   Your no  *  Computer no  * Computer Total run  *  No. of balls   *\n");
                    printf("*      %2d    *       %2d      *      %3d            *        %2d       *\n", j, computerno1, z, c);
                    printf("**********************************************************************\n");
                    if (r < z)
                    {
                        break;
                    }
                    else if (j == computerno1)
                    {
                        z = z - computerno1;
                        printf("\n\n\n\n\nThats out!\n");
                    }
                }
                printf("\n\n\n\n\n\nTotal run computer made %d in %d balls \n", z, c);

                f++;
            }
        }
        finalresult(r, z);
    }
banned:
    return 0;
}

int finalresult(int p, int q)
{
    int o, u;
    int f = 0;
    int i, j, r = 0, z = 0, b = 0, c = 0;
    int computerno;
    int computerno1;
    o = 1;
    u = 1;
    if (p > q)
    {
        printf("\n\n\n\n\n\n\n\n**********************************************************************\n");
        printf("*           Your score             *        Computer score           *\n");
        printf("*              %3d                 *               %3d               *\n", p, q);
        printf("**********************************************************************\n");
        printf("\n\n\nCongrats! you win the game.");
    }
    else if (p == q)
    {
        printf("\n\n\nThe match has tied\n");
        printf("\n\n\n\n\nNow its time for super over\n");
        printf("First your batting and then computer\n");

        while (f != 2)
        {
            while (f != 1)
            {

                while (u != 6)
                {
                    srand(time(0));
                    computerno = rand() % 10 + 1;
                    printf("Enter your number : ");
                    scanf("%d", &i);
                    r = r + i;
                    b++;
                    if (i < 1 || i > 10)
                    {
                        printf("You are banned for restricting rules\n");
                        goto banned;
                    }

                    printf("**********************************************************************\n");
                    printf("*   Your no   *   Computer no   *   Total run   *   No. of balls     *\n");
                    printf("*      %2d     *       %2d        *      %3d      *     %2d             *\n", i, computerno, r, b);
                    printf("**********************************************************************\n");
                    if (i == computerno)
                    {
                        printf("\n\n\n\n\n\nThats out!\n");
                        break;
                    }
                }
                printf("\n\n\n\n\n\n\nStarting 2nd inning \n");
                printf("\n\n\n\n\n\nTotal run you made %d in %d balls \n", r, b);
                f++;
            }
            while (f != 2)
            {
                printf("Now Computers batting and your bowling\n");
                while (o != 6)
                {
                    srand(time(0));
                    computerno1 = rand() % 10 + 1;
                    printf("Enter your number : ");
                    scanf("%d", &j);
                    z = z + computerno1;
                    c++;
                    if (i < 1 || i > 10)
                    {
                        printf("You are banned for restricting rules\n");
                        goto banned;
                    }
                    printf("**********************************************************************\n");
                    printf("*   Your no  *  Computer no  * Computer Total run  *  No. of balls   *\n");
                    printf("*      %2d    *       %2d      *      %3d            *        %2d       *\n", j, computerno1, z, c);
                    printf("**********************************************************************\n");

                    if (z > r)
                    {
                        break;
                    }
                    else if (j == computerno1)
                    {
                        printf("\n\n\n\n\n\nThats out!\n");
                        break;
                    }
                }
                printf("\n\n\n\n\n\nTotal run computer made %d in %d balls \n", z, c);
                f++;
            }
        }
        finalresult(r, z);
    }
    else
    {
        printf("\n\n\n\n\n\n\n\n**********************************************************************\n");
        printf("*           Your score             *        Computer score           *\n");
        printf("*              %3d                 *               %3d               *\n", p, q);
        printf("**********************************************************************\n");
        printf("\n\n\nYou lost the game");
    }
banned:
    return 0;
}

void rules()
{
    int a = 0;
    printf("******************************How to play*****************************\n");
    printf("* 1 *  Its easy number game                                          *\n");
    printf("* 2 *  Plz remember do not enter any alphabet while batting or       *\n");
    printf("*   *  bowling                                                       *\n");
    printf("* 3 *  Enter numbers between 1 to 10,if any other number entered     *\n");
    printf("*   *  you will loss match for restricting ruleyou will loss match   *\n");
    printf("*   *  for restricting rule                                          *\n");
    printf("* 4 *  First there is toss if you win you can choose to bat or bowl  *\n");
    printf("* 5 *  If you loose toss computer will choose to bat or bowl         *\n");
    printf("* 6 *  It dosen't matter what you are doing bat or bowl              *\n");
    printf("* 7 *  If you are batting and computer and  number you enter         *\n");
    printf("*   *  matched you are out                                           *\n");
    printf("* 8 *  Same while bowling if your number and computer number         *\n");
    printf("*   *  matched then computer is out                                  *\n");
    printf("* 9 *  Even when you are out , runs will add                         *\n");
    printf("*10 *  You and Computer only have one wicket                         *\n");
    printf("**********************************************************************\n");

    printf("\nEnter 0 to play game :");
    scanf("%d", &a);
}