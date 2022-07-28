# SM4

### 刘硕-202000460043-shuosureS

## 简介

对于SM4仅使用C++实现了SM4加密，并没有进行更多的优化，使用了计算机系统原理课程实验上关于sm4的相关代码及知识

## 代码实现

```c_cpp
#define u8 unsigned char
#define u32 unsigned long
```

对于sm4中各变量的定义，使用unsigned char 和unsigned long 可以和sm4中的参数长度对应起来，并不会浪费。

```c_cpp
const u8 Sbox[256]
```

对于S盒选择使用一个大的数组来进行检索

```c_cpp
u32 loopLeft(u32 a, short length) {
	u32 temp1 = a << length;
	u32 temp2 = a >> (32 - length);
	a = temp1 + temp2;
	return a;
}
```

sm4中循环左移的实现是非常关键的一个部件，线性变换L会用到

```c_cpp
u32 functionT(u32 a, short mode) {
	u32 temp = functionB(a);
	return mode == 1 ? functionL1(temp) : functionL2(temp);
}
```

合成变换T由线性变换和非线性变换组成，起到混淆以及扩散的作用

具体代码见项目文件，这里把相对重要的部分写上。

## 结果

![Image text](https://github.com/shuosureS/sm4/blob/master/730a8186ca62b570b86618eb2c6b2c99.png)
