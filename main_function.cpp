// cprogrammingbook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include "ch2.h"
#include "ch3.h"
#include "ch4.h"
#include "getnum.h"

int main()
{
    int chapter_num = 1;
    printf("choose a chapter to run\n");
    scanf("%d", &chapter_num);
    getchar();
    switch (chapter_num);
    if (chapter_num == 2)
    {
        int project_num = 0;
        printf("which project would you like to run\n");
        printf(" 1. pun\n 2. dimensional weight\n 3. Temperature conversions\n 4. Sphere area\n ");
        scanf("%d", &project_num);
        getchar();

        switch (project_num)
        {
        case 1: pun_c();
            break;
        case 2: dweight();
            break;
        case 3: tempconversions();
            break;
        case 4: spherearea();
            break;
        }
        
    }
    if (chapter_num == 3)
    {
        int project_num = 0;
        printf("whichj project would you like to run\n");
        printf("1. different formatting\n");
        project_num = getnum();
        getchar();
        switch (project_num)
        {
        case 1: printf_format();
        }

    }
    if (chapter_num == 4)
    {
        int project_num = 0;
        printf("whichj project would you like to run\n");
        printf("1. flip order of a number\n 2. Flip order of three-digit number\n ");
        project_num = getnum();
        getchar();
        switch (project_num)
        {
        case 1: reversenum();
            break;
        case 2: reversenum_3digit();
            break;
        }
        
        

    }

}
