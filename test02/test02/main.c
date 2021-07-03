//  main.c
//  test02
//  Created by 莫洪恩 on 2021/6/30.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int test(int a, int b) {
    return a + b;
}

// 当我们将1个程序交给CPU去执行的时候, CPU只会执行程序中main函数中的代码
// 一个标准的C程序中有且必须只能有一个main函数
// 我们写的代码如果想要被CPU执行, 必须写在main函数中
int main(int argc, const char * argv[]) {
//    const int a = 10; // 整型
//    char x[7] = "wocao"; // 字符串
//    printf("Hello, World!\n");
//    printf("%s\n十进制: %d\n十进制: %d\n", x, a, test(a, a));
//    printf("hello world, 草拟吗\n");
//    long b = 20;
//    int c = a + 10;
//    printf("%d\n", c);
    // d: 带符号输出10进制整数; o: 无符号八进制整数(不带前缀); x,X: 十六进制输出无符号整数(不带前缀)
    // u: 十进制形式输出无符号整数
    // f: 以小数形式输出单、双精度实数
    // e,E: 以指数形式输出单、双精度实数
    // g,G 以%f或%e中较短的输出宽度输出单、双精度实数
    // c 输出单个字符
    // s 输出字符串
    // p 输出指针地址
    // lu 32位无符号整数
    // llu 64位无符号整数
//    printf("十进制: %d \n八进制: %lu \n32位: %lu", a + 1, sizeof a, b);
    // sizeof a 是一个long类型的整数
    float numFloat = 10.1234567; // float不能存储有效位数超过7位的小数 (单精度浮点型)
    // * float numFloat8 = 10.12345678; 这样就只能识别到10.1234567
    
    numFloat = 12.12; // * 将会占据8个字节(类型变为 doubel)
    
    numFloat = 12.12f; // * 这样还是4个字节(还是 float) 因此为float变量赋值, 必须在结尾加上f

    double numD = 10.1234567890123456; // double 类型可以存储有效位数为16位 (双精度浮点型)
    
    // 一个中文字符起码要给4位, 否则打印过少, 会出现其他东西
    char ch[100] = "老子日"; // 这样写ch的值是d, 默认是1个字符, 但是超出长度默认保留最后n位
    
    printf("char: %s\n", ch);

    int x = 20;
    int arr[20];
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
      x = 10;
      arr[i] = i;
      printf("数组项%d: %d\n", i, arr[i]);
    }
    printf("数组长度%lu\n", sizeof(arr)/sizeof(int)); // 数组长度计算
    printf("float: %f\n", numFloat); // 就算超过了有效位7位可以输出东西来, 但是精度会丢失, 打印不准确
    printf("double: %.16lf\n", numD); // 这个则可以输出16位
    printf("%lu\n%lu\n", sizeof(numFloat), sizeof(numD));
    printf("%d\n", x);
    return 0;
}
