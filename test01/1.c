// .c的文件是C程序的源文件
#include <stdio.h>

int main() {
  // \n 是换行符
  printf("hello world, 草拟吗\n");
  const int a = 10;
  long b = 20;
  int c = a + 10;
    printf("%d\n", c);
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
  printf("十进制: %d \n八进制: %lu \n32位: %lu", a + 1, sizeof a, b);
  // sizeof a 是一个long类型的整数
  return 0;
}
