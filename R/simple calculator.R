add<-function(x,y){
  return(x+y)
}
subtract<-function(x,y){
  return(x-y)
}
multiply<-function(x,y){
  return(x*y)
}
divide<-function(x,y){
  return(x/y)
}
print("select operaion.")
print("1.add")
print("2.subtract")
print("3.multiply")
print("4.divide")
choice=as.integer(readline(prompt = "enter choice[1/2/3/4]: "))
num1=as.integer(readline(prompt = "enter 1st number: "))
num2=as.integer(readline(prompt = "enter 2nd number: "))
operator<-switch (choice,"+","-","*","/")
result<-switch (choice,add(num1,num2),subtract(num1,num2),multiply(num1,num2),divide(num1,num2))
print(paste(num1,operator,num2,"=",result))

