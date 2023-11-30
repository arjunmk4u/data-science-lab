a<-10
print(a)
print("hello world")
name<-"john"
age<-40
print(name)
text<-"awesome"
paste("r is",text)
text<-"beautiful"
text1<-"r is"
paste(text1,text)
num<-10
num1<-20
num+num1
var1<-var2<-var3<-"orange"
var1
var2
var3
x<-10.5
class(x)
x<-9i+3
class(x)
x<-TRUE
class(x)
b<-10
c<-9i+3
class(b)
class(c)
x<-1L
y<-2
a<-as.numeric(x)
b<-as.complex(y)
x
y
class(a)
class(b)
a
b
max(5,12,25)
min(2,23,0)
sqrt(4)
ceiling(1.2)
floor(1.4)
str<-"hello"
str
str<-"hello,
happy birthday,
wish you a bright future"
str
str<-"hello,
happy birthday,
wish you a bright future"
cat(str)

str<-"hello world"
grepl('h',str)
grepl('hello',str)
grepl('x',str)
str1<-"hello"
str2<-"world"
paste(str1,str2)
str<-"we are the so called \"vikings\",from the north"
str
cat(str)
a<-33
b<-200
if(a>b)
{
  print("a is greater than b")
}
else
{
  print("b is greater than a")
}
x<-41
if(x>10)
{
  print("above ten")
  if(x>20)
  {
    print("and also above 20!")
  }
  else
  {
    print("but not above 20.")
  }
}
else
{
  print("below 10")
}
a<-200
b<-33
c<-500
if(a>b | c>a)
{
  print("AT LEAST ONE OF CONDITIONS IS TRUE")
}
i<-1
while(i<6)
{
  print(i)
  i<-i+1
  if(i==4)
  {
    break
  }
}
i<-0
whle(i)
