x<-readline(prompt = "Enter a number ")
x<-as.integer(x)
{
  print(paste("the factors of ",x,"are:"))
  for(i in 1:x)
  {
    if((x%%i)==0)
    {
      print(i)
    }
  }
}
