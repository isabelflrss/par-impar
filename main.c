/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Hector
 *
 * Created on 31 de agosto de 2018, 08:25 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int num;
    scanf("%d",&num);
    if(num%2==0){
        printf("par");
    }else {
        printf("impar");
    }
    
    return 0;
}

