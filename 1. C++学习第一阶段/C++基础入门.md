## 1. 初识C++

### 1.1 C++的第一个程序 

~~~c++
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    system("pause");
    return 0;
}
~~~

### 1.2 C++注释

**作用：** 在代码中添加一些说明和解释，方便自己和其他程序员阅读代码。

**两种格式：** 

1. 单行注释：

   ~~~c++
   //描述信息
   ~~~

   + 通常放在一段代码的上方，或者一条语句的末尾，***对该行代码进行说明***
   
2. 多行注释：

   ~~~c++
   /*描述信息*/ 
   ~~~

   + 通常放在一段代码上方，***对该段代码做整体说明***

> 编译器在编译代码时，会忽略注释的内容

### 1.3 变量

**作用:** 给一段指定的内存空间起名，方便操作这段内存

**语法：**

~~~c++
数据类型  变量名 = 初始值;
int a =10 ;
~~~

**示例：**

~~~c++
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << "a= " << a << endl;
    system("pause");
    return 0;
}
~~~

### 1.4 常量

**作用：** 用于记录程序中不可更改的数据

C++定义常量两种方式：

1. **#define** 宏常量：

 ~~~c++
 #define 常量名 常量值
 ~~~

+ ***通常在文件上方定义***，表示一个常量
2. **const** 修饰的变量

~~~c++
const 数据类型 常量名 = 常量值
~~~

+ 通常在变量定义前加关键字const，修饰该变量为常量，不可修改

**示例：**

~~~c++
#include <iostream>
using namespace std;
//宏常量
#define week 7

int main()
{
    //const修饰变量
    const int month = 12;

    cout << "一周共有:" << week << "天" << endl;
    cout << "一年共有:" << month << "月" << endl;

    system("pause");
    return 0;
}
~~~

### 1.5 关键字

**作用：** 关键字是C++中预先保留的单词（标识符）

>  在定义变量或者常量的时候，不要使用关键字

### 1.6 标识符命名规则

**作用：** C++规定给标识符（变量、常量）命名时，有一套自己的规则

+ 标识符不能是关键字
+ 标识符只能由字母、数字、下划线组成
+ 第一个字符必须为字母或下划线
+ 标识符中字母区分大小写

 ## 2. 数据类型

C++规定在创建一个变量或常量时，必须要指定出相应的数据类型，否则无法给变量分配内存

### 2.1 整型

**作用：** 整型变量表示的是***整数类型***的数据

C++能够表示整型的类型有以下几种方式，**区别在于所占内存空间不同**：

| **数据类型**         | **占用空间**                                        | **取值范围**       |
| -------------------- | --------------------------------------------------- | ------------------ |
| short(短整型)        | 2字节                                               | （-2^15 ~ 2^15-1） |
| int(整型)            | 4字节                                               | （-2^31~ 2^31-1）  |
| long(长整型)         | Windows下为4字节，Linux下为4字节(32位)，8字节(64位) | （-2^31~ 2^31-1）  |
| long long (长长整型) | 8字节                                               | （-2^63~ 2^63-1）  |

### 2.2 sizeof关键字

**作用：** 利用sizeof关键字可以**统计数据类型所占内存大小** 

**语法：**

~~~c++
sizeof(数据类型/变量名)
sizeof(int)    
sizeof(num1)
~~~

**示例：**

~~~c++
#include <iostream>
using namespace std;

int main()
{
    short num1 = 10;
    cout << "short占用内存空间为： " << sizeof(short)<<endl;
    cout << "short占用内存空间为： " << sizeof(num1) << endl;
    cout << "long占用内存空间为： " << sizeof(long) << endl;
    system("pause");
    return 0;
}
~~~

> **整型结论：** short < int <= long <= long long 

### 2.3 实型（浮点型）

**作用：** 用于表示小数

浮点数变量分为两种：

1. 单精度 float
2. 双精度 double

两者的**区别**在于表示的有效数字范围不同。

| 数据类型 | 占用空间 | 有效数字范围    |
| -------- | -------- | --------------- |
| float    | 4字节    | 7为有效数字     |
| double   | 8字节    | 15-16位有效数字 |

**示例：**

~~~c++
#include <iostream>
using namespace std;

int main()
{
	//默认情况下，输出一个小数，会显示出6位有效数字
	float f1 = 3.1415926f;
	cout << "f1=" << f1 << endl;
	double d1 = 3.1415926;
	cout << "d1=" << d1 << endl;

	//科学计数法
	float f2 = 3e2;	//3*10^2
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2;
	cout << "f3=" << f3 << endl;

	return 0;
}
~~~

### 2.4 字符型

**作用：** 字符型变量用于显示整个字符

**语法：** `char ch = 'a';`

> 注意1：在显示字符型变量时，用单引号将字符括起来，不要用双引号

> 注意2：单引号内只能有一个字符，不可以是字符串

+ C和C++中字符型变量只占用***1个字节***
+ 字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到内存单元

**示例：**

~~~c++
#include <iostream>
using namespace std;

int main()
{
    //1. 字符型变量创建方式
    char ch = 'a';
    cout << ch << endl;

    //2. 字符型变量所占内存大小
    cout << "char字符型变量所占内存" << sizeof(ch);

    //3. 字符型变量常见错误
    //char ch2 = "b"; //创建字符型变量时要用单引号
    //char ch2 = 'abcdef';//创建字符型变量，单引号内只能有一个字符

    //4. 字符型变量对应ASCII编码
    //a-97 A-65
    cout << (int)ch << endl;

    return 0; 
}
~~~

### 2.5 转义字符

**作用：** 用于表示一些***不能显示出来的ASCII字符***

现阶段我们常用的转义字符有：`\n`  `\\`  `\t`

**示例：**

~~~c++
#include <iostream>
using namespace std;

int main()
{
	//换行符 \n
	cout << "hello world\n";

	//反斜杠 \\

	cout << "\\" << endl;

	//水平制表符	\t	整齐地输出数据
	cout << "aaa\thelloworld" << endl;
	cout << "a\thelloworld" << endl;
	cout << "aaaaa\thelloworld" << endl;

	return 0;
}
~~~

### 2.6 字符串型

**作用：** 用于表示一串字符

**两种风格**

1. **C风格字符串：**`char 变量名[] = "字符串值"`

2. **C++风格字符串**：`string 变量名= "字符串值"`

   示例：

   ~~~c++
   #include <iostream>
   #include<string>
   using namespace std;
   
   int main()
   {
   	//1. C风格字符串
   	char str[] = "hello world";
   	cout << str << endl;
   
   	//2. C++风格字符串
   	//包含string头文件
   	string str2 = "hello world";
   	cout << str2 << endl;
   	return 0;
   }
   ~~~

   + C++风格字符串要添加***string头文件***

### 2.7 布尔型 bool

**作用：** 布尔数据类型代表真或假的值

bool类型只有两个值

