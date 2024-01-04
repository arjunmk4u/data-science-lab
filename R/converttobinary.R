convert_to_binary<-function(n){
  if(n>1){
    convert_to_binary(as.integer(n/2))
  }
  cat(n%%2)
}
n=as.integer(readline(prompt = "enter the number: "))
convert_to_binary(n)
