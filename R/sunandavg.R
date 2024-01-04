sum<-function(a,b,c)
{sum= a+b+c
avg= sum/3
print(paste("sum of ",a," ",b," ",c,"is= ",sum))
print(paste("avg of",a," ",b," ",c,"is= ",avg))
}
a<-(readline(promp="enter 1st number "))
b<-(readline(prompt = "enter 2nd number "))
c<-(readline(prompt = "enter 3rd number "))
a<-as.integer(a)
b<-as.integer(b)
c<-as.integer(c)
sum(a,b,c)