+ true  --- 真(本质是1)
+ false  ---假(本质是0)

**bool类型占1个字节大小**

示例：

~~~c++
#include <iostream>
#include<string>
using namespace std;

int main()
{
	//1. 创建bool数据类型
	bool flag = true;
	cout << flag << endl;

	flag = false;
	cout << flag << endl;

	//2. 查看bool类型所占内存空间
	cout << "布尔类型所占空间大小" << sizeof(flag);

	return 0;
}
~~~

### 2.8 数据的输入

**作用：** 用于从键盘获取数据

**关键字：** cin

**语法：**`cin>>变量`

示例：

~~~c++
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//1. 整型
	int a = 0;
	cout << "请给整型变量a赋值" << endl;
	cin >> a;
	cout << "整型变量a=" << a << endl;

	//2. 浮点型
	float f = 0;
	cout << "请给浮点型变量f赋值" << endl;
	cin >> f;
	cout << "浮点型变量f=" << f << endl;
	//3. 字符型
	//4. 字符串型
	string str = "hello";
	cout << "请给字符串型变量str赋值" << endl;
	cin >> str;
	cout << "字符串型变量str=" << str;
	//5. 布尔类型


	return 0;
}
~~~

## 3. 运算符

**作用：** 用于执行代码的运算

主要有以下运算符：

| 运算符类型 | 作用                                   |
| ---------- | -------------------------------------- |
| 算数运算符 | 用于处理四则运算                       |
| 赋值运算符 | 用于将表达式的值赋给变量               |
| 比较运算符 | 用于表达式的比较，并返回一个真值或假值 |
| 逻辑运算符 | 用于根据表达式的值返回真值或假值       |

### 3.1 算数运算符

**作用：** 处于四则运算

算数运算符主要包括以下符号：

| 运算符 | 术语     | 示例       | 结果     |
| ------ | -------- | ---------- | -------- |
| +      | 正号     | +3         | 3        |
| -      | 负号     | -3         | -3       |
| +      | 加       | 10+5       | 15       |
| -      | 减       | 10-5       | 5        |
| *      | 乘       | 10*5       | 50       |
| /      | 除       | 10/5       | 2        |
| %      | 取模     | 10%3       | 1        |
| ++     | 前置递增 | a=2;b=++a; | a=3;b=3  |
| ++     | 后置递增 | a=2;b=a++; | a=3;b=2; |
| --     | 前置递减 | a=2;b=--a; | a=1;b=1; |
| --     | 后置递减 | a=2;b=a--; | a=1;b=2; |

**示例1：** 加减乘除运算

~~~c++
//加减乘除
	int a1 = 10;
	int b1 = 3;
	double a2 = 5.0;
	double b2 = 2.5;
	double b3 = 2.3;

	cout << +a1 << endl;
	cout << -b1 << endl;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//整型变量做除法结果是整型
	cout << a2 / b2 << endl;
	cout << a2 / b3 << endl;//浮点型变量做除法结果除尽为整型，除不尽为浮点型
~~~

>在除法运算中：整型变量做除法结果是整型；浮点型变量做除法结果除尽为整型，除不尽为浮点型	                                            
>

**示例2：** 取模运算

~~~c++
//取模运算——就是求余数
	int c1 = 10;
	int d1 = 3;
	int d2 = 20;

	cout << c1 % d1 << endl;
	cout << c1 % d2 << endl;
~~~

> 取模运算必须是整数

**示例3：** 递增递减运算

~~~c++
//递增运算
	//1. 前置递增
	int a = 10;
	++a;
	cout << "a=" << a << endl;

	//后置递增
	int b = 10;
	b++;
	cout << "b=" << b << endl;

	//前置和后置的区别
	//前置递增  先让变量+1  然后进行表达式运算
	int c = 10;
	int d = ++c * 10;
	cout << "c=" << c << endl;
	cout << "d=" << d << endl;


	//后置递增  先进行表达式运算，后让变量+1
	int e = 10;
	int f = e++ * 10;
	cout << "e=" << e << endl;
	cout << "f=" << f << endl;
~~~

> 前置递增  先让变量+1  然后进行表达式运算
>
> 后置递增  先进行表达式运算，后让变量+1

### 3.2 赋值运算符

**作用：** 用于将表达式的值赋给变量

赋值运算符包括以下几个符号：

| 运算符 | 术语   | 示例      | 结果     |
| ------ | ------ | --------- | -------- |
| =      | 赋值   | a=2;b=3;  | a=2;b=3; |
| +=     | 加等于 | a=0;a+=2; | a=2;     |
| -=     | 减等于 | a=5;a-=3; | a=2;     |
| *=     | 乘等于 | a=2;a*=2; | a=4;     |
| /=     | 除等于 | a=4;a/=2; | a=2;     |
| %=     | 模等于 | a=3;a%2;  | a=1;     |

**示例：**

~~~c++
#include<iostream>

using namespace std;

int main() {

	//赋值运算符  =
	int a = 10;
	cout << "a=" << a << endl;
	a = 100;
	cout << "a=" << a << endl;

	// +=
	a = 10;
	a += 2; //a = a + 2 
	cout << "a=" << a << endl;
	
	// -= 
	a = 10;
	a -= 2; //a = a - 2 
	cout << "a=" << a << endl;

	// *=
	a = 10;
	a *= 2; //a = a * 2 
	cout << "a=" << a << endl;

	// /=
	a = 10;
	a /= 2; //a = a / 2 
	cout << "a=" << a << endl;

	// %=
	a = 10;
	a %= 2; //a = a % 2 
	cout << "a=" << a << endl;

	return 0;
}
~~~

### 3. 比较运算符

**作用：** 用于表达式的比较，并返回一个真值或假值

比较运算符有以下符号：

| 运算符 | 术语     | 示例   | 结果 |
| ------ | -------- | ------ | ---- |
| ==     | 相等于   | 4 == 3 | 0    |
| !=     | 不等于   | 4 != 3 | 1    |
| <      | 小于     | 4 < 3  | 0    |
| >      | 大于     | 4 > 3  | 1    |
| <=     | 小于等于 | 4 <= 3 | 0    |
| >=     | 大于等于 | 4 >= 3 | 1    |

**示例：**

~~~c++
#include<iostream>

using namespace std;

int main() {

	int a = 10;
	int b = 20;

	// ==
	cout << (a == b) << endl;

	// !=
	cout << (a != b) << endl;

	// >
	cout << (a > b) << endl;

	// <
	cout << (a < b) << endl;

	// >=
	cout << (a >= b) << endl;

	// <=
	cout << (a <= b) << endl;

	return 0;
}
~~~

### 3.4 逻辑运算符

**作用：** 用于根据表达式的值返回真值或假值

逻辑运算符有以下符号：

