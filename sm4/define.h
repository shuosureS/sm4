#pragma once
#include<iostream>
#define u8 unsigned char
#define u32 unsigned long
void encryptSM4(u32 X[], u32 RK[], u32 Y[]);
u32 functionB(u32 b); // 查S盒的函数B 
u32 loopLeft(u32 a, short length); // 循环左移函数 
u32 functionL1(u32 a); // 线性变换L
u32 functionL2(u32 a); // 线性变换L'
u32 functionT(u32 a, short mode); // 合成变换T
void extendFirst(u32 MK[], u32 K[]); // 密钥扩展算法第一步
void extendSecond(u32 RK[], u32 K[]); // 密钥扩展算法第二步
void getRK(u32 MK[], u32 K[], u32 RK[]); // 轮密钥获取算法
void iterate32(u32 X[4], u32 RK[]); // 迭代算法
void reverse(u32 X[], u32 Y[]); // 反转函数 
void runtest(u32 X[4],u32 MK[4]);
