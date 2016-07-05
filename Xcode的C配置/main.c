//
//  main.c
//  peizhi
//
//  Created by qingyun on 16/7/4.
//  Copyright © 2016年 张小东. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    system("rm -rf ~/Library/Developer/Xcode/UserData/CodeSnippets");
    //将本文件位置拷贝出来
    //获取文件夹路径拼接成拷贝文件夹路径
    int deLen = strlen("peizhi");
    unsigned long sourceLen = strlen(argv[0]);
    char *path = malloc(1000);
    strncpy(path, argv[0],sourceLen - deLen);
    strcat(path, "CodeSnippets");
    char *s = malloc(1000);
    char *cp2 = " ~/Library/Developer/Xcode/UserData";
    strcat(s, "cp -r ");
    strcat(s, path);
    strcat(s, cp2);
    system(s);
    printf("Done\n");
    return 0;
}