| 运算符 | 术语 | 示例     | 结果                                                 |
| ------ | ---- | -------- | ---------------------------------------------------- |
| ！     | 非   | !a       | 如果a为假，则!a为真；如果a为真，则!a为假             |
| &&     | 与   | a && b   | 如果a和b都为真，则结果为真，否则为假                 |
| \|\|   | 或   | a \|\| b | 如果a和b有一个为真，则结果为真，二者都为假，结果为假 |

**示例：**

~~~c++
#include<iostream>

using namespace std;

int main() {

	//逻辑运算符	非 ！
	int a = 10;
	cout << (!a) << endl;
	cout << (!!a) << endl;

	//逻辑运算符	与 &&
	int a = 10, b = 10, c = 0;
	cout << (a && b) << endl;
	cout << (a && c) << endl;

	//逻辑运算符	或 ||
	int a = 10, b = 10, c = 0, d = 0;
	cout << (a || b) << endl;
	cout << (a || c) << endl;
	cout << (c || d) << endl;

	return 0;
}
~~~

## 4. 程序流程结构

C/C++支持最基本的三种程序运行结构：***顺序结构、选择结构、循环结构***

+ 顺序结构：程序按顺序执行，不发生跳转

+ 选择结构：依据条件是否满足，有选择的执行相应功能

+ 循环结构：依照条件是否满足，循环多次执行某段代码


### 4.1 选择结构

#### 4.1.1 if语句

**作用：** 执行满足条件的语句

if语句的三种形式

+ 单行格式if语句
+ 多行格式if语句
+ 多条件的if语句

1. 单行格式if语句：`if(条件) {(条件满足执行的语句)}`

   **示例：**

   ~~~c++
   //选择结构	if语句
   	//单行格式if语句
   	int score = 0;
   	cout << "请输入分数：" << endl;
   	cin >> score;
   	cout << "分数为：" << score;
   	if (score > 85) {
   		cout << ",成绩为优秀" << endl;
   	}
   ~~~

2. 多行格式if语句：`if(条件){ 条件满足执行的语句 }else{ 条件不满足执行的语句 };`

   **示例：**

   ~~~c++
   //多行格式if语句
   	int score = 0;
   	cout << "请输入分数：" << endl;
   	cin >> score;
   	cout << "分数为：" << score;
   	if (score > 85) {
   		cout << ", 成绩为优秀" << endl;
   	}
   	else {
   		cout << ", 成绩不优秀" << endl;
   	}
   ~~~

3. 多条件的if语句：`if(条件1){ 条件1满足执行的语句 }else if(条件2){ 条件2满足执行的语句 }...else{ 所有条件都不满足执行的语句 }`

   ~~~c++
   //多条件if语句
   	int score = 0;
   	cout << "请输入分数：" << endl;
   	cin >> score;
   	cout << "分数为：" << score;
   	if (score > 85) {
   		cout << ", 成绩为优秀" << endl;
   	}
   	else if (score > 60 && score < 85) {
   		cout << ", 成绩为合格" << endl;
   	}
   	else {
   		cout << ", 成绩不合格" << endl;
   	}
   ~~~
   



**嵌套if语句：** 在if语句中，可以嵌套使用if语句，达到更精确的条件判断

案例需求：

+ 提示用户输入一个分数，根据分数做如下判断
+ 分数大于85视为优秀，大于60视为合格，其余视为不合格
+ 在优秀中，大于95分为一等奖，大于90分为二等奖，大于85分为三等奖

**示例：**

~~~c++
//嵌套if语句
	int score = 0;
	cout << "请输入分数：" << endl;
	cin >> score;
	cout << "分数为：" << score;
	if (score > 85) {
		cout << ", 成绩为优秀" << endl;
		if (score > 95) {
			cout << "一等奖" << endl;
		}
		else if (score > 90 && score < 95) {
			cout << "二等奖" << endl;
		}
		else {
			cout << "三等奖" << endl;
		}
	}
	else if (score > 60 && score < 85) {
		cout << ", 成绩为合格" << endl;
	}
	else {
		cout << ", 成绩不合格" << endl;
	}
~~~

#### 4.1.2 三目运算符

**作用：** 通过三目运算符实现简单的判断

**语法：**`表达式1 ? 表达式2 : 表达式3`

**解释：**

如果表达式1的值为真，执行表达式2，并返回表达式2的结果；

如果表达式1的值为假，执行表达式3，并返回表达式3的结果。

**示例：**

~~~c++
#include<iostream>

using namespace std;

int main() {

	//三目运算符
	//比较a和b，将值更大的赋给c
	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : c);
	cout << "c=" << c << endl;

	//c++中三目运算符返回的是变量，可以继续赋值
	(a > b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	return 0;
}
~~~

#### 4.1.3 switch语句

**作用：** 执行多条件分支语句

**语法：**

~~~c++
switch (表达式)
	{
		case 结果1：执行语句; break;

		case 结果2：执行语句; break;

			...

		default:执行语句; break;
	}
~~~

**示例：**

~~~c++
int score = 0;
	cout << "请输入分数：" << endl;
	cin >> score;
	cout << "分数为：" << score;

	switch (score)
	{
	case 100:
		cout << "满分" << endl;
		break;//退出当前分支
	case 60:
		cout << "及格" << endl;
		break;
	default:
		cout << "不合格" << endl;
		break;
	}
~~~

> 注意1：switch语句中表达式类型只能是整型或者字符型
>
> 注意2：case中如果没有break，程序会一直向下执行
>
> 注意3：与if语句相比，对于多条件判断时，switch的结构清晰，执行效率高，缺点是swicth不可以判断区间

### 4.2 循环结构

 #### 4.2.1 while循环语句

**作用：** 满足循环条件，执行循环语句

**语法：**`while(循环条件){ 循环语句 }`

**解释：** 只要循环条件的结果为真，就执行循环语句

**示例：**

~~~c++
#include<iostream>

using namespace std;

int main() {

	//while循环
	//在屏幕中打印0-9这10个数字
	int num = 0;
	while (num < 10) {
		cout << num << endl;
		num++;
	}

	return 0;
}
~~~

> 注意：在执行循环语句的时候，程序必须提供跳出循环的出口，否则出现死循环

**练习案例：猜数字游戏**

**案例描述：** 系统随机生成1-100之间的数字，用户输入猜测的数字，如果猜对，提示猜对并退出；如果猜错，提示猜大了或猜小了。

~~~c++
//猜数字游戏
	//1. 系统生成随机数
	srand(unsigned int)time(NULL);
	int num = rand() % 100 + 1;//生成1-100的随机数

	//2. 玩家进行猜测
	int val = 0;
	cout << "请输入猜测的值:";
	while (1) {
		cin >> val;
		//3. 判断玩家的猜测
		//猜错	提示信息：过大或过小	重新返回第2步
		if (val > num) {
			cout << "猜大了,请重新输入：";
		}
		else if (val < num) {
			cout << "猜小了,请重新输入：";
		}
		else {
			//猜对	退出游戏
			cout << "猜对啦！";
			break;
		}
	}
