count_vowels<-function(text){
  vowels<-c("a","e","i","o","u")
  num_vowels<-sum(strsplit(text," ") [[1]]%in%vowels)
  return(num_vowels)
}
num<-readline(prompt="enter string:")
count_vowels(num)

