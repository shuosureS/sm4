#pragma once
#include<iostream>
#define u8 unsigned char
#define u32 unsigned long
void encryptSM4(u32 X[], u32 RK[], u32 Y[]);
u32 functionB(u32 b); // ��S�еĺ���B 
u32 loopLeft(u32 a, short length); // ѭ�����ƺ��� 
u32 functionL1(u32 a); // ���Ա任L
u32 functionL2(u32 a); // ���Ա任L'
u32 functionT(u32 a, short mode); // �ϳɱ任T
void extendFirst(u32 MK[], u32 K[]); // ��Կ��չ�㷨��һ��
void extendSecond(u32 RK[], u32 K[]); // ��Կ��չ�㷨�ڶ���
void getRK(u32 MK[], u32 K[], u32 RK[]); // ����Կ��ȡ�㷨
void iterate32(u32 X[4], u32 RK[]); // �����㷨
void reverse(u32 X[], u32 Y[]); // ��ת���� 
void runtest(u32 X[4],u32 MK[4]);