~~~

#### 4.2.2 do...while循环语句

**作用：** 满足循环条件，执行循环语句

**语法：**`do{ 循环语句} while(循环条件)`

**注意：** 与while的区别在于***do...while会先执行一次循环语句***

**示例：**

~~~c++
#include<iostream>

using namespace std;

int main() {

	//do...while循环
	//在屏幕中打印0-9这10个数字
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);

	return 0;
}
~~~

**练习案例：水仙花数**

**案例描述：** 水仙花数是指一个3位数，它的每个位上的数字的3次幂之和等于它本身

例如：1^3 + 5^3 + 3^3 = 153

请用do...while语句，求出所有3位数中的水仙花数

~~~c++
//练习案例:水仙花数
	/*1. 将所有的3位数进行输出
	  2. 在所有3位数中找到水仙花数
		 水仙花数判断：个位^3+十位^3+百位^3=本身
			获取个位：153%10=3	对数字进行模10运算
			获取十位：153/10=15	15%10=5	对数字先整除10，再模10
			获取百位：153/100=1	对数字整除100*/


	//1. 打印所有数字
	int num = 100;
	do {

		//2. 找到水仙花数
		int a = 0;//个位
		int b = 0;//十位
		int c = 0;//百位

		a = num % 10;//获取数字个位
		b = num / 10 % 10;//获取数字十位
		c = num / 100;//获取数字百位
		if (a * a * a + b * b * b + c * c * c == num) {
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
~~~

#### 4.2.3 for循环语句

**作用：** 满足循环条件，执行循环语句

**语法：**`for(起始表达式;条件表达式;末尾循环体){ 循环语句; }`

**示例：**

~~~c++
#include<iostream>

using namespace std;

int main() {
	//for循环
	//从数字0 打印到数字9
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}

	return 0;
}
~~~

**练习案例：敲桌子**

**案例描述：** 从1开始数到数字100，如果数字个位含有7，或者十位含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出。

~~~c++
//敲桌子案例
	/*1. 先输出1-100这些数字
	  2. 从这100个数字中找到特殊数字，改为"敲桌子"
		 特殊数字：
			7的倍数(7 14 21 28...) % 7 = 0
			个位有7(7 17 27 37...) % 10 = 7
			十位有7(70 71 72 73...) /10 = 7*/

	//1. 先输出1-100数字
	for (int i = 1; i <= 100; i++)
	{
		//2. 寻找特殊数字
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
			cout << "敲桌子" << endl;
		}
		else {
			cout << i << endl;
		}
	}
~~~

#### 4.2.4 嵌套循环

**作用：** 在循环体中再嵌套一层循环，解决一些实际问题

例如我们想打印如下图片，就要利用嵌套循环

![image-20210815151916670](https://img.wkeyu.cn/blog/paper/20210815151916.png)

~~~c++
#include<iostream>

using namespace std;

int main() {

	//嵌套循环实现星图

	//外层执行一次，内层执行一周
	//外层循环
	for (int i = 0; i < 10; i++) {
		//内层循环
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}


	return 0;
}
~~~

 **练习案例：乘法口诀表**

**案例描述：** 利用嵌套循环，实现九九乘法表

~~~c++
//练习案例：乘法口诀表
	for (int i = 0; i <= 9; i++)
	{
		//cout << i << endl;
		for (int j = 1; j <= i; j++) {
			cout << i << "*" << j << "=" << i * j << "\t";
		}
		cout << endl;
	}
~~~

![image-20210815152722885](https://img.wkeyu.cn/blog/paper/20210815152722.png)

### 4.3 跳转语句

#### 4.3.1 break语句

**作用：** 用于跳出***选择结构***和***循环结构***

break使用的时机：

+ 出现在switch条件语句中，作用是终止case并跳出switch
+ 出现在循环语句中，作用是跳出当前的循环语句
+ 出现在嵌套循环中，跳出最近的内层循环语句

**示例1：**

~~~c++
//1. 出现在switch语句中
	cout << "请选择难度"<<endl;
	cout << "1.简单"<<endl;
	cout << "2.中等"<<endl;
	cout << "3.困难"<<endl;
	int select = 0;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "选择的是简单" << endl;
		break;
	case 2:
		cout << "选择的是中等" << endl;
		break;
	case 3:
		cout << "选择的是困难" << endl;
		break;
	}
~~~

**示例2：**

~~~c++
//出现在循环语句中
	for (int i = 0; i < 10; i++)
	{
		if (i == 5) {
			break;
		}
		cout << i << endl;
	}
~~~

**示例3：**

~~~c++
//出现在嵌套循环中
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
		{
			if (j == 5) {
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}
~~~

#### 4.3.2 continue语句

**作用：** 在***循环语句***中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环

**示例：** 输出0-100的奇数

~~~c++
#include<iostream>

using namespace std;

int main() {

	for (int i = 0; i <= 100; i++)
	{
		//奇数输出，偶数不输出
		if (i % 2 == 0) {
			continue;
		}
		cout << i << endl;
	}
	return 0;
}
~~~

> 注意：continue并不会使整个循环终止，而break会跳出循环

#### 4.3.2 goto语句

**作用 :** 可以无条件跳转语句

**语法：**`goto标记`

**解释：** 如果标记的名称存在，程序执行到goto语句时，会跳转到标记的位置

**示例：**

~~~c++
#include<iostream>

using namespace std;

int main() {

	cout << "1.****" << endl;
	goto FLAG;
	cout << "2.****" << endl;
	cout << "3.****" << endl;
FLAG:
	cout << "4.****" << endl;
	return 0;
}
~~~

>  注意：在程序中不建议使用goto语句，以免造成程序流程混乱

## 5.数组

### 5.1 概述

所谓数组，就是一个存放了相同类型的数据元素的集合

**特点1：** 数组中的每个***数据元素都是相同的数据类型***

**特点2：** 数组是由***连续的内存***位置组成的



### 5.2 一维数组

#### 5.2.1 一维数组的定义方式

一维数组定义的三种方式：

1. `数据类型 数组名[数组长度]`
2. `数据类型 数组名 [数组长度] = { 值1，值2 ...}`
3. `数据类型 数组名[] = {值1，值2 ....}`

**示例：**

~~~c++
#include<iostream>

using namespace std;

int main() {

	//数组

	//1. 数据类型 数组名 [数组长度]
	//数组下标从0开始
	int arr[5];
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 10;
	arr[4] = 10;

	//访问数组元素
	cout << arr[0] << endl;

	//2. 数据类型 数组名 [数组长度] = { 值1，值2 ...}
	//若初始化数据没有全部填写，剩下的会用0填写
	int arr2[5] = { 10,20,30,40 };
	cout << arr2[5] << endl;

	//利用循环，输出数组中的元素
	for (int i = 0; i < 5; i++)
	{
		cout << arr[2] << endl;
	}

	//3. 数据类型 数组名[] = {值1，值2 ....}
	int arr3[] = { 10,20,30,40,50,60 };

	return 0;
}
~~~

> 总结1：数组名的命名规范与变量名命名规范一致，不要和变量重名
>
> 总结2：数组中下标总是从0开始索引

#### 5.2.2 一维数组数组名

一维数组名称的**用途：**

1. 可以统计整个数组在内存中的长度	sizeof(arr)
2. 可以获取数组在内存中的首地址      cout<<arr<<endl;

**示例：**

~~~c++
 #include<iostream>

using namespace std;

int main() {
	//数组名用途

	//1. 可以统计整个数组在内存中的长度
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组占用内存空间为：" << sizeof(arr) << endl;
	cout << "每个元素占用内存空间为：" << sizeof(arr[0]) << endl;
	cout << "数组中元素的个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

	//2. 可以获取数组在内存中的首地址
	cout << "数组首地址为：" << (int)arr << endl;
	cout << "数组第一个元素的地址为：" << (int)&(arr[0]) << endl;
	cout << "数组第二个元素的地址为：" << (int)&(arr[1]) << endl;
	
	//数组名是常量，不可以进行修改
	//arr = 100;	×

	return 0;
}
~~~

**练习案例1：**五只小猪称体重

**案例描述：** 在一个数组中记录了五只小猪的体重，如：int arr[5]={300,350,200,400,250}

找出并打印最重的小猪的体重

~~~c++
#include<iostream>

using namespace std;

int main() {

	//1. 创建5只小猪体重的数组
	int arr[5] = { 300,350,200,400,250 };

	//2. 从数组中找到最大值
	int max = arr[0];//先认定一个最大值为数组首元素
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		//若访问的数组元素大于max，更新max为该数组元素
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "最重的小猪体重为：" << max << endl;


	return 0;
}
~~~

**练习案例2：**数组元素逆置

**案例描述：** 请声明一个5个元素的数组，并且将元素逆置

（如原数组元素为：1，3，2，5，4；逆置后输出结果为：4，5，2，3，1）

~~~c++
#include<iostream>

using namespace std;

int main() {
	//实现数组元素的逆置

	//1. 创建数组
	int arr[5] = { 1,3,2,5,4 };
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "\t";
	}

	//2. 实现逆置
	/*
		2.1 记录起始下标位置
		2.2 记录结束下标位置
		2.3 起始下标与结束下标的元素互换
		2.4 起始位置++，结束位置--
		2.5 循环执行2.1，直到起始位置>=结束位置
	*/
	int start = 0;//起始下标
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//结束下标

	while (start < end) {
		//实现元素互换
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		//下标更新
		start++;
		end--;
	}

	//打印逆置后的数组
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "\t";
	}

	return 0;
}
~~~

