//
// Created by user on 19.7.22.
//

#ifndef __SIMPLER_DATATYPES_H
#define __SIMPLER_DATATYPES_H

//Udáváno podle bitů

typedef signed char i8;
typedef unsigned char u8;

typedef signed short i16;
typedef unsigned short u16;

typedef signed int i32;
typedef unsigned int u32;

typedef signed long long int i64;
typedef unsigned long long int u64;

typedef float f32;
typedef double f64;
typedef long double f128;
typedef long double f80; //Hodnota se může lišit podle platformy

//Udáváno podle bytů

typedef signed char I1;
typedef unsigned char U1;

typedef signed short I2;
typedef unsigned short U2;

typedef signed int I4;
typedef unsigned int U4;

typedef signed long long int I8;
typedef unsigned long long int U8;

typedef float F4;
typedef double F8;
typedef long double F16;
typedef long double F10;

//Union 8-bytových typů

typedef union {
    I8 i;
    U8 u;
    F8 d;
    void * p;
} B8;

#endif