#### 5.2.3 冒泡排序

**作用：** 最常用的排序算法，对数组内元素进行排序

1. 比较相邻的元素，如果第一个比第二个大，就交换他们两个
2. 对每一对相邻元素做同样的工作，执行完毕后找到第一个最大值
3. 重复以上的步骤，每次比较次数-1，直到不需要比较

**示例：** 将数组{4,2,8,0,5,7,1,3,9}按升序排列

~~~c++
#include<iostream>

using namespace std;

int main() {

	//利用冒泡排序实现升序序列
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };

	//排序前数组
	cout << "排序前：";
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << "\t";
	}

	//开始冒泡排序
	//总排序轮数= 元素个数-1
	for (int i = 0; i < 9 - 1; i++)
	{
		//内层循环对比	次数=元素个数-循环轮数-1
		for (int j = 0; j < 9 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	//打印排序后结果
	cout << endl << "排序后：";
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << "\t";
	}

	return 0;
}
~~~

> 重点：**总排序轮数=元素个数-1**
>
> ​           **每轮排序次数=元素个数-循环轮数-1**

### 5.3 二维数组

二维数组就是在一维数组上，多加一个维度

#### 5.3.1 二维数组定义方式

二维数组的四种方式：

1. `数据类型 数组名[ 行数][列数];`
2. `数据类型 数组名[ 行数][列数]={{数据1，数据2},{数据3，数据4}};`
3. `数据类型 数组名[ 行数][列数]={数据1,数据2,数据3,数据4};`
4. `数据类型 数组名[ ][列数]={数据1,数据2,数据3,数据4};`

> 建议：以上4种定义方式，利用***第二种更加直观，提高代码的可读性***

**示例：**

~~~c++
#include<iostream>

using namespace std;

int main() {
	//二维数组定义方式

	//1. 数据类型 数组名[行数][列数]
	int arr1[2][3];

	//2. 数据类型 数组名[ 行数][列数]={数据1，数据2},{数据3，数据4}
	int arr2[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	//外层循环打印行数
	for (int i = 0; i < 2; i++)
	{
		//内层循环打印列数
		for (int j = 0; j < 3; j++) {
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}

	//3. 数据类型 数组名[ 行数][列数]={数据1,数据2,数据3,数据4}
	int arr3[2][3] = { 1,2,3,4,5,6 };

	//4. 数据类型 数组名[ ][列数]={数据1,数据2,数据3,数据4}
	int arr4[][3] = { 1,2,3,4,5,6 };

	return 0;
}
~~~

> 注意：在二维数组种，如果初始化了数据，可以省略行数

#### 5.3.2 二维数组数组名

二维数组名称的**用途：**

1. 查看二维数组所占的内存空间	sizeof(arr)
2. 获取二维数组在内存中的首地址      cout<<arr<<endl;

**示例：**

~~~c++
#include<iostream>

using namespace std;

int main() {

	//二维数组数组名称用途

	//1. 可以查看二维数组占用内存空间大小
	int	arr[2][3] = { {1,2,3},{4,5,6} };
	cout << "二维数组占用内存空间为：" << sizeof(arr) << endl;
	cout << "二维数组第一行占用内存空间为：" << sizeof(arr[0]) << endl;
	cout << "二维数组第一个元素占用内存空间为：" << sizeof(arr[0][0]) << endl;
	//获取二维数组行数和列数
	cout << "二维数组行数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;


	//2. 可以查看二维数组的首地址
	cout << "二维数组首地址为：" << (int)arr << endl;
	cout << "二维数组第一行的首地址为：" << (int)arr[0] << endl;
	cout << "二维数组第二行的首地址为：" << (int)arr[1] << endl;
	cout << "二维数组第一个元素的首地址为：" << (int)&(arr[0][0]) << endl;

	return 0;
}
~~~

#### 5.3.3 二维数组应用案例

**考试成绩统计：**

**案例描述：** 由三名同学(张三、李四、王五)，在一次考试种的成绩分别如下表，请分别输出三名同学的总成绩

|      | 语文 | 数学 | 英语 |
| ---- | ---- | ---- | ---- |
| 张三 | 100  | 100  | 100  |
| 李四 | 30   | 50   | 100  |
| 王五 | 60   | 70   | 80   |

**示例：**

~~~c++
#include<iostream>
#include<string>

using namespace std;

int main() {

	//二维数组案例 - 考试成绩统计

	//1. 创建二维数组
	int score[3][3] = { {100,100,100},{90,50,100},{60,70,80} };
	string names[3] = { "张三","李四","王五" };
	//统计每个人的总和分数
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;//分数综合
		for (int j = 0; j < 3; j++) {
			sum += score[i][j];
			//cout << score[i][j] << "\t";
		}
		cout << names[i] << "的总分为：" << sum << endl;
	}
	return 0;
}
~~~

## 6. 函数

### 6.1 概述

**作用：** 将一段经常使用的代码封装起来，减少重复代码

一个较大的程序，一般分为若干个程序块，每个模块实现特定的功能

### 6.2 函数的定义 

函数的定义一般主要有5个步骤

1. 返回值类型
2. 函数名
3. 参数列表
4. 函数体语句
5. return 表达式

**语法：**

~~~c++
返回值类型 函数名(参数列表){
    
    函数体语句;
    
    return表达式;
}
    
~~~

+ 返回值类型：一个函数可以返回一个值，在函数定义中
+ 函数名：给函数起个名称
+ 参数列表：使用该函数时，传入的数据
+ return表达式：和返回值类型挂钩，函数执行完后，返回相应的数据

**示例：**

~~~c++
#include<iostream>

using namespace std;

//加法函数
int add(int num1, int num2) {
	int sum = num1 + num2;

	return sum;
}
int main() {

	return 0;
}
~~~

### 6.3 函数的调用

**作用：** 使用定义好的函数

**语法：**`函数名(参数)`

**示例：**

~~~c++
#include<iostream>

using namespace std;

//定义加法函数
//函数定义时，num1和num2为形式参数，无真实数据
int add(int num1, int num2) {
	int sum = num1 + num2;

	return sum;
}
int main() {

	//main函数种调用add函数
	int a = 10;
	int b = 23;
	//函数调用语法：函数名称(参数)
	//a和b为 实际参数
	//函数调用时，实参的值会传递给形参
	int c = add(a, b);
	cout << "c=" << c << endl;

	return 0;
}
~~~

> 总结：函数定义里小括号内称为形参，函数调用时传入的参数为实参 

### 6.4 值传递

+ 所谓值传递，就是函数调用时实参将数值传入给形参
+ 值传递时，***如果形参发生改变，并不会影响实参***

**示例：**

~~~c++
#include<iostream>

using namespace std;

//值传递
//定义函数，实现两个数字进行交换的函数
void swap(int num1, int num2) {
	cout << "形参交换前：" << endl;
	cout << "num2= " << num1 << endl;
	cout << "num1= " << num1 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "形参交换后：" << endl;
	cout << "num2= " << num1 << endl;
	cout << "num1= " << num1 << endl;
}

int main() {
	int a = 10;
	int b = 20;

	cout << "实参交换前：" << endl;
	cout << "num2= " << a << endl;
	cout << "num1= " << b << endl;
	//当我们做值传递时，函数的形参发生改变，并不会影响实参
	swap(a, b);

	cout << "实参交换后：" << endl;
	cout << "num2= " << a << endl;
	cout << "num1= " << b << endl;

	return 0;
}
~~~

> 总结：值传递时，形参影响不了实参

### 6.5 函数的常见样式

常见的函数样式有4种：

1. 无参无返
2. 有参无返
3. 无参有返
4. 有参有返

**示例：**

~~~c++
#include<iostream>

using namespace std;

//函数常见样式
//1. 无参无返
void test01() {
	cout << "this is test01" << endl;
}

//2. 有参无返
void test02(int a) {
	cout << "this is test02 a=" << a << endl;
}

//3. 无参有返
int test03() {
	cout << "this is test03";
	return 1000;
}

//4. 有参有返
int test04(int a) {
	cout << "this is test04 a= " << a << endl;
	return a;
}

int main() {

	//1. 无参无返函数的调用
	test01();

	//2. 有参无返函数的调用
	test02(100);

	//3. 无参有返函数的调用
	int num1 = test03();
	cout << "num1= " << num1 << endl;

	//4. 有参有返函数的调用
	int num2 = test04(10000);
	cout << "num2= " << num1 << endl;

	return 0;
}
~~~

### 6.6 函数的声明

**作用：** 告诉编译器函数名称及如何调用函数，函数的实际主体可以单独定义

+ 函数的**声明可以多次**，但是函数的**定义只能有一次**

**示例：**

~~~c++
#include<iostream>

using namespace std;

//函数的声明
int max(int a, int b);

int main() {

	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;
	return 0;
}

//比较函数，实现两个整型数字进行比较，返回较大的值
int max(int a, int b) {
	return a > b ? a : b;
}
~~~

### 6.7 函数的分文件编写

**作用：** 让代码结构更加清晰

函数份文件编写一般有4个步骤 ：

1. 创建后缀名为.h的头文件
2. 创建后缀名为.cpp的源文件
3. 在头文件种写函数的声明
4. 在源文件种写函数的定义

**示例：**

swap.h

~~~c++
//函数声明
void swap(int a, int b);
~~~

swap.cpp

~~~cpp
#include<iostream>
#include "swap.h"

using namespace std;

//函数定义
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
}
~~~

主文件

~~~cpp
#include<iostream>
#include "swap.h"

using namespace std;

int main() {
	int a = 20;
	int b = 10;

	swap(a, b);

	return 0;
}
~~~

## 7. 指针

### 7.1 指针的基本概念

**指针的作用：** 可以通过指针间接访问内存

+ 内存编号是从0开始记录的，一般采用十六进制数字表示
+ 可以利用指针变量保存地址

### 7.2 指针变量的定义和使用

**语法：**`数据类型 *变量名`

**示例：**

~~~cpp
#include<iostream>

using namespace std;

int main() {

	//1. 定义一个指针
	int a = 10;
	//指针定义的语法：数据类型* 变量名
	int* p = &a;

	cout << "a的地址为：" << &a << endl;
	cout << "p的值为：" << p << endl;

	//2. 使用指针
	//可以通过解引用的方式找到指针指向的内存
	//指针前加 * 代表解引用，找到指针指向的内存中的数据
	*p = 1000;
	cout << "a= " << a << endl;
	cout << "*p= " << *p << endl;

	return 0;
}

~~~

### 7.3 指针所占内存空间

+ 32位操作系统下，指针类型占4个字节
+ 64位操作系统下，指针类型占8个字节

**示例：**

~~~cpp
#include<iostream>

using namespace std;

int main() {
	//指针所占内存空间
	int a = 10;
	int* p = &a;

	//32位操作系统下，指针类型占4个字节
	//64位操作系统下，指针类型占8个字节
	cout << "sizeof(int *)" << sizeof(int *) << endl;
	cout << "sizeof(int *)" << sizeof(float *) << endl;
	cout << "sizeof(int *)" << sizeof(double *) << endl;
	cout << "sizeof(int *)" << sizeof(char *) << endl;

	return 0;
}
~~~

### 7.4 空指针和野指针

**空指针：** 指针变量指向内存中编号为0的空间

**用途：** 初始化指针变量

**注意：** 空指针指向的内存是不可以访问的

**示例1：空指针**

~~~cpp
#include<iostream>

using namespace std;

int main() {
	//空指针
	//1. 空指针用于给指针变量进行初始化
	int* p = NULL;

	//2. 空指针不可以进行访问
	//内存编号0~255为系统占用内存，不允许用户访问
	cout << *p << endl;

	return 0;
}
~~~

**野指针：** 指针变量指向非法的内存空间

**示例2：野指针**

~~~cpp
#include<iostream>

using namespace std;

int main() {
	//野指针

	//指针变量p指向内存编号为0x1100的空间
	int* p = (int*)0x1100;

	//访问指针报错
	cout << *p << endl;

	return 0;
}
~~~

> 空指针和野指针都不是我们申请的内存空间，因此不要访问

### 7.5 const修饰指针

 const修饰指针有三种情况：

1. const修饰指针	--常量指针
   + 语法：`const int* p = &a;`
   + 特点：指针的指向可以修改，但是指针指向的值不可以改
2. const修饰常量    --指针常量
   + 语法：`int* const p = &a`
   + 特点：指针的指向不可以更改，指针指向的值可以更改
3. const既修饰指针，又修饰常量
   + 语法：`const int* const p = &a`
   + 特点：执行的指向不可以改，指针指向的值也不可以改

**示例：**

~~~cpp
#include<iostream>

using namespace std;

int main() {
	//1. const修饰指针
	int a = 10;
	int b = 10;
	const int* p = &a;//指针指向的值不可以改，指针的指向可以更改

	//*p = 20;//错误：表达式必须是可修改的左值
	p = &b;//错误：表达式必须是可修改的左值

	//2. const修饰常量
	int* const p2 = &a;//指针的指向不可以改，指针指向的值可以改

	//p2 = &a;//错误：表达式必须是可修改的左值
	*p2 = 200;//正确

	//3. const修饰指针和常量
	const int* const p3 = &a;//指针的指向和指针指向的值都不可以更改
	//p3 = &a;//错误：表达式必须是可修改的左值
	//*p3 = 200;//错误：表达式必须是可修改的左值

	return 0;
}
~~~

> 技巧：看const后紧跟着的是指针还是常量，是指针就是常量指针，是常量就是指针常量

### 7.6 指针和数组

**作用：** 利用指针访问数组中元素  

**示例：**

~~~cpp
#include<iostream>

using namespace std;

int main() {
	//指针和数组
	//利用指针访问数组中的元素

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "第一个元素为：" << arr[0] << endl;

	int* p = arr;//arr(数组名)就是数组的首地址
	cout << "利用指针访问第一个元素: " << *p << endl;

	p++;//指针向后偏移四个字节
	cout << "利用指针访问第二个元素: " << *p << endl;

	//利用指针遍历数组
	cout << "利用指针遍历数组" << endl;
	int* p2 = arr;

	for (int i = 0; i < 10; i++)
	{
		cout << *p2 << endl;
		p2++;
	}

	return 0;
}
~~~

### 7.7 指针和函数

**作用：** 利用指针作为函数参数，可以修改实参的值

**示例：**

~~~cpp
#include<iostream>

using namespace std;

//实现两个数字交换
void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	cout << "swap01 a= " << a << endl;
	cout << "swap01 b= " << b << endl;
}

void swap02(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	cout << "swap02 a= " << *p1 << endl;
	cout << "swap02 b= " << *p2 << endl;
}
int main() {
	//指针和函数 
	int a = 10;
	int b = 20;

	//1. 值传递
	swap01(a, b);//值传递不会改变实参

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	//2. 地址传递
	swap02(&a, &b);//地址传递会改变实参
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	return 0;
}
~~~

> 总结：如果不想修改实参，就用值传递；如果想修改实参，就用地址传递 

### 7.8 指针、数组、函数

**练习案例：**

**案例描述：** 封装一个函数，利用冒泡排序，实现对整型数组的升序排序

例如数组：int arr[10]={4,3,6,9,1,2,10,8,7,5}

~~~cpp
#include<iostream>

using namespace std;

//冒泡排序函数
void bubbleSort(int* arr, int length)//参数1数组的首地址，参数2数组长度
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
//打印数组函数
void printArray(int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}
}
int main() {
	//1. 先创建数组
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	//数组长度
	int len = sizeof(arr) / sizeof(arr[0]);

	//2. 创建函数实现冒泡排序
	bubbleSort(arr, len);

	//3. 打印排序后的数组
	printArray(arr, len);

	return 0;
}
~~~

## 8. 结构体

### 8.1 结构体基本概念

结构体属于用户***自定义的数据类型**，允许用户存储不同的数据类型

### 8.2 结构体定义和使用

**语法：**`struct 结构体名 {结构体成员列表}`	

通过结构体创建变量的方式有三种：

+ struct 结构体名 变量名
+ struct 结构体名 变量名 = {成员1值，成员2值...}
+ 定义结构体时顺便创建变量

~~~cpp
#include<iostream>

using namespace std;

//结构体定义
struct Student
{
	//成员列表
	string name;//姓名
	int age;//年龄
	int score;//分数
}s3;//结构体变量创建方式3

//2. 结构体变量创建方式
int main() {
	//2.1 struct 结构体名 变量名
	struct Student s1;//struct关键字可以省略
	//通过.访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << "姓名：" << s1.name << "年龄：" << s1.age << "成绩：" << s1.score << endl;

	//2.2 struct 结构体名 变量名 = {成员1值，成员2值...}
	struct Student s2 = { "李四",19,80 };
	cout << "姓名：" << s2.name << "年龄：" << s2.age << "成绩：" << s2.score << endl;

	//2.3 定义结构体时顺便创建结构体变量
	s3.name = "李四";
	s3.age = 20;
	s3.score = 90;
	cout << "姓名：" << s3.name << "年龄：" << s3.age << "成绩：" << s3.score << endl;

	return 0;
}
~~~

> 总结1：定义结构体时的关键字是struct，不可省略
>
> 总结2：创建结构体变量时。关键字struct可以省略
>
> 总结3：结构体变量利用操作符“ . ”访问成员

### 8.3 结构体数组

**作用：** 将自定义的结构体放入到数组中方便维护

**语法：**`struct 结构体名 数组名[元素个数] = { {} ,{} , ... {} }`

**示例：**

~~~cpp
#include<iostream>
#include<string>

using namespace std;

//结构体数组

//1. 定义结构体
struct Student
{
	string name;
	int age;
	int score;
};

int main() {
	//2. 创建结构体数组
	struct Student stuArray[3] =
	{
		{"张三",18,100},
		{"李四",19,60},
		{"王五",17,90}
	};
	//3. 变量结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << stuArray[i].name << "\t";
		cout << "年龄：" << stuArray[i].age << "\t";
		cout << "成绩：" << stuArray[i].score << "\t";
		cout << endl;
	}

	return 0;
}
~~~

### 8.4 结构体指针

**作用：** 通过指针访问结构体中的成员

+ 利用操作符`->`可以通过结构体指针访问结构体属性

**示例：**

~~~cpp
#include<iostream>
#include<string>

using namespace std;
//结构体指针

//定义结构体指针
struct Student
{
	string name;
	int age;
	int score;
};


int main() {
	//1. 创建学生结构体变量
	struct Student s = { "张三",18,100 };

	//2. 通过指针指向结构体变量
	struct Student* p = &s;

	//3. 通过指针访问结构体变量中的数据
	cout << "姓名：" << p->name << "  年龄：" << p->age << "  成绩：" << p->score;

	return 0;
}
~~~

> 总结：结构体可以通过->操作符来访问结构体中的成员

### 8.5 结构体嵌套结构体

**作用：** 结构体中的成员可以是另一个结构体

**示例：**

~~~cpp
#include<iostream>
#include<string>

using namespace std;

//定义学生结构体
struct Student
{
	string name;
	int age;
	int score;
};
//定义老师结构体
struct Teacher
{
	int id;
	string name;
	int age;
	struct Student stu;
};
int main() {
	//结构体嵌套结构体
	//创建老师变量
	Teacher T;
	T.id = 1000;
	T.name = "大王";
	T.age = 30;
	T.stu.name = "小王";
	T.stu.age = 18;
	T.stu.score = 100;

	cout << "老师姓名：" << T.name << "  老师编号：" << T.id << "  老师年龄：" << T.age
		<< "  老师的学生姓名：" << T.stu.name << " 老师的学生的年龄：" << T.stu.age
		<< "  老师辅导学生的分数:" << T.stu.score;

	return 0;
} 
~~~

> **结构体：**在结构体中可以定义另一个结构体作为成员，用来解决实际问题

### 8.6 结构体做函数参数

**作用：** 将结构体作为参数向函数中传递

传递方式有两种：

+ 值传递
+ 地址传递

**示例：**

~~~cpp
#include<iostream>
#include<string>

using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

//值传递
void printStudent1(struct Student s)
{
	s.age = 80;
	cout << "子函数1中打印 姓名：" << s.name << " 年龄：" << s.age << " 成绩：" << s.score << endl;

}

//地址传递
void printStudent2(struct Student* s)
{
	s->age = 50;
	cout << "子函数2中打印 姓名：" << s->name << " 年龄：" << s->age << " 成绩：" << s->score << endl;

}

int main() {
	//结构体做函数参数

	//创建结构体变量
	struct Student s;
	s.name = "张三";
	s.age = 20;
	s.score = 100;

	cout << "main函数中打印 姓名：" << s.name << " 年龄：" << s.age << " 成绩：" << s.score << endl;
	//值传递
	printStudent1(s);
	//地址传递
	printStudent2(&s);
	cout << "main函数中打印 姓名：" << s.name << " 年龄：" << s.age << " 成绩：" << s.score << endl;

	return 0;
}
~~~

> 总结：如果不想修改主函数中的数据，用值传递；反之，用地址传递

### 8.7 结构体中const使用场景

**作用：** 用const来防止误操作

**示例：**

~~~cpp
#include<iostream>
#include<string>

using namespace std;

//const使用场景
struct Student
{
	string name;
	int age;
	int score;
};

//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printStudent(const Student* s)//const使用场景，加入const防止误操作
{
	//s->age = 150;//加入const后无法修改
	cout << "姓名：" << s->name << "\t年龄：" << s->age << "\t成绩：" << s->score;
}

int main() {
	struct Student s = { "张三",19,100 };

	//通过函数打印结构体变量信息
	printStudent(&s);

	return 0;
}
~~~

### 8.8 结构体案例

 #### 8.8.1 案例1

**案例描述：**

学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下：

设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员

学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师所带的学生赋值

最终打印出老师数据以及老师所带的学生数据 

**示例：**

~~~cpp
#include<iostream>
#include<string>
#include<time.h>

using namespace std;

//学生的结构体定义
struct Student
{
	string sName;
	int score;
};
//老师的结构体定义
struct Teacher
{
	string tName;
	struct Student sArray[5];
};
//给老师和学生赋值的函数
void allocateSpace(struct Teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	//给老师赋值
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//通过循环给每名老师所带的学生赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];

			int random = rand() % 61 + 40;//添加随机数40~100
			tArray[i].sArray[j].score = random;
		}

	}
}
//打印所有信息
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名：" << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].sName <<
				"\t考试分数：" << tArray[i].sArray[j].score << endl;
		}
	}
}

int main() {
	//随机数种子
	srand((unsigned int)time(NULL));

	//1. 创建3名老师的数组
	struct Teacher tArray[3];

	//2. 通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//3. 打印所有老师及所带的学生信息
	printInfo(tArray, len);
	return 0;
}
~~~

#### 8.2.2 案例2

**案例描述：**

设计一个英雄的结构体，包括成员姓名、年龄、性别；创建结构体数组，数组中存放5名英雄。

通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。

五名英雄信息如下：

~~~cpp
{"刘备",23,"男"},
{"关羽",22,"男"},
{"张飞",20,"男"},
{"赵云",21,"男"},
{"貂蝉",19,"女"},
~~~

**示例：**

~~~cpp
#include<iostream>
#include<string>

using namespace std;

//英雄结构体定义
struct Hero
{
	string name;
	int age;
	string sex;
};

//冒泡排序函数
void bubbuleSort(struct Hero hArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (hArray[j].age > hArray[j + 1].age)
			{
				struct Hero temp = hArray[j];
				hArray[j] = hArray[j + 1];
				hArray[j + 1] = temp;
			}
		}
	}
}

//打印结构体数组函数
void printInfo(struct Hero hArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << hArray[i].name << "\t年龄：" << hArray[i].age << "\t性别：" << hArray[i].sex << endl;
	}
}

int main() {
	//1. 创建结构体数组
	//2. 数组中存放无名英雄
	struct Hero hArray[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};

	//3. 打印排序前的结构体数组
	int len = sizeof(hArray) / sizeof(hArray[0]);
	cout << "排序前：" << endl;
	printInfo(hArray, len);

	//4. 冒泡排序
	bubbuleSort(hArray, len);

	//5. 打印排序后的结构体数组
	cout << "排序后" << endl;
	printInfo(hArray, len);
	return 0;
}
~~~

